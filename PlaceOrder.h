#pragma once
#include "Globals.h"
#include <msclr\marshal_cppstd.h>
#include "PlaceOrderUC.h"
#include "PayByCredit.h"
namespace OOP_Otlob_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Global;
	/// <summary>
	/// Summary for PlaceOrder
	/// </summary>
	public ref class PlaceOrder : public System::Windows::Forms::Form
	{
	public:
		PlaceOrder(void)
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
		~PlaceOrder()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  lbl_total;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::FlowLayoutPanel^  flp_Order;
	private: System::Windows::Forms::Panel^  panel5;




	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  btn_ShowRestaurnats;










	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel18;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::Button^  btn_Exit;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lbl_Phone;
	private: System::Windows::Forms::Label^  lbl_Email;
	private: System::Windows::Forms::Label^  lbl_MyName;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Label^  lbl_location;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  tb_aapNum;

	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  tb_floorNumber;

	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  tb_BuildingNumber;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  tb_Street;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::RadioButton^  rb_PaymentMethod;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::FlowLayoutPanel^  flp_Orders;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Panel^  panel13;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  lbl_DeliveryTime;

private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TextBox^  tb_Comments;
private: System::Windows::Forms::Button^  btn_Profile;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PlaceOrder::typeid));
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->lbl_total = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->flp_Order = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Phone = (gcnew System::Windows::Forms::Label());
			this->lbl_Email = (gcnew System::Windows::Forms::Label());
			this->lbl_MyName = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tb_Comments = (gcnew System::Windows::Forms::TextBox());
			this->lbl_location = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tb_aapNum = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tb_floorNumber = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tb_BuildingNumber = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tb_Street = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->rb_PaymentMethod = (gcnew System::Windows::Forms::RadioButton());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_ShowRestaurnats = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_Profile = (gcnew System::Windows::Forms::Button());
			this->btn_Exit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->flp_Orders = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->lbl_DeliveryTime = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->panel6->SuspendLayout();
			this->flp_Order->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->panel6->Controls->Add(this->lbl_total);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(331, 30);
			this->panel6->TabIndex = 51;
			// 
			// lbl_total
			// 
			this->lbl_total->AutoSize = true;
			this->lbl_total->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_total->Location = System::Drawing::Point(249, 5);
			this->lbl_total->Name = L"lbl_total";
			this->lbl_total->Size = System::Drawing::Size(37, 18);
			this->lbl_total->TabIndex = 37;
			this->lbl_total->Text = L"EGP";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(9, 5);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 18);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Total";
			// 
			// flp_Order
			// 
			this->flp_Order->AutoScroll = true;
			this->flp_Order->BackColor = System::Drawing::SystemColors::Control;
			this->flp_Order->Controls->Add(this->panel5);
			this->flp_Order->Controls->Add(this->panel8);
			this->flp_Order->Controls->Add(this->panel9);
			this->flp_Order->Controls->Add(this->panel10);
			this->flp_Order->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flp_Order->Location = System::Drawing::Point(27, 158);
			this->flp_Order->Name = L"flp_Order";
			this->flp_Order->Size = System::Drawing::Size(723, 546);
			this->flp_Order->TabIndex = 50;
			this->flp_Order->WrapContents = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel5->Controls->Add(this->lbl_Phone);
			this->panel5->Controls->Add(this->lbl_Email);
			this->panel5->Controls->Add(this->lbl_MyName);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Location = System::Drawing::Point(3, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(697, 151);
			this->panel5->TabIndex = 49;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PlaceOrder::panel5_Paint);
			// 
			// lbl_Phone
			// 
			this->lbl_Phone->AutoSize = true;
			this->lbl_Phone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Phone->Location = System::Drawing::Point(195, 100);
			this->lbl_Phone->Name = L"lbl_Phone";
			this->lbl_Phone->Size = System::Drawing::Size(177, 20);
			this->lbl_Phone->TabIndex = 44;
			this->lbl_Phone->Text = L"Estimated delivery time";
			// 
			// lbl_Email
			// 
			this->lbl_Email->AutoSize = true;
			this->lbl_Email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Email->Location = System::Drawing::Point(195, 75);
			this->lbl_Email->Name = L"lbl_Email";
			this->lbl_Email->Size = System::Drawing::Size(177, 20);
			this->lbl_Email->TabIndex = 43;
			this->lbl_Email->Text = L"Estimated delivery time";
			// 
			// lbl_MyName
			// 
			this->lbl_MyName->AutoSize = true;
			this->lbl_MyName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_MyName->Location = System::Drawing::Point(195, 50);
			this->lbl_MyName->Name = L"lbl_MyName";
			this->lbl_MyName->Size = System::Drawing::Size(177, 20);
			this->lbl_MyName->TabIndex = 42;
			this->lbl_MyName->Text = L"Estimated delivery time";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(22, 102);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 18);
			this->label14->TabIndex = 41;
			this->label14->Text = L"Phone";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(22, 77);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 18);
			this->label13->TabIndex = 40;
			this->label13->Text = L"Email";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel7->Location = System::Drawing::Point(7, 36);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(685, 3);
			this->panel7->TabIndex = 39;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(20, 4);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(199, 25);
			this->label12->TabIndex = 38;
			this->label12->Text = L"My contact details";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(22, 52);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 18);
			this->label10->TabIndex = 37;
			this->label10->Text = L"Full Name";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel8->Controls->Add(this->label15);
			this->panel8->Location = System::Drawing::Point(3, 160);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(697, 45);
			this->panel8->TabIndex = 52;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(20, 9);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(231, 25);
			this->label15->TabIndex = 39;
			this->label15->Text = L"Your delivery address";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel9->Controls->Add(this->label4);
			this->panel9->Controls->Add(this->tb_Comments);
			this->panel9->Controls->Add(this->lbl_location);
			this->panel9->Controls->Add(this->label26);
			this->panel9->Controls->Add(this->tb_aapNum);
			this->panel9->Controls->Add(this->label24);
			this->panel9->Controls->Add(this->label25);
			this->panel9->Controls->Add(this->tb_floorNumber);
			this->panel9->Controls->Add(this->label22);
			this->panel9->Controls->Add(this->label23);
			this->panel9->Controls->Add(this->tb_BuildingNumber);
			this->panel9->Controls->Add(this->label20);
			this->panel9->Controls->Add(this->label21);
			this->panel9->Controls->Add(this->tb_Street);
			this->panel9->Controls->Add(this->label18);
			this->panel9->Controls->Add(this->label19);
			this->panel9->Controls->Add(this->label17);
			this->panel9->Controls->Add(this->label16);
			this->panel9->Location = System::Drawing::Point(3, 211);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(697, 504);
			this->panel9->TabIndex = 52;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 432);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 18);
			this->label4->TabIndex = 60;
			this->label4->Text = L"Delivery instructions";
			// 
			// tb_Comments
			// 
			this->tb_Comments->BackColor = System::Drawing::SystemColors::Window;
			this->tb_Comments->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Comments->Location = System::Drawing::Point(25, 454);
			this->tb_Comments->Name = L"tb_Comments";
			this->tb_Comments->Size = System::Drawing::Size(322, 31);
			this->tb_Comments->TabIndex = 59;
			// 
			// lbl_location
			// 
			this->lbl_location->AutoSize = true;
			this->lbl_location->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_location->Location = System::Drawing::Point(24, 398);
			this->lbl_location->Name = L"lbl_location";
			this->lbl_location->Size = System::Drawing::Size(116, 20);
			this->lbl_location->TabIndex = 58;
			this->lbl_location->Text = L"Required fields";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(24, 373);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(109, 18);
			this->label26->TabIndex = 57;
			this->label26->Text = L"Your Location";
			// 
			// tb_aapNum
			// 
			this->tb_aapNum->BackColor = System::Drawing::SystemColors::Window;
			this->tb_aapNum->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_aapNum->Location = System::Drawing::Point(27, 316);
			this->tb_aapNum->Name = L"tb_aapNum";
			this->tb_aapNum->Size = System::Drawing::Size(322, 31);
			this->tb_aapNum->TabIndex = 56;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(44, 291);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(156, 18);
			this->label24->TabIndex = 55;
			this->label24->Text = L"Appartment number";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label25->Location = System::Drawing::Point(23, 293);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(15, 20);
			this->label25->TabIndex = 54;
			this->label25->Text = L"*";
			// 
			// tb_floorNumber
			// 
			this->tb_floorNumber->BackColor = System::Drawing::SystemColors::Window;
			this->tb_floorNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_floorNumber->Location = System::Drawing::Point(27, 238);
			this->tb_floorNumber->Name = L"tb_floorNumber";
			this->tb_floorNumber->Size = System::Drawing::Size(322, 31);
			this->tb_floorNumber->TabIndex = 53;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(44, 213);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(105, 18);
			this->label22->TabIndex = 52;
			this->label22->Text = L"Floor number";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(23, 215);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(15, 20);
			this->label23->TabIndex = 51;
			this->label23->Text = L"*";
			// 
			// tb_BuildingNumber
			// 
			this->tb_BuildingNumber->BackColor = System::Drawing::SystemColors::Window;
			this->tb_BuildingNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_BuildingNumber->Location = System::Drawing::Point(27, 158);
			this->tb_BuildingNumber->Name = L"tb_BuildingNumber";
			this->tb_BuildingNumber->Size = System::Drawing::Size(322, 31);
			this->tb_BuildingNumber->TabIndex = 50;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(44, 133);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(128, 18);
			this->label20->TabIndex = 49;
			this->label20->Text = L"Building number";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(23, 135);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(15, 20);
			this->label21->TabIndex = 48;
			this->label21->Text = L"*";
			// 
			// tb_Street
			// 
			this->tb_Street->BackColor = System::Drawing::SystemColors::Window;
			this->tb_Street->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_Street->Location = System::Drawing::Point(27, 77);
			this->tb_Street->Name = L"tb_Street";
			this->tb_Street->Size = System::Drawing::Size(322, 31);
			this->tb_Street->TabIndex = 47;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(44, 52);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(49, 18);
			this->label18->TabIndex = 46;
			this->label18->Text = L"Street";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(23, 54);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(15, 20);
			this->label19->TabIndex = 45;
			this->label19->Text = L"*";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(41, 12);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(118, 18);
			this->label17->TabIndex = 44;
			this->label17->Text = L"Required fields";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(21, 14);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 20);
			this->label16->TabIndex = 43;
			this->label16->Text = L"*";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel10->Controls->Add(this->rb_PaymentMethod);
			this->panel10->Controls->Add(this->label27);
			this->panel10->Controls->Add(this->label28);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Controls->Add(this->label32);
			this->panel10->Location = System::Drawing::Point(3, 721);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(697, 151);
			this->panel10->TabIndex = 52;
			// 
			// rb_PaymentMethod
			// 
			this->rb_PaymentMethod->AutoSize = true;
			this->rb_PaymentMethod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rb_PaymentMethod->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_PaymentMethod->Location = System::Drawing::Point(25, 92);
			this->rb_PaymentMethod->Name = L"rb_PaymentMethod";
			this->rb_PaymentMethod->Size = System::Drawing::Size(291, 26);
			this->rb_PaymentMethod->TabIndex = 47;
			this->rb_PaymentMethod->TabStop = true;
			this->rb_PaymentMethod->Text = L"Pay with cash upon delivery.";
			this->rb_PaymentMethod->UseVisualStyleBackColor = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(42, 53);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(118, 18);
			this->label27->TabIndex = 46;
			this->label27->Text = L"Required fields";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Red;
			this->label28->Location = System::Drawing::Point(21, 55);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(15, 20);
			this->label28->TabIndex = 45;
			this->label28->Text = L"*";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel11->Location = System::Drawing::Point(7, 36);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(685, 3);
			this->panel11->TabIndex = 39;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(20, 6);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(210, 25);
			this->label32->TabIndex = 38;
			this->label32->Text = L"Choose How to pay";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Controls->Add(this->btn_ShowRestaurnats);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Location = System::Drawing::Point(793, 564);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(331, 95);
			this->panel3->TabIndex = 48;
			// 
			// btn_ShowRestaurnats
			// 
			this->btn_ShowRestaurnats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(195)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btn_ShowRestaurnats->FlatAppearance->BorderSize = 0;
			this->btn_ShowRestaurnats->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btn_ShowRestaurnats->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(52)));
			this->btn_ShowRestaurnats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ShowRestaurnats->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ShowRestaurnats->ForeColor = System::Drawing::Color::White;
			this->btn_ShowRestaurnats->Location = System::Drawing::Point(11, 48);
			this->btn_ShowRestaurnats->Name = L"btn_ShowRestaurnats";
			this->btn_ShowRestaurnats->Size = System::Drawing::Size(309, 33);
			this->btn_ShowRestaurnats->TabIndex = 36;
			this->btn_ShowRestaurnats->Text = L"PLACE ORDER NOW";
			this->btn_ShowRestaurnats->UseVisualStyleBackColor = false;
			this->btn_ShowRestaurnats->Click += gcnew System::EventHandler(this, &PlaceOrder::btn_ShowRestaurnats_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(648, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Place order";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(497, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 17);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Review order";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(363, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Your data";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(662, 71);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(35, 35);
			this->pictureBox3->TabIndex = 44;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(377, 71);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(35, 35);
			this->pictureBox5->TabIndex = 43;
			this->pictureBox5->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Location = System::Drawing::Point(557, 87);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(100, 2);
			this->panel2->TabIndex = 42;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel18->Location = System::Drawing::Point(418, 87);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(100, 2);
			this->panel18->TabIndex = 41;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(522, 71);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->TabIndex = 40;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->btn_Profile);
			this->panel1->Controls->Add(this->btn_Exit);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1150, 54);
			this->panel1->TabIndex = 39;
			// 
			// btn_Profile
			// 
			this->btn_Profile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_Profile->FlatAppearance->BorderSize = 0;
			this->btn_Profile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Profile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Profile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Profile->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Profile->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->btn_Profile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Profile.Image")));
			this->btn_Profile->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Profile->Location = System::Drawing::Point(948, 9);
			this->btn_Profile->Name = L"btn_Profile";
			this->btn_Profile->Size = System::Drawing::Size(164, 29);
			this->btn_Profile->TabIndex = 10;
			this->btn_Profile->Text = L"Esraa Yasser";
			this->btn_Profile->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_Profile->UseVisualStyleBackColor = true;
			this->btn_Profile->Click += gcnew System::EventHandler(this, &PlaceOrder::btn_Profile_Click);
			// 
			// btn_Exit
			// 
			this->btn_Exit->FlatAppearance->BorderSize = 0;
			this->btn_Exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Exit->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->btn_Exit->Location = System::Drawing::Point(1118, 15);
			this->btn_Exit->Name = L"btn_Exit";
			this->btn_Exit->Size = System::Drawing::Size(20, 20);
			this->btn_Exit->TabIndex = 6;
			this->btn_Exit->Text = L"X";
			this->btn_Exit->UseVisualStyleBackColor = true;
			this->btn_Exit->Click += gcnew System::EventHandler(this, &PlaceOrder::btn_Exit_Click);
			this->btn_Exit->MouseLeave += gcnew System::EventHandler(this, &PlaceOrder::btn_Exit_MouseLeave);
			this->btn_Exit->MouseHover += gcnew System::EventHandler(this, &PlaceOrder::btn_Exit_MouseHover);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(48, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(185, 51);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// flp_Orders
			// 
			this->flp_Orders->AutoScroll = true;
			this->flp_Orders->BackColor = System::Drawing::Color::White;
			this->flp_Orders->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flp_Orders.BackgroundImage")));
			this->flp_Orders->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->flp_Orders->Location = System::Drawing::Point(793, 279);
			this->flp_Orders->Name = L"flp_Orders";
			this->flp_Orders->Size = System::Drawing::Size(331, 279);
			this->flp_Orders->TabIndex = 54;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel12->Controls->Add(this->label29);
			this->panel12->Location = System::Drawing::Point(793, 232);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(331, 44);
			this->panel12->TabIndex = 53;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(10, 9);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(120, 24);
			this->label29->TabIndex = 9;
			this->label29->Text = L"Your Order";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel13->Controls->Add(this->label30);
			this->panel13->Controls->Add(this->lbl_DeliveryTime);
			this->panel13->Controls->Add(this->label33);
			this->panel13->Location = System::Drawing::Point(793, 161);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(331, 64);
			this->panel13->TabIndex = 52;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(246, 36);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(58, 17);
			this->label30->TabIndex = 9;
			this->label30->Text = L"minutes";
			// 
			// lbl_DeliveryTime
			// 
			this->lbl_DeliveryTime->AutoSize = true;
			this->lbl_DeliveryTime->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_DeliveryTime->Location = System::Drawing::Point(255, 12);
			this->lbl_DeliveryTime->Name = L"lbl_DeliveryTime";
			this->lbl_DeliveryTime->Size = System::Drawing::Size(34, 24);
			this->lbl_DeliveryTime->TabIndex = 8;
			this->lbl_DeliveryTime->Text = L"60";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Corbel", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label33->Location = System::Drawing::Point(12, 25);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(170, 19);
			this->label33->TabIndex = 7;
			this->label33->Text = L"Estimated Delivery time";
			// 
			// PlaceOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1150, 732);
			this->Controls->Add(this->flp_Orders);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->flp_Order);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"PlaceOrder";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PlaceOrder";
			this->Load += gcnew System::EventHandler(this, &PlaceOrder::PlaceOrder_Load);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->flp_Order->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btn_Exit_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btn_Exit->ForeColor = Color::White;
}
private: System::Void btn_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 close();
			 Application::Exit();
}
private: System::Void btn_Exit_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btn_Exit->ForeColor = Color::FromArgb(99, 42, 123);
}
	private: System::Void PlaceOrder_Load(System::Object^  sender, System::EventArgs^  e) {
				 msclr::interop::marshal_context con;
				 btn_Profile->Text = con.marshal_as<String^>(user->F_name + " " + user->L_name);
				 lbl_Email->Text = con.marshal_as<String^>(user->email);
				 lbl_MyName->Text = con.marshal_as<String^>(user->F_name + " " + user->L_name);
				 lbl_Phone->Text = "20 " + con.marshal_as<String^>(user->phone);
				 lbl_location->Text = con.marshal_as<String^>(curCity + ", " + curlocation);
				 for (auto i : curResturant.deliveryLocations){
					 if (i.first == curlocation){
						 lbl_DeliveryTime->Text = i.second.ToString();
						 break;
					 }
				 }
				 flp_Orders->BackgroundImage= nullptr;
				 curOrder = glo::FML();
				 lbl_total->Text += curOrder.totalPrice.ToString();
				 for (int i = 0; i < curOrder.items.size(); i++){
					 UserControl ^uc = gcnew PlaceOrderUC();
					 uc->Controls["lbl_name"]->Text = con.marshal_as<String^>(curOrder.items[i].second.first.name);
					 uc->Controls["lbl_Quantity"]->Text = curOrder.items[i].second.second.ToString()+"x";
					 uc->Controls["lbl_Price"]->Text += (curOrder.items[i].second.first.price*curOrder.items[i].second.second).ToString();
					 flp_Orders->Controls->Add(uc);
				 }
	}
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void btn_ShowRestaurnats_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context con;
			 if (trim(con.marshal_as<string>(tb_Street->Text)).size() && trim(con.marshal_as<string>(tb_BuildingNumber->Text)).size() && trim(con.marshal_as<string>(tb_floorNumber->Text)).size() && trim(con.marshal_as<string>(tb_aapNum->Text)).size()){
				 if (delivery.top().first == 2){
					 MessageBox::Show("Sorry, all delivery boys are busy right now please try later.");
				 }
				 else{
					 curOrder = glo::FML();
					 curOrder.resturant = curResturant.name;
					 curOrder.address = curCity + "," + curlocation + "," + con.marshal_as<string>(tb_Street->Text) + "," + con.marshal_as<string>(tb_BuildingNumber->Text) + "," + con.marshal_as<string>(tb_floorNumber->Text) +"," + con.marshal_as<string>(tb_aapNum->Text);
					 curOrder.ordersDate.day = now->tm_mday;
					 curOrder.ordersDate.month = now->tm_mon + 1;
					 curOrder.ordersDate.year = now->tm_year + 1900;
					 curOrder.customerID = user->id;
					 pair<int, string> temp = delivery.top();
					 delivery.pop();
					 Dboy[temp.second].countOrders++;
					 delivery.push(make_pair(Dboy[temp.second].countOrders, temp.second));
					 curOrder.ID = temp.second;
					 curOrder.state = 0;
					 curOrder.comment = con.marshal_as<string>(tb_Comments->Text);
					 newOrders[user->id].push_back(curOrder);
					 int nid = 0;
					 for (auto i : newOrders)
						 nid += i.second.size();
					 for (auto i : oldOrders)
						 nid += i.second.size();
					 curOrder.orderid = nid + 1;
					 if (!rb_PaymentMethod->Checked){
						 // htl3 form el credit
						 PayByCredit ^credit = gcnew PayByCredit();
						 credit->Show();
					 }

					 for (int i = 0; i < curOrder.items.size(); i++){
						 for (auto m : curResturant.menu){
							 for (int j = 0; j < m.second.size(); j++){
								 if (m.second[j].name == curOrder.items[i].second.first.name && m.second[j].category == curOrder.items[i].second.first.category){
									 m.second[j].quantity -= curOrder.items[i].second.second;
								 }
							 }
						 }
					 }

					 MessageBox::Show("Your Order Has been Successfully placed, thank you for using Otlob ^^.");
					 this->Hide();
					 curOrder.items.clear();
					 glo::home->Show();
				 }
			 }
			 else{
				 MessageBox::Show("Please fill the required fields.");
			 }
}
private: System::Void btn_Profile_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 glo::MyAccount->Show();
}
};
}
