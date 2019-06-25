#pragma once
#include <fstream>
#include "Person.h"
#include "Resturant.h"
#include <ctime>
#include <queue>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <msclr\marshal_cppstd.h>

		using namespace std;
		namespace Global
		{

			using namespace System;
			using namespace System::Windows::Forms;

			static time_t t = std::time(0);   // get time now
			static tm* now = std::localtime(&t);
			//now->tm_mday.ToString()
			//now->tm_mon+1
			//now->tm_year+1900
			//MessageBox::Show(now->tm_mday.ToString());
			//MessageBox::Show((now->tm_mon+1).ToString()); current month
			//MessageBox::Show((now->tm_year+1900).ToString());

			static int maximumQ;
			static string curlocation, curCity;
			static Resturant curResturant;
			static Order curOrder, tempOrder;
			static bool logged = 0,ProceedToCheckout = 0;
			static Manager admin("admin@org.com", "QUNN26");
			static Person *user;
			static int countEmp;

			static map<string, vector<Order> >oldOrders; //old Orders <CustomerID, Their Prev.Orders>
			static map<string, vector<Order> >newOrders; //new Orders <CustomerID, Their New Orders>
			static map<string, deliveryBoy>Dboy; //Data of delivery boys
			static priority_queue<pair<int, string> >delivery; //int awel wa7da lel ordercount w eltanie lel ID beta3 eldelivery boy
			static vector<Customer>registeredUsers;
			static vector<string>unregistered; //unregistered Emails
			static vector<dailyDeal>deals; //Deals collected from the restaurants
			static vector<Resturant>resturant, curLocRestaurants;
			static map<string, vector<string> >cities;
			static map<string, vector<string> >locations;
			static vector<Review> restaurantReviews;
			static map<string, bool> vouchers; // codes for discounts

			//Key: <Resturant, Category>, han-access direct el-vector dah, wnm4y 3lih until the Food Name is found, fl-(i-th) place
			//maslan hatla3y mnno el-Price
			static map<pair<string, string>, vector<Food> >foodRetrieval;


			static string trim(string &s)
			{
				for (unsigned int i = 0; i<s.size(); i++)
				if (s[i] == ' '){
					s.erase(i, 1);
					i--;
				}
				else
					break;
				for (unsigned int i = s.size() - 1; i >= 0; i--)
				if (s[i] == ' '){
					s.erase(i, 1);
				}
				else
					break;
				for (unsigned int i = 0; i<s.size(); i++){
					if (s[i] == ' '){
						for (unsigned int j = i + 1; j<s.size();){
							if (s[j] == ' ')
								s.erase(j, 1);
							else
								break;
						}
					}
				}
				return s;
			}
			static public ref class glo
			{
			public:
				static Form^ home;
				static Form^ showresturant;
				static Form^ Login_signup;
				static Form^ Menus;
				static Form^ Admin;
				static Form^ MyAccount;
				static void addOrder(String ^name){
					msclr::interop::marshal_context con;
					//MessageBox::Show(con.marshal_as<String^>(Global::curResturant.name) + ", " + (Global::curResturant.menu.size()).ToString());
					for (auto it : Global::curResturant.menu){
						String ^temp = con.marshal_as<String^>(it.first);
						vector<Food> v = it.second;
						bool ok = 0;
						for (int j = 0; j < v.size(); j++){
							ok = 0;
							if (v[j].name == con.marshal_as<string>(name)){
								for (int i = 0; i < curOrder.items.size(); i++){
									if (v[j].name == curOrder.items[i].second.first.name){
										curOrder.items[i].second.second++;
										ok = 1;
									}
								}
								if (!ok){
									pair<Food, int> tmpPair = make_pair(v[j], 1);
									curOrder.items.push_back(make_pair(it.first, tmpPair)); ok = 1;
								}
							}
						}
					}
				}
				static void cancelOrder(String ^name){
					msclr::interop::marshal_context con;
					string s = con.marshal_as<string>(name);
					for (auto it : curResturant.menu){
						bool ok = 0;
						for (int j = 0; j < it.second.size(); j++){
							if (it.second[j].name == s){
								for (int i = 0; i < curOrder.items.size(); i++){
									if (it.second[j].name == curOrder.items[i].second.first.name){
										curOrder.items.erase(curOrder.items.begin() + (i), curOrder.items.begin() + (i + 1));
										ok = 1; break;
									}
								}
							}
							if (ok)
								break;
						}
						if (ok)
							break;
					}
					glo::Menus->Controls["flp_Orders"]->Controls->Clear();
				}
				static void OrderOuantityChange(String ^name, int nQantity){
					msclr::interop::marshal_context con;
					string s = con.marshal_as<string>(name);
					for (auto it : curResturant.menu){
						bool ok = 0;
						for (int j = 0; j < it.second.size(); j++){
							if (it.second[j].name == s){
								for (int i = 0; i < curOrder.items.size(); i++){
									if (it.second[j].name == curOrder.items[i].second.first.name){
										curOrder.items[i].second.second = nQantity;
										break; ok = 1;
									}
								}
								if (ok)
									break;
							}
						}
						if (ok)
							break;
					}
				}
				static Order FML(){
					return curOrder;
				}
			};
			static void fillData()
			{
				for (unsigned int i = 0; i < resturant.size(); i++)
				{
					if (resturant[i].deal.exist == true)
					{
						Global::deals.push_back(resturant[i].deal);
					}
					//Adding all the categories Food vectors
					for (map<string, vector<Food> >::iterator it = resturant[i].menu.begin(); it != resturant[i].menu.end(); it++)
					{
						Global::foodRetrieval[make_pair(resturant[i].name, it->first)] = it->second;
					}
				}

			}
			//Functions Rating Calculation
			static void calcRating() //non-member function
			{
				//tm4y 3la vector el-review elly han3milo global
				//gowaha:
				map<pair<string, string>, vector<int> > ratingMeh; // Key <RestName, RestLoc>, Cell: push_back(NumOfStars);
				map<pair<string, string>, float > ratingValue; // Key <RestName, RestLoc>, Cell: push_back(NumOfStars);

				for (unsigned int i = 0; i < restaurantReviews.size(); i++)
				{
					pair<string, string> tmpKey = make_pair(restaurantReviews[i].restaurantName, restaurantReviews[i].restaurantLocation);
					ratingMeh[tmpKey].push_back(restaurantReviews[i].numOfStars);
				}
				for (map<pair<string, string>, vector<int> >::iterator it = ratingMeh.begin(); it != ratingMeh.end(); it++)
				{
					float tmpNumerator = 0;
					for (unsigned int i = 0; i < it->second.size(); i++)
					{
						tmpNumerator += it->second[i];
					}
					ratingValue[it->first] = tmpNumerator / (it->second.size() * 1.0);
				}
				for (unsigned int i = 0; i < resturant.size(); i++)
				{
					pair<string, string> tmpKey = make_pair(resturant[i].name, resturant[i].location);
					resturant[i].rating = ratingValue[tmpKey];
				}
			}
			static void load()
			{
				ifstream file;
				string s;

				file.open("countEmp.txt");
				getline(file, s);
				msclr::interop::marshal_context conMEH;
				Global::countEmp = int::Parse(conMEH.marshal_as<String^>(s));
				file.close();

				file.open("city.txt");
				while (getline(file, s))
				{
					unsigned int i = 0;
					string city = "", area = "";
					while (s[i] != ',')
						city += s[i], i++;
					i++;
					while (i < s.size())
					{
						if (s[i] == ',')
							Global::cities[city].push_back(area), area = "";
						else
							area += s[i];
						i++;
					}
					Global::cities[city].push_back(area);
				}
				file.close();
				//---------------------------------------------------------------------------------
				file.open("locations.txt");
				while (getline(file, s))
				{
					unsigned int i = 0;
					string location = "", resturant = "";
					while (s[i] != ',')
						location += s[i], i++;
					i++;
					while (i < s.size())
					{
						if (s[i] == ',')
							Global::locations[location].push_back(resturant), resturant = "";
						else
							resturant += s[i];
						i++;
					}
					Global::locations[location].push_back(resturant);
				}
				file.close();
				//---------------------------------------------------------------------------------
				file.open("resturants.txt");
				while (getline(file, s))
				{
					if (s[0] == '/') continue; //awl line 3obarra 3an comment
					string name, location, city; vector<string> area; vector<int> time; dailyDeal deal; float r, fee; bool p;
					vector<string> data;
					msclr::interop::marshal_context con;

					string delimiter = "|";
					unsigned int pos = 0;
					while ((pos = s.find(delimiter)) != string::npos)
					{
						data.push_back(s.substr(0, pos));
						s.erase(0, pos + delimiter.size());
					}
					data.push_back(s);

					name = data[0];
					location = data[1];

					while ((pos = data[2].find(',')) != string::npos) //Areas
					{
						area.push_back(data[2].substr(0, pos));
						data[2].erase(0, pos + 1);
					}
					area.push_back(data[2]);

					String ^temp;
					int tmp;
					while ((pos = data[3].find(',')) != string::npos) //Delievery Time
					{
						temp = con.marshal_as<String^>(data[3].substr(0, pos));
						tmp = int::Parse(temp);
						time.push_back(tmp);
						data[3].erase(0, pos + 1);
					}
					temp = con.marshal_as<String^>(data[3]);
					tmp = int::Parse(temp);
					time.push_back(tmp);

					if (data[4][0] == '#') //Empty Deal
						deal.exist = 0;
					else
					{
						deal.exist = 1;
						vector<string> dealData;
						while ((pos = data[4].find(',')) != string::npos)
						{
							dealData.push_back(data[4].substr(0, pos));
							data[4].erase(0, pos + 1);
						}
						dealData.push_back(data[4]);

						deal.name = dealData[0]; //0 name

						//1 value & parsing
						temp = con.marshal_as<String^>(dealData[1]);
						deal.percentage = float::Parse(temp);

						//2 Expiration date
						pos = dealData[2].find('$');
						temp = con.marshal_as<String^>(dealData[2].substr(0, pos));
						deal.expireDate.day = int::Parse(temp);
						dealData[2].erase(0, pos + 1);

						pos = dealData[2].find('$');
						temp = con.marshal_as<String^>(dealData[2].substr(0, pos));
						deal.expireDate.month = int::Parse(temp);
						dealData[2].erase(0, pos + 1);

						temp = con.marshal_as<String^>(dealData[2]);
						deal.expireDate.year = int::Parse(temp);

						//3 Description
						deal.description = dealData[3];

						//4 Restaurant Name;
						deal.resturant = name + " - " + location; //Ex: McDonald's - Agamy
					}

					temp = con.marshal_as<String^>(data[5]);
					r = float::Parse(temp);

					p = (data[6] == "1");

					vector<openingTime> workData;
					while ((pos = data[7].find(',')) != string::npos)
					{
						openingTime tmpTime;

						string tmpData = data[7].substr(0, pos);
						data[7].erase(0, pos + 1);

						int tmpPos = tmpData.find('$');
						tmpTime.open = tmpData.substr(0, tmpPos);
						tmpData.erase(0, tmpPos + 1);

						tmpPos = tmpData.find('$');
						tmpTime.close = tmpData.substr(0, tmpPos);
						tmpData.erase(0, tmpPos + 1);

						tmpTime.day = tmpData;

						workData.push_back(tmpTime);
					}
					openingTime tmpTime;
					tmpTime.open = data[7].substr(0, data[7].find('$'));
					data[7].erase(0, data[7].find('$') + 1);
					tmpTime.close = data[7].substr(0, data[7].find('$'));
					data[7].erase(0, data[7].find('$') + 1);
					tmpTime.day = data[7];
					workData.push_back(tmpTime);

					vector<string>tmpTags;
					while ((pos = data[8].find(',')) != string::npos)
					{
						tmpTags.push_back(data[8].substr(0, pos));
						data[8].erase(0, pos + 1);
					}
					tmpTags.push_back(data[8]);

					temp = con.marshal_as<String^>(data[9]);
					fee = float::Parse(temp);

					city = data[10];

					Resturant newResturant(name, location, area, time, deal, r, p, workData, tmpTags, fee, city);
					Global::resturant.push_back(newResturant);
				}
				file.close();
				//---------------------------------------------------------------------------------
				map<string, map<string, vector<Food> > > restaurantMenus; //kol mat3am wl-menu
				file.open("menu.txt");
				while (getline(file, s))
				{
					if (s[0] == '/') continue;
					map<string, vector<Food> > tmpMenu; //Category
					msclr::interop::marshal_context con;

					unsigned int pos = s.find('|');
					string restaurantName = s.substr(0, pos); //esm el-mat3am
					s.erase(0, pos + 1);

					vector<string> tmpCatNames;
					while ((pos = s.find(',')) != string::npos)
					{
						tmpCatNames.push_back(s.substr(0, pos));
						s.erase(0, pos + 1);
					}
					tmpCatNames.push_back(s);

					for (unsigned int i = 0; i < tmpCatNames.size(); i++)
					{
						getline(file, s); //extra

						vector<Food> tmpFoodVec;
						String ^temp;
						int tmpQ; float tmpPrice;
						while ((pos = s.find('$')) != string::npos)
						{
							string n = s.substr(0, s.find('@'));
							s.erase(0, s.find('@') + 1);
							string d = s.substr(0, s.find('@'));
							s.erase(0, s.find('@') + 1);
							string p = s.substr(0, s.find('@'));
							s.erase(0, s.find('@') + 1);
							string q = s.substr(0, s.find('$'));
							s.erase(0, s.find('$') + 1);
							//parse Price
							temp = con.marshal_as<String^>(p);
							tmpPrice = float::Parse(temp);

							//Parse Quantity
							temp = con.marshal_as<String^>(q);
							tmpQ = int::Parse(temp);

							Food tmpFood(n, d, tmpPrice, tmpQ);
							tmpFood.category = tmpCatNames[i];
							tmpFoodVec.push_back(tmpFood);
						}
						string n = s.substr(0, s.find('@')); s.erase(0, s.find('@') + 1);
						string d = s.substr(0, s.find('@')); s.erase(0, s.find('@') + 1);
						string p = s.substr(0, s.find('@')); s.erase(0, s.find('@') + 1);
						string q = s;
						//parse Price
						temp = con.marshal_as<String^>(p);
						tmpPrice = float::Parse(temp);

						//Parse Quantity
						temp = con.marshal_as<String^>(q);
						tmpQ = int::Parse(temp);

						Food tmpFood(n, d, tmpPrice, tmpQ);
						tmpFood.category = tmpCatNames[i];
						tmpFoodVec.push_back(tmpFood);
						tmpMenu[tmpCatNames[i]] = tmpFoodVec;
					}
					restaurantMenus[restaurantName] = tmpMenu;
				}
				file.close();

				//code to assign the menus to the restaurants
				for (unsigned int i = 0; i < Global::resturant.size(); i++)
				{
					Global::resturant[i].menu = restaurantMenus[Global::resturant[i].name];
				}
				//---------------------------------------------------------------------------------
				file.open("customer.txt");
				while (getline(file, s))
				{
					unsigned int i = 0;
					string regist = "", id = "", fname = "", lname = "", pass = "", e = "", phone = "", d = "", m = "", y = "";
					while (s[i] != ',')
						regist += s[i++];// if 1 yb2a register 0 not .
					i++;
					if (regist == "1"){// register
						while (s[i] != ',')
							id += s[i++]; // L id 
						i++;
						while (s[i] != ',')
							fname += s[i++]; // First name 
						i++;
						while (s[i] != ',')
							lname += s[i++]; // last name 
						i++;
						while (s[i] != ',')
							pass += s[i++]; // password 
						i++;
						while (s[i] != ',')
							e += s[i++]; // email 
						i++;
						while (s[i] != ',')
							phone += s[i++]; // phone
						i++;
						while (s[i] != ',')
							d += s[i++]; // day
						i++;
						while (s[i] != ',')
							m += s[i++]; // month
						i++;
						while (i<s.size())
							y += s[i++]; // year

						Customer c;
						c.id = id;
						c.F_name = fname;
						c.L_name = lname;
						c.email = e;
						c.password = pass;
						c.phone = phone;
						msclr::interop::marshal_context con;
						String ^temp = con.marshal_as<String^>(d);
						c.birthDay.day = int::Parse(temp);
						temp = con.marshal_as<String^>(m);
						c.birthDay.month = int::Parse(temp);
						temp = con.marshal_as<String^>(y);
						c.birthDay.year = int::Parse(temp);
						Global::registeredUsers.push_back(c);
					}
					else // not register
					{
						while (i<s.size())
						{
							e += s[i]; // email
						}
						Global::unregistered.push_back(e);
					}
				}
				file.close();
				//---------------------------------------------------------------------------------
				fillData(); //Temlla Deals & FoodRetrieval
				file.open("Orders.txt");
				while (getline(file, s))
				{
					if (s[0] != '1' && s[0] != '0')continue;
					Order temp;
					msclr::interop::marshal_context convert;
					String ^temm;
					string id = "", Address = "";
					temp.state = (s[0] == '1');
					unsigned int i = 2;
					while (s[i] != '|')
						id += s[i++];
					i++;
					while (s[i] != '|')
						Address += s[i++];
					i++;
					temp.address = Address;
					temp.orderid = id;
					while (s[i] != '|')//Adding date
					{
						string date;
						String ^tempo;
						while (s[i] != '-') //Day
						{
							date += s[i];
							i++;
						}
						tempo = convert.marshal_as<String^>(date);
						temp.ordersDate.day = int::Parse(tempo);
						i++;
						date.clear();
						while (s[i] != '-')
						{
							date += s[i];
							i++;
						}
						tempo = convert.marshal_as<String^>(date);
						temp.ordersDate.month = int::Parse(tempo);
						i++;
						date.clear();
						while (s[i] != '|')
						{
							date += s[i];
							i++;
						}
						tempo = convert.marshal_as<String^>(date);
						temp.ordersDate.year = int::Parse(tempo);
					}
					i++;
					while (s[i] != '|')
					{
						temp.comment += s[i];
						i++;
					}
					i++;
					while (s[i] != '|')
					{
						temp.ID += s[i]; //Delivery Boy
						i++;
					}
					i++;
					while (s[i] != '|')
					{
						temp.resturant += s[i]; //Restaurant Name
						i++;
					}
					i++;
					while (s[i] != '|')
					{
						temp.customerID += s[i];
						i++;
					}
					i++;

					while (i < s.size()) // Adding food and calculating price in it;
					{
						string foodname, category, quantity;
						while (s[i] != ',')//category name
						{
							category += s[i];
							i++;
						}
						i++;
						while (s[i] != ',')//food name
						{
							foodname += s[i];
							i++;
						}
						i++;
						while (s[i] != ',' && i < s.size())//quantity
						{
							quantity += s[i];
							i++;
						}
						i++;
						vector<Food>foods = Global::foodRetrieval[make_pair(temp.resturant, category)]; //food vector to iterate on it 

						String ^meeh;
						meeh = convert.marshal_as<String^>(quantity);
						int Quantity = int::Parse(meeh); //converting quantity to int 

						pair<Food, int>f; //pair to push it in the customer items list
						for (unsigned int y = 0; y < foods.size(); y++)
						{
							if (foods[y].name == foodname)
							{
								f.first = foods[y];
								f.second = Quantity;
								temp.items.push_back(make_pair(category, f));
								break;
							}
						}
					}
					temp.calc(); //Calculate the TotalPrice
					Global::oldOrders[temp.customerID].push_back(temp);
				}
				file.close();
				//---------------------------------------------------------------------------------
				file.open("DeliveryBoy.txt");
				while (getline(file, s))
				{
					if (s[0] == '/') continue;
					pair<int, string>p; //Pair 3shan a push 3la tol fl priority queue
					string first, last, mail, pw, phone, ID; //Attributes el delivery boy
					int orderr; //Attribute eldelivery boy kam order m3ah
					unsigned int i = 0;
					while (s[i] != '|') //loading first name
					{
						first += s[i];
						i++;
					}
					i++;
					while (s[i] != '|') // loading last name
					{
						last += s[i];
						i++;
					}
					i++;
					while (s[i] != '|')//loading ID
					{
						ID += s[i];
						i++;
					}
					i++;

					msclr::interop::marshal_context convert;
					string order;
					String ^Orders;
					while (s[i] != '|') // loading how many orders
					{
						order += s[i];
						i++;
					}
					Orders = convert.marshal_as<String^>(order);
					orderr = int::Parse(Orders);
					i++;
					while (s[i] != '|')//loading email
					{
						mail += s[i];
						i++;
					}
					i++;
					while (s[i] != '|')//loading password
					{
						pw += s[i];
						i++;
					}
					i++;
					while (i < s.size())//loading phone
					{
						phone += s[i];
						i++;
					}
					deliveryBoy temp(first, last, ID, orderr, mail, pw, phone); //creating object with constructor 
					p.first = temp.countOrders; // pair to push in priority queue
					p.second = temp.id;
					Global::delivery.push(p);//pushing in the priority queue
					Global::Dboy[temp.id] = temp;
				}
				file.close();
				//----------------------------------------------------------------------------------------------------------------
				file.open("Review.txt");
				while (getline(file, s)){
					if ((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z'))
					{
						msclr::interop::marshal_context con;
						string rN, rL, cN, dd, mm, yyyy, nummm; Date d; string sub, revComm; int n = 0; //Fix "No Comment.", "No Subject"
						int pos = s.find('|');
						rN = s.substr(0, pos); s.erase(0, pos + 1);
						pos = s.find('|');
						rL = s.substr(0, pos); s.erase(0, pos + 1);
						pos = s.find('|');
						cN = s.substr(0, pos); s.erase(0, pos + 1);
						//Date
						pos = s.find('-');
						dd = s.substr(0, pos); s.erase(0, pos + 1);
						//Parse
						d.day = int::Parse(con.marshal_as<String^>(dd));
						pos = s.find('-');
						mm = s.substr(0, pos); s.erase(0, pos + 1);
						//Parse
						d.month = int::Parse(con.marshal_as<String^>(mm));
						pos = s.find('|');
						yyyy = s.substr(0, pos); s.erase(0, pos + 1);
						//Parse
						d.year = int::Parse(con.marshal_as<String^>(dd));
						pos = s.find('|');
						sub = s.substr(0, pos); s.erase(0, pos + 1);
						pos = s.find('|');
						revComm = s.substr(0, pos); s.erase(0, pos + 1);

						nummm = s;
						//parse numofstars
						n = int::Parse(con.marshal_as<String^>(nummm));

						Review tmpR(rN, rL, cN, d, sub, revComm, n);
						restaurantReviews.push_back(tmpR);
					}
				}
				file.close();
				//-----------------------------------------------------------------------------
				file.open("vouchers.txt");
				while (getline(file, s))
				{
					vouchers[s] = 1;
				}
				file.close();
				calcRating();
			}

			static void close()
			{
				fstream ofs;
				ofstream file;

				ofs.open("customer.txt", ios::out | ios::trunc);
				ofs.close();

				file.open("customer.txt", ofstream::out | ofstream::app);
				for (unsigned int i = 0; i<registeredUsers.size(); i++)
				{
					// 1 , id , fname , lname , password , email , phone , day , month , year 
					string s = "1,";
					s += registeredUsers[i].id; s += ",";
					s += registeredUsers[i].F_name; s += ",";
					s += registeredUsers[i].L_name; s += ",";
					s += registeredUsers[i].password; s += ",";
					s += registeredUsers[i].email; s += ",";
					s += registeredUsers[i].phone; s += ",";
					msclr::interop::marshal_context con;
					String^ temp = registeredUsers[i].birthDay.day.ToString();
					string ttemp = con.marshal_as<string>(temp);
					s += ttemp; s += ",";
					temp = registeredUsers[i].birthDay.month.ToString();
					ttemp = con.marshal_as<string>(temp);
					s += ttemp; s += ",";
					temp = registeredUsers[i].birthDay.year.ToString();
					ttemp = con.marshal_as<string>(temp);
					s += ttemp;
					file << s << endl;
				}
				for (unsigned int i = 0; i<unregistered.size(); i++)
				{
					// 0 , email 
					string s = "0,";
					s += unregistered[i];
					file << s << endl;
				}
				file.close();
				//-----------------------------------------------------------------
				file.open("Orders.txt", ofstream::out | ofstream::app);
				map<string, vector<Order> >::iterator it;
				for (it = newOrders.begin(); it != newOrders.end(); it++)
				{
					vector<Order>tempo = it->second;
					for (unsigned int k = 0; k < tempo.size(); k++)
					{
						Order temp = tempo[k];
						file << temp.state << '|' << temp.orderid << '|' << temp.address << '|' << temp.ordersDate.day << '-' << temp.ordersDate.month << '-' << temp.ordersDate.year << '|';
						file << temp.comment << '|' << temp.ID << '|' << temp.resturant << '|' << temp.customerID << '|';
						for (unsigned int i = 0; i<temp.items.size(); i++)
						{
							file << temp.items[i].first << ',' << temp.items[i].second.first.name << ',' << temp.items[i].second.second;
							if (i < temp.items.size() - 1)
								file << ',';
						}
						file << endl;
					}
				}
				file.close();
				//--------------------------------------------------------------------------------------
				ofs.open("DeliveryBoy.txt", ios::out | ios::trunc);
				ofs.close(); // clearing the file to update the current orders count
				file.open("DeliveryBoy.txt", ofstream::out | ofstream::app);
				while (!Global::delivery.empty())
				{
					pair<int, string>k = Global::delivery.top(); //front of the priority queue
					deliveryBoy p = Global::Dboy[k.second]; //data of the first delivery boy in the pqueue
					file << p.F_name << '|' << p.L_name << '|' << k.first << '|' << p.countOrders << '|' << p.email;
					file << '|' << p.password << '|' << p.phone << endl;
					Global::delivery.pop(); //removing it from the pqueue to empty it
				}
				file.close();
				//--------------------------------------------------------------------------------------
				ofs.open("countEmp.txt", ios::out | ios::trunc);
				ofs.close(); // clearing the file to update the current orders count
				file.open("countEmp.txt", ofstream::out | ofstream::app);
				file << Global::countEmp;
				file.close();
				//--------------------------------------------------------------------------------------
				ofs.open("Review.txt", ios::out | ios::trunc);
				ofs.close();

				file.open("Review.txt", ofstream::out | ofstream::app);
				for (unsigned int i = 0; i < restaurantReviews.size(); i++){
					//restName|restLov|CustName fname+lname|dd-mm-yyyy|sub|revComm|numStars";
					file << restaurantReviews[i].restaurantName << '|';
					file << restaurantReviews[i].restaurantLocation << '|';
					file << restaurantReviews[i].CustomerName << '|';
					file << restaurantReviews[i].submittedOn.day << '-' << restaurantReviews[i].submittedOn.month << '-' << restaurantReviews[i].submittedOn.year << '|';
					file << restaurantReviews[i].Subject << '|';
					file << restaurantReviews[i].reviewComment << '|';
					file << restaurantReviews[i].numOfStars << '\n';
				}
				file.close();
				//--------------------------------------------------------------------------------------
				ofs.open("vouchers.txt", ios::out | ios::trunc);
				ofs.close();

				file.open("vouchers.txt", ofstream::out | ofstream::app);
				for (auto i : vouchers)
				{
					file << i.first << endl;
				}
				file.close();
			}
		}

	    class Globals
		{
		public:
			Globals();
		};

