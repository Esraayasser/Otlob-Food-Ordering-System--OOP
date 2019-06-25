#include "Home.h"
#include "ShowResturants.h"
#include "Globals.h"
#include "Login_signup.h"
#include "ResturantMenu.h"
#include "manger.h"
#include "MyAccount.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace Global;


[STAThread]
int Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(0);
	OOP_Otlob_Project::Home form;
	glo::home = gcnew OOP_Otlob_Project::Home();
	glo::showresturant = gcnew OOP_Otlob_Project::ShowResturants() ;
	glo::Login_signup = gcnew OOP_Otlob_Project::Login_signup();
	glo::Menus = gcnew OOP_Otlob_Project::ResturantMenu();
	glo::Admin = gcnew OOP_Otlob_Project::manger();
	glo::MyAccount = gcnew OOP_Otlob_Project::MyAccount();
	Application::Run(%form);
	return 0;
}