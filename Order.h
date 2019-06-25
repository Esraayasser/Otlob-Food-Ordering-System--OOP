#pragma once
#include "Resturant.h"

#include <utility>
using namespace std;

class Order
{
public:
	string resturant;
	string customerID;	 //el-user el-3ammal el-order
	vector<pair<string, pair<Food, int> > >items; //Category, Food Obj., QuantityOrdered
	map<Food, int> curItem;
	float totalPrice;
	bool state; //either '1' recieved or '0' cancelled
	Date ordersDate;
	string comment;
	string ID, orderid, address; //delivery boy

	Order();
	Order(string rest, string iD, float price, bool stat, Date dat, string CustID, string comment, vector<pair<string, pair<Food, int> > >item)
	{
		this->resturant = rest;
		this->ID = iD;
		this->totalPrice = price;
		this->state = stat;
		this->ordersDate = dat;
		this->customerID = CustID;
		this->comment = comment;
		this->items = item;
	}

	void calc(){ //Calculates the total price
		totalPrice = 0.0;
		for (int i = 0; i < items.size(); i++)
		{
			totalPrice += (items[i].second.first.price * items[i].second.second);
		}
	}

	void finish()
	{ //34an amla items mn item bss
		for (map<Food, int>::iterator it = curItem.begin(); it != curItem.end(); it++)
		{
			pair<Food, int> tmpPair = make_pair(it->first, it->second);
			items.push_back(make_pair(it->first.category, tmpPair));
		}
	}
};

