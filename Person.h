#pragma once
#include "Order.h"
using namespace std;
class Person //Abstract
{
public:
	string F_name, L_name;
	string email;
	string password;
	string phone;
	string id;
	Person();
	virtual bool login(string E, string P) = 0;
};

class Customer : public Person
{
public:
	Date birthDay;
	vector<Order> oldOrders; //previously ordered
	vector<Order> newOrders; //many orders form many resturants
	Customer();
	bool login(string E, string P)
	{
		return (email == E && password == P);
	}
};

class Manager : public Person
{
public:
	Manager();
	Manager(string E, string P)
	{
		email = E;
		password = P;
	}
	bool login(string E, string P)
	{
		return (email == E && password == P);
	}
};

class deliveryBoy : public Person
{
public:
	int countOrders; //Current orders
	bool login(string E, string P)
	{
		return (email == E && password == P);
	}
	deliveryBoy();
	deliveryBoy(string, string, string, int, string, string, string);
};