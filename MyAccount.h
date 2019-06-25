#pragma once
#include"Globals.h"
#include <msclr\marshal_cppstd.h>

namespace OOP_Otlob_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyAccount
	/// </summary>
	public ref class MyAccount : public System::Windows::Forms::Form
	{
	public:
		MyAccount(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Password;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^  Phone;

	private: System::Windows::Forms::TextBox^  Email;

	private: System::Windows::Forms::TextBox^  LastName;

	private: System::Windows::Forms::TextBox^  FirstName;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyAccount::typeid));
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->Phone = (gcnew System::Windows::Forms::TextBox());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->LastName = (gcnew System::Windows::Forms::TextBox());
			this->FirstName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Password
			// 
			this->Password->Location = System::Drawing::Point(135, 194);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(126, 20);
			this->Password->TabIndex = 1;
			// 
			// Phone
			// 
			this->Phone->Location = System::Drawing::Point(135, 163);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(126, 20);
			this->Phone->TabIndex = 2;
			// 
			// Email
			// 
			this->Email->Location = System::Drawing::Point(135, 137);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(126, 20);
			this->Email->TabIndex = 3;
			// 
			// LastName
			// 
			this->LastName->Location = System::Drawing::Point(135, 101);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(126, 20);
			this->LastName->TabIndex = 4;
			// 
			// FirstName
			// 
			this->FirstName->Location = System::Drawing::Point(135, 72);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(126, 20);
			this->FirstName->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 18);
			this->label1->TabIndex = 6;
			this->label1->Text = L"First Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Last Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 18);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Email:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Phone:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 18);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Password:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(245, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 28);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Log out";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyAccount::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 391);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 28);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Apply";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyAccount::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 28);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Unregister";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyAccount::button3_Click);
			// 
			// MyAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 431);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FirstName);
			this->Controls->Add(this->LastName);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->Phone);
			this->Controls->Add(this->Password);
			this->Name = L"MyAccount";
			this->Text = L"MyAccount";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 Global::user = NULL;
				 MessageBox::Show("You logged out, Good bye");
				 this->Hide();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 try
				 {
					 Customer temp;
					 int index;
					 for (int i = 0; i<Global::registeredUsers.size(); i++)
					 {
						 if (Global::registeredUsers[i].id == Global::user->id)
						 {
							 temp = Global::registeredUsers[i];
							 index = i;
							 break;
						 }
					 }
					 msclr::interop::marshal_context con;
					 bool a = false;
					 if (FirstName->Text->Length > 0)
					 {
						 temp.F_name = con.marshal_as<string>(FirstName->Text);
						 a = true;
					 }
					 if (LastName->Text->Length > 0)
					 {
						 temp.L_name = con.marshal_as<string>(LastName->Text);
						 a = true;
					 }
					 if (Email->Text->Length > 0)
					 {
						 temp.email = con.marshal_as<string>(Email->Text);
						 a = true;
					 }
					 if (Password->Text->Length > 0)
					 {
						 temp.password = con.marshal_as<string>(Password->Text);
						 a = true;
					 }
					 if (Phone->Text->Length > 0)
					 {
						 temp.phone = con.marshal_as<string>(Phone->Text);
						 a = true;
					 }
					 if (a == true)
					 {
						 Global::registeredUsers[index] = temp;
						 MessageBox::Show("Profile Updated.");
					 }
					 else
						 MessageBox::Show("You haven't entered changes");
				 }
				 catch (...)
				 {
					 MessageBox::Show("Something went wrong!!");
				 }
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 try{

					 for (int i = 0; i<Global::registeredUsers.size(); i++)
					 {
						 if (Global::registeredUsers[i].id == Global::user->id)
						 {
							 string email = Global::registeredUsers[i].email;
							 Global::registeredUsers.erase(Global::registeredUsers.begin() + i);
							 Global::unregistered.push_back(email);
							 MessageBox::Show("Hope to see you soon sir, GOOD BYE");
							 Global::user = NULL;
							 this->Hide();
							 break;
						 }
					 }
				 }
				 catch (...)
				 {
					 MessageBox::Show("Something went wrong, please try again.");
				 }
	}
	};

}
