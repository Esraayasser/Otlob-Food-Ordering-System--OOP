#include "Person.h"


Person::Person()
{
}

Customer::Customer()
{

}

Manager::Manager()
{

}

deliveryBoy::deliveryBoy()
{

}

deliveryBoy::deliveryBoy(string first, string last, string ID, int orders, string mail, string pw, string num)
{
	countOrders = orders;
	email = mail;
	F_name = first;
	L_name = last;
	password = pw;
	phone = num;
	id = ID;
}