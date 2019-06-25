#pragma once
#include <string>
#include <vector>
#include <map>

using namespace std;

struct Date
{
	int day, year, month; //year, month, day
};

class Food
{
public:
	string name;
	string description;
	string category;
	int quantity; //available
	float price;
	Food();
	Food(string n, string d, float p, int q){
		name = n;
		description = d;
		quantity = q;
		price = p;
	}
};

struct openingTime{
	string open;
	string close;
	string day; //SUN, MON, TUE, WED, THU, FRI, SAT
};

class dailyDeal
{
public:
	string resturant;
	bool exist; //boolean 1, deal 4ayl values
	string name;
	float percentage;
	Date expireDate;
	string description; //optional
	dailyDeal();
};

class Resturant
{
public:
	string name;
	bool paymentWay;//1 Accept credit, 0 otherwise
	string location; //el-fr3 el-fat7oh
	string City;
	vector<pair<string, int> > deliveryLocations;//and delivery time (in minutes)
	dailyDeal deal; //mafe4 deal -> '#', yb2a exist = 0;
	float rating;
	float deliveryfee;
	map<string, vector<Food> > menu; //Category
	vector<openingTime> workingHours;
	vector<string> tags; //restaurant tags

	Resturant();
	Resturant(string n, string loc, vector<string> area, vector<int> time, dailyDeal d, float r, bool p, vector<openingTime> workHH, vector<string> Tags, float fees, string c){
		name = n;
		location = loc;
		for (unsigned int i = 0; i < area.size(); i++)
			deliveryLocations.push_back(make_pair(area[i], time[i]));
		deal = d;
		rating = r;
		paymentWay = p;
		workingHours = workHH;
		tags = Tags;
		deliveryfee = fees;
		City = c;
	}
};
class Review{
public:
	string restaurantName;
	string restaurantLocation;
	string CustomerName;//kassal badal ma-n7ot el-ID wn23od n-retrieve el-data wwa4, Fname+Lname
	Date submittedOn;//etkatab emta
	string Subject; //el review byb2lo subject ka-Header 
	string reviewComment;//
	int numOfStars;//mn 1 - 5
	Review(){
	}
	Review(string rN, string rL, string cN, Date d, string sub, string revComm, int n){
		restaurantName = rN;
		restaurantLocation = rL;
		CustomerName = cN;//kassal badal ma-n7ot el-ID wn23od n-retrieve el-data wwa4, Fname+Lname
		submittedOn = d;//etkatab emta
		Subject = sub; //el review byb2lo subject ka-Header 
		reviewComment = revComm;//
		numOfStars = n;
	}
};