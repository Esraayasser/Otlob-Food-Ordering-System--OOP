#pragma once
#include <msclr\marshal_cppstd.h>
#include "Globals.h"
#include "ReviewOrder.h"
#define sz(a) int(a.size())
namespace OOP_Otlob_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Global;

	/// <summary>
	/// Summary for Login_signup
	/// </summary>
	public ref class Login_signup : public System::Windows::Forms::Form
	{
	public:
		Login_signup(void)
		{
			InitializeComponent();
			lbl_Signin->Font->Underline;
			panel_signin->Show();
			panel_Signup->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login_signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_Signin;
	protected:
	private: System::Windows::Forms::Label^  lbl_Signup;
	private: System::Windows::Forms::Panel^  panel_signin;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  tb_Password;
	private: System::Windows::Forms::TextBox^  tb_UserEmail;

	private: System::Windows::Forms::Panel^  panel_Signup;

	private: System::Windows::Forms::TextBox^  tb_newPassword;
	private: System::Windows::Forms::TextBox^  tb_Email;

	private: System::Windows::Forms::TextBox^  tb_Phone;
	private: System::Windows::Forms::TextBox^  tb_lastname;

	private: System::Windows::Forms::Button^  btn_SignUP;
	private: System::Windows::Forms::TextBox^  tb_firstname;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  tb_Month;
	private: System::Windows::Forms::TextBox^  tb_Year;
	private: System::Windows::Forms::TextBox^  tb_Day;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lbl_signinError;
	private: System::Windows::Forms::Label^  lbl_signupError;
	private: System::Windows::Forms::TextBox^  tb_RepeatedPassword;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login_signup::typeid));
			this->lbl_Signin = (gcnew System::Windows::Forms::Label());
			this->lbl_Signup = (gcnew System::Windows::Forms::Label());
			this->panel_signin = (gcnew System::Windows::Forms::Panel());
			this->lbl_signinError = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tb_Password = (gcnew System::Windows::Forms::TextBox());
			this->tb_UserEmail = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel_Signup = (gcnew System::Windows::Forms::Panel());
			this->tb_RepeatedPassword = (gcnew System::Windows::Forms::TextBox());
			this->lbl_signupError = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_Month = (gcnew System::Windows::Forms::TextBox());
			this->tb_Year = (gcnew System::Windows::Forms::TextBox());
			this->tb_Day = (gcnew System::Windows::Forms::TextBox());
			this->tb_newPassword = (gcnew System::Windows::Forms::TextBox());
			this->tb_Email = (gcnew System::Windows::Forms::TextBox());
			this->tb_Phone = (gcnew System::Windows::Forms::TextBox());
			this->tb_lastname = (gcnew System::Windows::Forms::TextBox());
			this->btn_SignUP = (gcnew System::Windows::Forms::Button());
			this->tb_firstname = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel_signin->SuspendLayout();
			this->panel_Signup->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_Signin
			// 
			this->lbl_Signin->AutoSize = true;
			this->lbl_Signin->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Signin->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Signin->ForeColor = System::Drawing::Color::White;
			this->lbl_Signin->Location = System::Drawing::Point(55, 111);
			this->lbl_Signin->Name = L"lbl_Signin";
			this->lbl_Signin->Size = System::Drawing::Size(81, 26);
			this->lbl_Signin->TabIndex = 0;
			this->lbl_Signin->Text = L"SIGN IN";
			this->lbl_Signin->Click += gcnew System::EventHandler(this, &Login_signup::lbl_Signin_Click);
			// 
			// lbl_Signup
			// 
			this->lbl_Signup->AutoSize = true;
			this->lbl_Signup->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Signup->Font = (gcnew System::Drawing::Font(L"Candara", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Signup->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->lbl_Signup->Location = System::Drawing::Point(133, 111);
			this->lbl_Signup->Name = L"lbl_Signup";
			this->lbl_Signup->Size = System::Drawing::Size(87, 26);
			this->lbl_Signup->TabIndex = 1;
			this->lbl_Signup->Text = L"SIGN UP";
			this->lbl_Signup->Click += gcnew System::EventHandler(this, &Login_signup::lbl_Signup_Click);
			// 
			// panel_signin
			// 
			this->panel_signin->BackColor = System::Drawing::Color::Transparent;
			this->panel_signin->Controls->Add(this->lbl_signinError);
			this->panel_signin->Controls->Add(this->button1);
			this->panel_signin->Controls->Add(this->tb_Password);
			this->panel_signin->Controls->Add(this->tb_UserEmail);
			this->panel_signin->Controls->Add(this->label2);
			this->panel_signin->Controls->Add(this->label1);
			this->panel_signin->Location = System::Drawing::Point(52, 151);
			this->panel_signin->Name = L"panel_signin";
			this->panel_signin->Size = System::Drawing::Size(257, 370);
			this->panel_signin->TabIndex = 2;
			// 
			// lbl_signinError
			// 
			this->lbl_signinError->AutoSize = true;
			this->lbl_signinError->Font = (gcnew System::Drawing::Font(L"Candara", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_signinError->ForeColor = System::Drawing::Color::DarkRed;
			this->lbl_signinError->Location = System::Drawing::Point(77, 255);
			this->lbl_signinError->Name = L"lbl_signinError";
			this->lbl_signinError->Size = System::Drawing::Size(0, 13);
			this->lbl_signinError->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(8, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"SIGN IN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login_signup::button1_Click);
			// 
			// tb_Password
			// 
			this->tb_Password->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Password->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Password->Location = System::Drawing::Point(8, 153);
			this->tb_Password->Name = L"tb_Password";
			this->tb_Password->PasswordChar = '*';
			this->tb_Password->Size = System::Drawing::Size(188, 16);
			this->tb_Password->TabIndex = 3;
			// 
			// tb_UserEmail
			// 
			this->tb_UserEmail->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_UserEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_UserEmail->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_UserEmail->Location = System::Drawing::Point(8, 111);
			this->tb_UserEmail->Name = L"tb_UserEmail";
			this->tb_UserEmail->Size = System::Drawing::Size(189, 16);
			this->tb_UserEmail->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->label2->Location = System::Drawing::Point(5, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->label1->Location = System::Drawing::Point(5, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Email";
			// 
			// panel_Signup
			// 
			this->panel_Signup->BackColor = System::Drawing::Color::Transparent;
			this->panel_Signup->Controls->Add(this->tb_RepeatedPassword);
			this->panel_Signup->Controls->Add(this->lbl_signupError);
			this->panel_Signup->Controls->Add(this->label3);
			this->panel_Signup->Controls->Add(this->tb_Month);
			this->panel_Signup->Controls->Add(this->tb_Year);
			this->panel_Signup->Controls->Add(this->tb_Day);
			this->panel_Signup->Controls->Add(this->tb_newPassword);
			this->panel_Signup->Controls->Add(this->tb_Email);
			this->panel_Signup->Controls->Add(this->tb_Phone);
			this->panel_Signup->Controls->Add(this->tb_lastname);
			this->panel_Signup->Controls->Add(this->btn_SignUP);
			this->panel_Signup->Controls->Add(this->tb_firstname);
			this->panel_Signup->Location = System::Drawing::Point(26, 148);
			this->panel_Signup->Name = L"panel_Signup";
			this->panel_Signup->Size = System::Drawing::Size(311, 370);
			this->panel_Signup->TabIndex = 5;
			// 
			// tb_RepeatedPassword
			// 
			this->tb_RepeatedPassword->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_RepeatedPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_RepeatedPassword->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_RepeatedPassword->ForeColor = System::Drawing::Color::LightGray;
			this->tb_RepeatedPassword->Location = System::Drawing::Point(169, 222);
			this->tb_RepeatedPassword->Name = L"tb_RepeatedPassword";
			this->tb_RepeatedPassword->Size = System::Drawing::Size(124, 20);
			this->tb_RepeatedPassword->TabIndex = 14;
			this->tb_RepeatedPassword->Text = L"Confirm Password";
			// 
			// lbl_signupError
			// 
			this->lbl_signupError->AutoSize = true;
			this->lbl_signupError->Font = (gcnew System::Drawing::Font(L"Candara", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_signupError->ForeColor = System::Drawing::Color::DarkRed;
			this->lbl_signupError->Location = System::Drawing::Point(113, 330);
			this->lbl_signupError->Name = L"lbl_signupError";
			this->lbl_signupError->Size = System::Drawing::Size(0, 13);
			this->lbl_signupError->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->label3->Location = System::Drawing::Point(30, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 19);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Birth Date :";
			// 
			// tb_Month
			// 
			this->tb_Month->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_Month->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Month->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Month->ForeColor = System::Drawing::Color::LightGray;
			this->tb_Month->Location = System::Drawing::Point(173, 97);
			this->tb_Month->Name = L"tb_Month";
			this->tb_Month->Size = System::Drawing::Size(124, 20);
			this->tb_Month->TabIndex = 12;
			this->tb_Month->Text = L"Month";
			this->tb_Month->Click += gcnew System::EventHandler(this, &Login_signup::tb_Month_Click);
			// 
			// tb_Year
			// 
			this->tb_Year->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_Year->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Year->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Year->ForeColor = System::Drawing::Color::LightGray;
			this->tb_Year->Location = System::Drawing::Point(34, 129);
			this->tb_Year->Name = L"tb_Year";
			this->tb_Year->Size = System::Drawing::Size(124, 20);
			this->tb_Year->TabIndex = 11;
			this->tb_Year->Text = L"Year";
			this->tb_Year->Click += gcnew System::EventHandler(this, &Login_signup::tb_Year_Click);
			// 
			// tb_Day
			// 
			this->tb_Day->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_Day->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Day->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Day->ForeColor = System::Drawing::Color::LightGray;
			this->tb_Day->Location = System::Drawing::Point(34, 97);
			this->tb_Day->Name = L"tb_Day";
			this->tb_Day->Size = System::Drawing::Size(124, 20);
			this->tb_Day->TabIndex = 10;
			this->tb_Day->Text = L"Day";
			this->tb_Day->Click += gcnew System::EventHandler(this, &Login_signup::tb_Day_Click);
			// 
			// tb_newPassword
			// 
			this->tb_newPassword->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_newPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_newPassword->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_newPassword->ForeColor = System::Drawing::Color::LightGray;
			this->tb_newPassword->Location = System::Drawing::Point(34, 222);
			this->tb_newPassword->Name = L"tb_newPassword";
			this->tb_newPassword->Size = System::Drawing::Size(124, 20);
			this->tb_newPassword->TabIndex = 8;
			this->tb_newPassword->Text = L"Password";
			this->tb_newPassword->Click += gcnew System::EventHandler(this, &Login_signup::tb_newPassword_Click);
			// 
			// tb_Email
			// 
			this->tb_Email->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_Email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Email->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Email->ForeColor = System::Drawing::Color::LightGray;
			this->tb_Email->Location = System::Drawing::Point(34, 191);
			this->tb_Email->Name = L"tb_Email";
			this->tb_Email->Size = System::Drawing::Size(218, 20);
			this->tb_Email->TabIndex = 7;
			this->tb_Email->Text = L"Email";
			this->tb_Email->Click += gcnew System::EventHandler(this, &Login_signup::tb_Eamil_Click);
			// 
			// tb_Phone
			// 
			this->tb_Phone->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_Phone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_Phone->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Phone->ForeColor = System::Drawing::Color::LightGray;
			this->tb_Phone->Location = System::Drawing::Point(34, 160);
			this->tb_Phone->Name = L"tb_Phone";
			this->tb_Phone->Size = System::Drawing::Size(218, 20);
			this->tb_Phone->TabIndex = 6;
			this->tb_Phone->Text = L"Phone";
			this->tb_Phone->Click += gcnew System::EventHandler(this, &Login_signup::tb_Phone_Click);
			// 
			// tb_lastname
			// 
			this->tb_lastname->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_lastname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_lastname->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_lastname->ForeColor = System::Drawing::Color::LightGray;
			this->tb_lastname->Location = System::Drawing::Point(173, 48);
			this->tb_lastname->Name = L"tb_lastname";
			this->tb_lastname->Size = System::Drawing::Size(124, 20);
			this->tb_lastname->TabIndex = 5;
			this->tb_lastname->Text = L"Last Name";
			this->tb_lastname->Click += gcnew System::EventHandler(this, &Login_signup::tb_lastname_Click);
			// 
			// btn_SignUP
			// 
			this->btn_SignUP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->btn_SignUP->FlatAppearance->BorderSize = 0;
			this->btn_SignUP->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->btn_SignUP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->btn_SignUP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_SignUP->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_SignUP->ForeColor = System::Drawing::Color::White;
			this->btn_SignUP->Location = System::Drawing::Point(68, 288);
			this->btn_SignUP->Name = L"btn_SignUP";
			this->btn_SignUP->Size = System::Drawing::Size(188, 32);
			this->btn_SignUP->TabIndex = 4;
			this->btn_SignUP->Text = L"SIGN UP";
			this->btn_SignUP->UseVisualStyleBackColor = false;
			this->btn_SignUP->Click += gcnew System::EventHandler(this, &Login_signup::btn_SignUP_Click);
			// 
			// tb_firstname
			// 
			this->tb_firstname->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tb_firstname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_firstname->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_firstname->ForeColor = System::Drawing::Color::LightGray;
			this->tb_firstname->Location = System::Drawing::Point(34, 48);
			this->tb_firstname->Name = L"tb_firstname";
			this->tb_firstname->Size = System::Drawing::Size(124, 20);
			this->tb_firstname->TabIndex = 2;
			this->tb_firstname->Text = L"First Name";
			this->tb_firstname->Click += gcnew System::EventHandler(this, &Login_signup::tb_firstname_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(328, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"x";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login_signup::button2_Click);
			// 
			// Login_signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(360, 550);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel_Signup);
			this->Controls->Add(this->panel_signin);
			this->Controls->Add(this->lbl_Signup);
			this->Controls->Add(this->lbl_Signin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login_signup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login_signup";
			this->Load += gcnew System::EventHandler(this, &Login_signup::Login_signup_Load);
			this->panel_signin->ResumeLayout(false);
			this->panel_signin->PerformLayout();
			this->panel_Signup->ResumeLayout(false);
			this->panel_Signup->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

	private: System::Void lbl_Signin_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 lbl_Signin->Font->Underline;
				 panel_signin->Show();
				 panel_Signup->Hide();
	}
	private: System::Void lbl_Signup_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 lbl_Signin->ForeColor = Color::FromArgb(215, 200, 119);
				 lbl_Signup->Font->Underline;
				 lbl_Signup->ForeColor = Color::White;
				 panel_signin->Hide();
				 panel_Signup->Show();
	}
	private: System::Void tb_firstname_Click(System::Object^  sender, System::EventArgs^  e) {
				 tb_firstname->Text = "";
				 tb_firstname->ForeColor = Color::Black;
	}

	private: System::Void tb_lastname_Click(System::Object^  sender, System::EventArgs^  e) {
				 tb_lastname->Text = "";
				 tb_lastname->ForeColor = Color::Black;
	}
	private: System::Void tb_Phone_Click(System::Object^  sender, System::EventArgs^  e) {
				 tb_Phone->Text = "";
				 tb_firstname->ForeColor = Color::Black;
	}
	private: System::Void tb_Eamil_Click(System::Object^  sender, System::EventArgs^  e) {
				 tb_Email->Text == "";
				 tb_Email->ForeColor = Color::Black;
	}
	private: System::Void tb_newPassword_Click(System::Object^  sender, System::EventArgs^  e) {
				 tb_newPassword->Text = "";
				 tb_newPassword->ForeColor = Color::Black;
	}
	private: System::Void tb_RepeatedPassword_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 tb_RepeatedPassword->Text = "";
				 tb_RepeatedPassword->ForeColor = Color::Black;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 close();
				 this->Close();
	}
	private: System::Void btn_SignUP_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 try
				 {
					 string fname, lname, phone, password, email, day, month, year, repeatedpassword;
					 msclr::interop::marshal_context con;

					 bool f = 1;
					 if (tb_firstname->Text->Length > 0 && tb_lastname->Text->Length > 0 && tb_Phone->Text->Length > 0 && tb_Email->Text->Length > 0 && tb_newPassword->Text->Length > 0 && tb_Year->Text->Length > 0 && tb_Month->Text->Length > 0 && tb_Day->Text->Length > 0 && tb_RepeatedPassword->Text->Length > 0)
					 {
						 fname = con.marshal_as<string>(tb_firstname->Text);
						 lname = con.marshal_as<string>(tb_lastname->Text);
						 phone = con.marshal_as<string>(tb_Phone->Text);
						 email = con.marshal_as<string>(tb_Email->Text);
						 day = con.marshal_as<string>(tb_Day->Text);
						 month = con.marshal_as<string>(tb_Month->Text);
						 year = con.marshal_as<string>(tb_Year->Text);
						 password = con.marshal_as<string>(tb_newPassword->Text);
						 repeatedpassword = con.marshal_as<string>(tb_RepeatedPassword->Text);

						 trim(fname), trim(lname), trim(phone);
						 trim(email), trim(password), trim(repeatedpassword);
						 trim(day), trim(month), trim(year);

						 for (int i = 0; i<registeredUsers.size(); i++)
						 {
							 if (registeredUsers[i].email == email)
							 {
								 lbl_signupError->Text = "This Email is already registered.";
								 f = 0;
								 break;
							 }
						 }
						 if (f == 1)
						 {
							 if (password == repeatedpassword)
							 {
								 Customer c;
								 String^ temp = con.marshal_as<String^>(registeredUsers[registeredUsers.size() - 1].id);
								 int tempid = int::Parse(temp);
								 tempid++;
								 c.id = con.marshal_as<string>(tempid.ToString());
								 c.F_name = fname;
								 c.L_name = lname;
								 c.email = email;
								 c.phone = phone;
								 c.password = password;
								 c.birthDay.day = int::Parse(con.marshal_as<String^>(day));
								 c.birthDay.month = int::Parse(con.marshal_as<String^>(month));
								 c.birthDay.year = int::Parse(con.marshal_as<String^>(year));
								 registeredUsers.push_back(c);
								 MessageBox::Show("Done");
								 Global::user = new Customer(c);
								 this->Close();
							 }
							 else
							 {
								 MessageBox::Show("Passwords don't match.");
							 }
						 }
					 }
					 else if (f)
					 {
						 f = 0;
						 MessageBox::Show("Enter valid data");
					 }
				 }
				 catch (...)
				 {
					 MessageBox::Show("Something went wrong here!");
				 }
				 if (ProceedToCheckout){
					 ProceedToCheckout = 0;
					 this->Close();
					 curOrder = glo::FML();
					 ReviewOrder ^ro = gcnew ReviewOrder();
					 ro->Show();
					 this->Close();
				 }
				 logged = 1;
				 tb_Password->ForeColor = Color::LightGray;
				 tb_UserEmail->ForeColor = Color::LightGray;
				 tb_Password->Text = "Password";
				 tb_UserEmail->Text = "Email";
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 try
				 {
					 string email, pass;
					 msclr::interop::marshal_context con;

					 email = con.marshal_as<string>(tb_UserEmail->Text);
					 pass = con.marshal_as<string>(tb_Password->Text);

					 trim(email);
					 trim(pass);

					 if (!sz(email) || !sz(pass))
					 {
						 lbl_signinError->Text = "Please, enter valid data.";
					 }
					 else
					 {
						 bool f = 0;
						 for (int i = 0; i<sz(registeredUsers); i++)
						 {
							 if (Global::registeredUsers[i].login(email, pass))
							 {
								 logged = 1;
								 user = new Customer(registeredUsers[i]);
								 MessageBox::Show("Welcome.");
								 f = 1;
								 this->Close();
								 break;
							 }
						 }
						 if (admin.login(email, pass)){ // fixed
							 f = 1;
							 logged = 1;
							 user = new Manager();
							 glo::Admin->Show();
							 this->Close();
						 }
						 if (!f)
						 {
							 lbl_signinError->Text = "Please, enter valid data.";
						 }
					 }
				 }
				 catch (...)
				 {
					 MessageBox::Show("Something went wrong, try again please.");
				 }
				 if (ProceedToCheckout){
					 ProceedToCheckout = 0;
					 this -> Close();
					 curOrder = glo::FML();
					 ReviewOrder ^ro = gcnew ReviewOrder();
					 ro->Show();
					 this->Close();
				 }
				 logged = 1;
				 tb_Year->ForeColor = Color::LightGray;
				 tb_Month->ForeColor = Color::LightGray;
				 tb_Day->ForeColor = Color::LightGray;
				 tb_Email->ForeColor = Color::LightGray;
				 tb_newPassword->ForeColor = Color::LightGray;
				 tb_RepeatedPassword->ForeColor = Color::LightGray;
				 tb_firstname->ForeColor = Color::LightGray;
				 tb_lastname->ForeColor = Color::LightGray;
				 tb_Phone->ForeColor = Color::LightGray;
				 tb_Day->Text = "Day";
				 tb_Month->Text = "Month";
				 tb_Year->Text = "Year";
				 tb_Email->Text = "Email";
				 tb_firstname->Text = "First name";
				 tb_lastname->Text = "Last name";
				 tb_Phone->Text = "Phone";
				 tb_newPassword->Text = "New Password";
				 tb_RepeatedPassword->Text = "Repeates Password";
	}
	private: System::Void tb_Year_Click(System::Object^  sender, System::EventArgs^  e) {
				 tb_Year->Text = "";
				 tb_Year->ForeColor = Color::Black;
	}
	private: System::Void tb_Month_Click(System::Object^  sender, System::EventArgs^  e) {
				 tb_Month->Text = "";
				 tb_Month->ForeColor = Color::Black;
	}
	private: System::Void tb_Day_Click(System::Object^  sender, System::EventArgs^  e) {
				 tb_Day->Text = "";
				 tb_Day->ForeColor = Color::Black;
	}

private: System::Void Login_signup_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
