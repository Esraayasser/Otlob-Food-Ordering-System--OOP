#pragma once
#include "Globals.h"
#include <msclr\marshal_cppstd.h>
#include<set>
#define sz(a) a.size()
#include <msclr\marshal_cppstd.h>

namespace OOP_Otlob_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Global;
	/// <summary>
	/// Summary for ManagerFrm
	/// </summary>
	public ref class manger : public System::Windows::Forms::Form
	{
	public:
		manger(void)
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
		~manger()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  add;
	private: System::Windows::Forms::TextBox^  fnametxt;
	private: System::Windows::Forms::TabPage^  remov;


	private: System::Windows::Forms::TabPage^  view;
	private: System::Windows::Forms::TabPage^  bill;
	private: System::Windows::Forms::TabPage^  check;
	private: System::Windows::Forms::TextBox^  emailtxt;








	private: System::Windows::Forms::TextBox^  passtxt;
	private: System::Windows::Forms::TextBox^  phonetxt;


	private: System::Windows::Forms::TextBox^  lnametxt;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  addboy;
	private: System::Windows::Forms::ListBox^  ids;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listbill;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ListBox^  quantitylist;

	private: System::Windows::Forms::ListBox^  foodlist;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ListBox^  ordersid;
	private: System::Windows::Forms::ListBox^  listfood;
	private: System::Windows::Forms::TabPage^  vouchers;
	private: System::Windows::Forms::ListBox^  codes;
	private: System::Windows::Forms::TextBox^  codetxt;
	private: System::Windows::Forms::Button^  add_code;
	private: System::Windows::Forms::Button^  btn_Add;
	private: System::Windows::Forms::Button^  btn_remove;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;







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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->add = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->addboy = (gcnew System::Windows::Forms::Button());
			this->emailtxt = (gcnew System::Windows::Forms::TextBox());
			this->passtxt = (gcnew System::Windows::Forms::TextBox());
			this->phonetxt = (gcnew System::Windows::Forms::TextBox());
			this->lnametxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fnametxt = (gcnew System::Windows::Forms::TextBox());
			this->remov = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ids = (gcnew System::Windows::Forms::ListBox());
			this->view = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listbill = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->bill = (gcnew System::Windows::Forms::TabPage());
			this->listfood = (gcnew System::Windows::Forms::ListBox());
			this->ordersid = (gcnew System::Windows::Forms::ListBox());
			this->check = (gcnew System::Windows::Forms::TabPage());
			this->quantitylist = (gcnew System::Windows::Forms::ListBox());
			this->foodlist = (gcnew System::Windows::Forms::ListBox());
			this->vouchers = (gcnew System::Windows::Forms::TabPage());
			this->add_code = (gcnew System::Windows::Forms::Button());
			this->codes = (gcnew System::Windows::Forms::ListBox());
			this->codetxt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_Add = (gcnew System::Windows::Forms::Button());
			this->btn_remove = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->add->SuspendLayout();
			this->remov->SuspendLayout();
			this->view->SuspendLayout();
			this->bill->SuspendLayout();
			this->check->SuspendLayout();
			this->vouchers->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->add);
			this->tabControl1->Controls->Add(this->remov);
			this->tabControl1->Controls->Add(this->view);
			this->tabControl1->Controls->Add(this->bill);
			this->tabControl1->Controls->Add(this->check);
			this->tabControl1->Controls->Add(this->vouchers);
			this->tabControl1->Location = System::Drawing::Point(179, -24);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(534, 450);
			this->tabControl1->TabIndex = 0;
			// 
			// add
			// 
			this->add->Controls->Add(this->label6);
			this->add->Controls->Add(this->label5);
			this->add->Controls->Add(this->label);
			this->add->Controls->Add(this->label2);
			this->add->Controls->Add(this->addboy);
			this->add->Controls->Add(this->emailtxt);
			this->add->Controls->Add(this->passtxt);
			this->add->Controls->Add(this->phonetxt);
			this->add->Controls->Add(this->lnametxt);
			this->add->Controls->Add(this->label1);
			this->add->Controls->Add(this->fnametxt);
			this->add->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->Location = System::Drawing::Point(4, 22);
			this->add->Name = L"add";
			this->add->Padding = System::Windows::Forms::Padding(3);
			this->add->Size = System::Drawing::Size(526, 424);
			this->add->TabIndex = 0;
			this->add->Text = L"Add empolyee";
			this->add->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(55, 180);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Email";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(55, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Phone";
			// 
			// label
			// 
			this->label->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->ForeColor = System::Drawing::Color::Black;
			this->label->Location = System::Drawing::Point(208, 180);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(100, 23);
			this->label->TabIndex = 16;
			this->label->Text = L"Password";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(208, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Last name";
			// 
			// addboy
			// 
			this->addboy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->addboy->FlatAppearance->BorderSize = 0;
			this->addboy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addboy->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addboy->ForeColor = System::Drawing::Color::White;
			this->addboy->Location = System::Drawing::Point(61, 338);
			this->addboy->Name = L"addboy";
			this->addboy->Size = System::Drawing::Size(288, 32);
			this->addboy->TabIndex = 14;
			this->addboy->Text = L"Add";
			this->addboy->UseVisualStyleBackColor = false;
			this->addboy->Click += gcnew System::EventHandler(this, &manger::addboy_Click);
			// 
			// emailtxt
			// 
			this->emailtxt->Location = System::Drawing::Point(58, 206);
			this->emailtxt->Multiline = true;
			this->emailtxt->Name = L"emailtxt";
			this->emailtxt->Size = System::Drawing::Size(135, 23);
			this->emailtxt->TabIndex = 9;
			// 
			// passtxt
			// 
			this->passtxt->Location = System::Drawing::Point(211, 206);
			this->passtxt->Multiline = true;
			this->passtxt->Name = L"passtxt";
			this->passtxt->Size = System::Drawing::Size(135, 23);
			this->passtxt->TabIndex = 8;
			// 
			// phonetxt
			// 
			this->phonetxt->Location = System::Drawing::Point(58, 278);
			this->phonetxt->Multiline = true;
			this->phonetxt->Name = L"phonetxt";
			this->phonetxt->Size = System::Drawing::Size(135, 23);
			this->phonetxt->TabIndex = 7;
			// 
			// lnametxt
			// 
			this->lnametxt->Location = System::Drawing::Point(211, 134);
			this->lnametxt->Multiline = true;
			this->lnametxt->Name = L"lnametxt";
			this->lnametxt->Size = System::Drawing::Size(135, 23);
			this->lnametxt->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(55, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 5;
			this->label1->Text = L"First name";
			// 
			// fnametxt
			// 
			this->fnametxt->Location = System::Drawing::Point(58, 134);
			this->fnametxt->Multiline = true;
			this->fnametxt->Name = L"fnametxt";
			this->fnametxt->Size = System::Drawing::Size(135, 23);
			this->fnametxt->TabIndex = 0;
			// 
			// remov
			// 
			this->remov->Controls->Add(this->label3);
			this->remov->Controls->Add(this->ids);
			this->remov->Location = System::Drawing::Point(4, 22);
			this->remov->Name = L"remov";
			this->remov->Padding = System::Windows::Forms::Padding(3);
			this->remov->Size = System::Drawing::Size(526, 424);
			this->remov->TabIndex = 1;
			this->remov->Text = L"Remove empolyee";
			this->remov->UseVisualStyleBackColor = true;
			this->remov->Click += gcnew System::EventHandler(this, &manger::remov_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(37, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 23);
			this->label3->TabIndex = 1;
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &manger::label3_Click);
			// 
			// ids
			// 
			this->ids->FormattingEnabled = true;
			this->ids->Location = System::Drawing::Point(40, 70);
			this->ids->Name = L"ids";
			this->ids->Size = System::Drawing::Size(205, 212);
			this->ids->TabIndex = 0;
			this->ids->SelectedIndexChanged += gcnew System::EventHandler(this, &manger::ids_SelectedIndexChanged);
			// 
			// view
			// 
			this->view->Controls->Add(this->label7);
			this->view->Controls->Add(this->listbill);
			this->view->Controls->Add(this->comboBox1);
			this->view->Location = System::Drawing::Point(4, 22);
			this->view->Name = L"view";
			this->view->Padding = System::Windows::Forms::Padding(3);
			this->view->Size = System::Drawing::Size(526, 424);
			this->view->TabIndex = 2;
			this->view->Text = L"View bills";
			this->view->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12.25F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(47, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 21);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Select bills by:";
			// 
			// listbill
			// 
			this->listbill->BackColor = System::Drawing::Color::Orange;
			this->listbill->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->listbill->FormattingEnabled = true;
			this->listbill->ItemHeight = 18;
			this->listbill->Location = System::Drawing::Point(226, 32);
			this->listbill->Name = L"listbill";
			this->listbill->Size = System::Drawing::Size(234, 238);
			this->listbill->TabIndex = 1;
			this->listbill->SelectedIndexChanged += gcnew System::EventHandler(this, &manger::listbill_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Date", L"CustomerID" });
			this->comboBox1->Location = System::Drawing::Point(51, 64);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(130, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &manger::comboBox1_SelectedIndexChanged);
			// 
			// bill
			// 
			this->bill->BackColor = System::Drawing::Color::Transparent;
			this->bill->Controls->Add(this->listfood);
			this->bill->Controls->Add(this->ordersid);
			this->bill->Location = System::Drawing::Point(4, 22);
			this->bill->Name = L"bill";
			this->bill->Padding = System::Windows::Forms::Padding(3);
			this->bill->Size = System::Drawing::Size(526, 424);
			this->bill->TabIndex = 3;
			this->bill->Text = L"Bills";
			this->bill->Click += gcnew System::EventHandler(this, &manger::bill_Click);
			// 
			// listfood
			// 
			this->listfood->FormattingEnabled = true;
			this->listfood->Location = System::Drawing::Point(234, 15);
			this->listfood->Name = L"listfood";
			this->listfood->Size = System::Drawing::Size(205, 264);
			this->listfood->TabIndex = 1;
			// 
			// ordersid
			// 
			this->ordersid->FormattingEnabled = true;
			this->ordersid->Location = System::Drawing::Point(6, 15);
			this->ordersid->Name = L"ordersid";
			this->ordersid->Size = System::Drawing::Size(205, 264);
			this->ordersid->TabIndex = 0;
			this->ordersid->SelectedIndexChanged += gcnew System::EventHandler(this, &manger::ordersid_SelectedIndexChanged);
			// 
			// check
			// 
			this->check->Controls->Add(this->quantitylist);
			this->check->Controls->Add(this->foodlist);
			this->check->Location = System::Drawing::Point(4, 22);
			this->check->Name = L"check";
			this->check->Padding = System::Windows::Forms::Padding(3);
			this->check->Size = System::Drawing::Size(526, 424);
			this->check->TabIndex = 4;
			this->check->Text = L"Check quantity";
			this->check->UseVisualStyleBackColor = true;
			this->check->Click += gcnew System::EventHandler(this, &manger::check_Click);
			// 
			// quantitylist
			// 
			this->quantitylist->FormattingEnabled = true;
			this->quantitylist->Location = System::Drawing::Point(232, 29);
			this->quantitylist->Name = L"quantitylist";
			this->quantitylist->Size = System::Drawing::Size(187, 251);
			this->quantitylist->TabIndex = 1;
			// 
			// foodlist
			// 
			this->foodlist->FormattingEnabled = true;
			this->foodlist->Location = System::Drawing::Point(39, 29);
			this->foodlist->Name = L"foodlist";
			this->foodlist->Size = System::Drawing::Size(187, 251);
			this->foodlist->TabIndex = 0;
			// 
			// vouchers
			// 
			this->vouchers->Controls->Add(this->add_code);
			this->vouchers->Controls->Add(this->codes);
			this->vouchers->Controls->Add(this->codetxt);
			this->vouchers->Location = System::Drawing::Point(4, 22);
			this->vouchers->Name = L"vouchers";
			this->vouchers->Size = System::Drawing::Size(526, 424);
			this->vouchers->TabIndex = 5;
			this->vouchers->Text = L"vouchers";
			this->vouchers->UseVisualStyleBackColor = true;
			this->vouchers->Click += gcnew System::EventHandler(this, &manger::vouchers_Click);
			// 
			// add_code
			// 
			this->add_code->Location = System::Drawing::Point(105, 150);
			this->add_code->Name = L"add_code";
			this->add_code->Size = System::Drawing::Size(75, 23);
			this->add_code->TabIndex = 2;
			this->add_code->Text = L"Add Code";
			this->add_code->UseVisualStyleBackColor = true;
			this->add_code->Click += gcnew System::EventHandler(this, &manger::add_code_Click);
			// 
			// codes
			// 
			this->codes->FormattingEnabled = true;
			this->codes->Location = System::Drawing::Point(303, 18);
			this->codes->Name = L"codes";
			this->codes->Size = System::Drawing::Size(207, 277);
			this->codes->TabIndex = 1;
			// 
			// codetxt
			// 
			this->codetxt->Location = System::Drawing::Point(68, 92);
			this->codetxt->Multiline = true;
			this->codetxt->Name = L"codetxt";
			this->codetxt->Size = System::Drawing::Size(148, 30);
			this->codetxt->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::DarkGray;
			this->button1->Location = System::Drawing::Point(-5, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &manger::button1_Click);
			// 
			// btn_Add
			// 
			this->btn_Add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btn_Add->FlatAppearance->BorderSize = 0;
			this->btn_Add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Add->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold));
			this->btn_Add->ForeColor = System::Drawing::Color::DarkGray;
			this->btn_Add->Location = System::Drawing::Point(-5, 12);
			this->btn_Add->Name = L"btn_Add";
			this->btn_Add->Size = System::Drawing::Size(193, 43);
			this->btn_Add->TabIndex = 2;
			this->btn_Add->Text = L"Add Employee";
			this->btn_Add->UseVisualStyleBackColor = false;
			this->btn_Add->Click += gcnew System::EventHandler(this, &manger::btn_Add_Click);
			// 
			// btn_remove
			// 
			this->btn_remove->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->btn_remove->FlatAppearance->BorderSize = 0;
			this->btn_remove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_remove->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold));
			this->btn_remove->ForeColor = System::Drawing::Color::DarkGray;
			this->btn_remove->Location = System::Drawing::Point(-5, 76);
			this->btn_remove->Name = L"btn_remove";
			this->btn_remove->Size = System::Drawing::Size(193, 43);
			this->btn_remove->TabIndex = 3;
			this->btn_remove->Text = L"Remove Employee";
			this->btn_remove->UseVisualStyleBackColor = false;
			this->btn_remove->Click += gcnew System::EventHandler(this, &manger::btn_remove_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::DarkGray;
			this->button2->Location = System::Drawing::Point(-5, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(193, 43);
			this->button2->TabIndex = 4;
			this->button2->Text = L"View Bills";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &manger::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::DarkGray;
			this->button4->Location = System::Drawing::Point(-5, 204);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(193, 43);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Check Quantity";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &manger::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::DarkGray;
			this->button5->Location = System::Drawing::Point(-5, 268);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(193, 43);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Vouchers";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &manger::button5_Click);
			// 
			// manger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(707, 416);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_Add);
			this->Controls->Add(this->btn_remove);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Name = L"manger";
			this->Text = L"manger";
			this->tabControl1->ResumeLayout(false);
			this->add->ResumeLayout(false);
			this->add->PerformLayout();
			this->remov->ResumeLayout(false);
			this->view->ResumeLayout(false);
			this->view->PerformLayout();
			this->bill->ResumeLayout(false);
			this->check->ResumeLayout(false);
			this->vouchers->ResumeLayout(false);
			this->vouchers->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addboy_Click(System::Object^  sender, System::EventArgs^  e) {
				 string fname, lname, phone, password, email;
				 msclr::interop::marshal_context con;
				 fname = con.marshal_as<string>(fnametxt->Text);
				 lname = con.marshal_as<string>(lnametxt->Text);
				 phone = con.marshal_as<string>(phonetxt->Text);
				 email = con.marshal_as<string>(emailtxt->Text);
				 password = con.marshal_as<string>(passtxt->Text);
				 trim(fname), trim(lname), trim(phone);
				 trim(email), trim(password);
				 bool f = 1;
				 for (auto i : Dboy)
				 {
					 if (i.second.email == email)
					 {
						 f = 0;
						 break;
					 }

				 }
				 if (!sz(fname) || !sz(lname) || !sz(phone) || !sz(email)
					 || !sz(password))
				 {
					 f = 0;
					 MessageBox::Show("Enter valid data");
				 }
				 else if (f)
				 {
					 String^ s = (Dboy.size() + 1).ToString();
					 string temp = con.marshal_as<string>(s);
					 deliveryBoy boy(fname, lname, temp, 0, email, password, phone);
					 Dboy[temp] = boy;
					 delivery.push(make_pair(0, temp));
					 MessageBox::Show("Done");
					 fnametxt->Text = "";
					 lnametxt->Text = "";
					 passtxt->Text = "";
					 emailtxt->Text = "";
					 phonetxt->Text = "";
				 }
				 else
					 MessageBox::Show("This email is used");


	}
			 void set()
			 {
				 ids->Items->Clear();
				 msclr::interop::marshal_context con;
				 for (auto i : Dboy)
				 {
					 String^ id = con.marshal_as<String^>(i.first);
					 ids->Items->Add(id);
				 }
			 }


	private: System::Void remov_Click(System::Object^  sender, System::EventArgs^  e) {
				 set();
	}
	private: System::Void ids_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 label3->Visible = true;
				 label3->Text = "Are you sure you want to delete him?";
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
				 msclr::interop::marshal_context con;
				 string id = con.marshal_as<string>(ids->SelectedItem->ToString());
				 Dboy.erase(id);
				 priority_queue<pair<int, string> > temp;
				 while (delivery.size())
				 {
					 if (delivery.top().second == id)
					 {
						 delivery.pop();
						 break;
					 }
					 temp.push(delivery.top());
					 delivery.pop();
				 }
				 while (temp.size())
				 {
					 delivery.push(temp.top());
					 temp.pop();
				 }
				 label3->Visible = false;
				 set();

	}
			 void set_id()
			 {
				 if (comboBox1->Text == "CustomerID")
				 {
					 for (auto i : oldOrders)
					 {
						 msclr::interop::marshal_context con;
						 String^ id = con.marshal_as<String^>(i.first);
						 listbill->Items->Add(id);
					 }
				 }
			 }
			 void set_food()
			 {
				 foodlist->Items->Clear();
				 quantitylist->Items->Clear();
				 for (auto rest : resturant){
					 for (auto cat : rest.menu)
					 {
						 for (auto food : cat.second)
						 {
							 msclr::interop::marshal_context con;
							 String^ name = con.marshal_as<String^>(food.name);
							 String^ quantity = (food.quantity.ToString());
							 foodlist->Items->Add(name);
							 quantitylist->Items->Add(quantity);
						 }
					 }
				 }
			 }
	private: System::Void check_Click(System::Object^  sender, System::EventArgs^  e) {

				 set_food();

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 glo::home->Show();
				 this->Hide();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (comboBox1->SelectedItem->ToString() == "Date")
				 {
					 listbill->Items->Clear();
					 std::set<string>s; //set to make dates added to list unique
					 map<string, vector<Order> >::iterator it; //iterating over old orders
					 map<string, vector<Order> >m; //to show the selected date orders
					 for (it = Global::oldOrders.begin(); it != oldOrders.end(); it++)
					 {
						 vector<Order>v = it->second;
						 for (int i = 0; i<v.size(); i++)
						 {
							 string date = "";
							 msclr::interop::marshal_context con;
							 date += con.marshal_as<string>(v[i].ordersDate.day.ToString());
							 date += '-';
							 date += con.marshal_as<string>(v[i].ordersDate.month.ToString());
							 date += '-';
							 date += con.marshal_as<string>(v[i].ordersDate.year.ToString());
							 s.insert(date);
							 m[date].push_back(v[i]);
						 }
					 }
					 std::set<string>::iterator ii;
					 for (ii = s.begin(); ii != s.end(); ii++)
					 {
						 msclr::interop::marshal_context con;
						 String^ name = con.marshal_as<String^>(*ii);
						 listbill->Items->Add(name);
					 }
				 }
				 else if (comboBox1->SelectedItem->ToString() == "CustomerID")
				 {
					 listbill->Items->Clear();
					 map<string, vector<Order> >::iterator ii;
					 for (ii = oldOrders.begin(); ii != oldOrders.end(); ii++)
					 {
						 msclr::interop::marshal_context con;
						 String^ name = con.marshal_as<String^>(ii->first);
						 listbill->Items->Add(name);
					 }
				 }
				 else
				 {
					 listbill->Items->Clear();
				 }
	}
	private: System::Void listbill_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 msclr::interop::marshal_context con;
				 ordersid->Items->Clear();
				 if (comboBox1->Text == "Date")
				 {
					 String^ selected = listbill->SelectedItem->ToString();
					 String^ day = "", ^month = "", ^year = "";
					 int i = 0;
					 while (selected[i] != '-')
						 day += selected[i++];
					 i++;
					 while (selected[i] != '-')
						 month += selected[i++];
					 i++;
					 while (i<selected->Length)
						 year += selected[i++];
					 int mmonth = int::Parse(month);
					 int dday = int::Parse(day);
					 int yyear = int::Parse(year);
					 ordersid->Items->Clear();
					 for (auto cat : newOrders)
					 {
						 for (auto order : cat.second)
						 {
							 if (order.ordersDate.day == dday &&
								 order.ordersDate.month == mmonth &&
								 order.ordersDate.year == yyear)
							 {
								 String^ id = con.marshal_as<String^>(order.orderid);
								 ordersid->Items->Add(id);
							 }
						 }
					 }
					 for (auto cat : oldOrders)
					 {
						 for (auto order : cat.second)
						 {
							 if (order.ordersDate.day == dday &&
								 order.ordersDate.month == mmonth &&
								 order.ordersDate.year == yyear)
							 {
								 String^ id = con.marshal_as<String^>(order.orderid);
								 ordersid->Items->Add(id);
							 }
						 }
					 }
				 }
				 else
				 {
					 string id = con.marshal_as<string>(listbill->SelectedItem->ToString());

					 for (auto order : oldOrders[id])
					 {
						 if (order.customerID == id)
						 {
							 String^ id = con.marshal_as<String^>(order.orderid);
							 ordersid->Items->Add(id);
						 }
					 }
					 for (auto order : newOrders[id])
					 {
						 if (order.customerID == id)
						 {
							 String^ id = con.marshal_as<String^>(order.orderid);
							 ordersid->Items->Add(id);
						 }
					 }

				 }
				 tabControl1->SelectTab("bill");
	}
	private: System::Void bill_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void ordersid_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 msclr::interop::marshal_context con;
				 string id = con.marshal_as<string>(ordersid->SelectedItem->ToString());
				 listfood->Items->Clear();
				 bool f = 0;
				 if (comboBox1->Text == "CustomerID"){
					 string cid = con.marshal_as<string>(listbill->SelectedItem->ToString());
					 for (auto order : oldOrders[cid])
					 {
						 if (id == order.orderid){
							 for (auto item : order.items)
							 {
								 String^ it_cat = con.marshal_as<String^>(item.first);
								 String^ it_fname = con.marshal_as<String^>(item.second.first.name);
								 String^ it_quantity = item.second.second.ToString();
								 listfood->Items->Add(it_cat + " , " + it_fname + " , " + it_quantity);
							 }
						 }
					 }
					 for (auto order : newOrders[cid])
					 {
						 if (id == order.orderid){
							 for (auto item : order.items)
							 {
								 String^ it_cat = con.marshal_as<String^>(item.first);
								 String^ it_fname = con.marshal_as<String^>(item.second.first.name);
								 String^ it_quantity = item.second.second.ToString();
								 listfood->Items->Add(it_cat + " , " + it_fname + " , " + it_quantity);
							 }
						 }
					 }
				 }
				 else
				 {
					 String^ selected = listbill->SelectedItem->ToString();
					 String^ day = "", ^month = "", ^year = "";
					 int i = 0;
					 while (selected[i] != '-')
						 day += selected[i++];
					 i++;
					 while (selected[i] != '-')
						 month += selected[i++];
					 i++;
					 while (i<selected->Length)
						 year += selected[i++];
					 int mmonth = int::Parse(month);
					 int dday = int::Parse(day);
					 int yyear = int::Parse(year);
					 for (auto cat : oldOrders)
					 {
						 for (auto order : cat.second){
							 if (order.ordersDate.day == dday &&
								 order.ordersDate.month == mmonth &&
								 order.ordersDate.year == yyear){
								 for (auto item : order.items)
								 {
									 String^ it_cat = con.marshal_as<String^>(item.first);
									 String^ it_fname = con.marshal_as<String^>(item.second.first.name);
									 String^ it_quantity = item.second.second.ToString();
									 listfood->Items->Add(it_cat + " , " + it_fname + " , " + it_quantity);
								 }
							 }
						 }
					 }
					 for (auto cat : newOrders)
					 {
						 for (auto order : cat.second){
							 if (order.ordersDate.day == dday &&
								 order.ordersDate.month == mmonth &&
								 order.ordersDate.year == yyear){
								 for (auto item : order.items)
								 {
									 String^ it_cat = con.marshal_as<String^>(item.first);
									 String^ it_fname = con.marshal_as<String^>(item.second.first.name);
									 String^ it_quantity = item.second.second.ToString();
									 listfood->Items->Add(it_cat + " , " + it_fname + " , " + it_quantity);
								 }
							 }
						 }
					 }
				 }

	}

			 void run()
			 {
				 codes->Items->Clear();
				 msclr::interop::marshal_context con;
				 for (auto i : Global::vouchers)
				 {
					 String^ temp = con.marshal_as<String^>(i.first);
					 codes->Items->Add(temp);
				 }
			 }
	private: System::Void add_code_Click(System::Object^  sender, System::EventArgs^  e) {
				 msclr::interop::marshal_context con;
				 string temp = con.marshal_as<string>(codetxt->Text);
				 Global::vouchers[temp] = 1;
				 run();
	}
	private: System::Void btn_Add_Click(System::Object^  sender, System::EventArgs^  e) {
				 tabControl1->SelectTab("add");
	}
	private: System::Void btn_remove_Click(System::Object^  sender, System::EventArgs^  e) {
				 tabControl1->SelectTab("remov");
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 tabControl1->SelectTab("view");
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 tabControl1->SelectTab("check");
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 tabControl1->SelectTab("vouchers");
	}
	private: System::Void vouchers_Click(System::Object^  sender, System::EventArgs^  e) {
				 run();
	}
	};
}
