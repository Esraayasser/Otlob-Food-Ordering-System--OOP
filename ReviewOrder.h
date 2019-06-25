#pragma once
#include <msclr\marshal_cppstd.h>
#include "Globals.h"
#include "ReviewOrderUC.h"
#include "PlaceOrder.h"
namespace OOP_Otlob_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Global;

	/// <summary>
	/// Summary for ReviewOrder
	/// </summary>
	public ref class ReviewOrder : public System::Windows::Forms::Form
	{
	public:
		ReviewOrder()
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
		~ReviewOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:


	private: System::Windows::Forms::Button^  btn_Exit;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel18;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lbl_DeliveryTime;
	private: System::Windows::Forms::Button^  btn_ShowRestaurnats;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  lbl_ResturantName;
	private: System::Windows::Forms::PictureBox^  pb_logo;

	private: System::Windows::Forms::Label^  lbl_rating;
	private: System::Windows::Forms::Label^  lbl_WorkingHour;

	private: System::Windows::Forms::FlowLayoutPanel^  flp_Order;

	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  lbl_subtotal;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Button^  btn_Submitvoucher;
	private: System::Windows::Forms::TextBox^  tb_voucher;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  lbl_Deliveryfee;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  lbl_total;
	private: System::Windows::Forms::Label^  label14;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ReviewOrder::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_Profile = (gcnew System::Windows::Forms::Button());
			this->btn_Exit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_ShowRestaurnats = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lbl_DeliveryTime = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lbl_rating = (gcnew System::Windows::Forms::Label());
			this->lbl_WorkingHour = (gcnew System::Windows::Forms::Label());
			this->lbl_ResturantName = (gcnew System::Windows::Forms::Label());
			this->pb_logo = (gcnew System::Windows::Forms::PictureBox());
			this->flp_Order = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->lbl_subtotal = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Deliveryfee = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lbl_total = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->btn_Submitvoucher = (gcnew System::Windows::Forms::Button());
			this->tb_voucher = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_logo))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
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
			this->panel1->TabIndex = 7;
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
			this->btn_Profile->Location = System::Drawing::Point(948, 12);
			this->btn_Profile->Name = L"btn_Profile";
			this->btn_Profile->Size = System::Drawing::Size(164, 29);
			this->btn_Profile->TabIndex = 12;
			this->btn_Profile->Text = L"Esraa Yasser";
			this->btn_Profile->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_Profile->UseVisualStyleBackColor = true;
			this->btn_Profile->Click += gcnew System::EventHandler(this, &ReviewOrder::btn_Profile_Click);
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
			this->btn_Exit->Click += gcnew System::EventHandler(this, &ReviewOrder::btn_Exit_Click);
			this->btn_Exit->MouseHover += gcnew System::EventHandler(this, &ReviewOrder::btn_Exit_MouseHover);
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
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(522, 65);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 35);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel18->Location = System::Drawing::Point(418, 81);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(100, 2);
			this->panel18->TabIndex = 21;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel2->Location = System::Drawing::Point(557, 81);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(100, 2);
			this->panel2->TabIndex = 22;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(377, 65);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(35, 35);
			this->pictureBox5->TabIndex = 23;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(662, 65);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(35, 35);
			this->pictureBox3->TabIndex = 24;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(363, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Your data";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(497, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 17);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Review order";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(648, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Place order";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Controls->Add(this->btn_ShowRestaurnats);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->lbl_DeliveryTime);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Location = System::Drawing::Point(751, 152);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(361, 260);
			this->panel3->TabIndex = 28;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ReviewOrder::panel3_Paint);
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
			this->btn_ShowRestaurnats->Location = System::Drawing::Point(17, 210);
			this->btn_ShowRestaurnats->Name = L"btn_ShowRestaurnats";
			this->btn_ShowRestaurnats->Size = System::Drawing::Size(320, 33);
			this->btn_ShowRestaurnats->TabIndex = 36;
			this->btn_ShowRestaurnats->Text = L"CHECKOUT";
			this->btn_ShowRestaurnats->UseVisualStyleBackColor = false;
			this->btn_ShowRestaurnats->Click += gcnew System::EventHandler(this, &ReviewOrder::btn_ShowRestaurnats_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(279, 157);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 17);
			this->label9->TabIndex = 35;
			this->label9->Text = L"minutes";
			// 
			// lbl_DeliveryTime
			// 
			this->lbl_DeliveryTime->AutoSize = true;
			this->lbl_DeliveryTime->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_DeliveryTime->Location = System::Drawing::Point(288, 133);
			this->lbl_DeliveryTime->Name = L"lbl_DeliveryTime";
			this->lbl_DeliveryTime->Size = System::Drawing::Size(34, 24);
			this->lbl_DeliveryTime->TabIndex = 34;
			this->lbl_DeliveryTime->Text = L"60";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(63, 153);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(177, 20);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Estimated delivery time";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(22, 140);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(35, 35);
			this->pictureBox6->TabIndex = 32;
			this->pictureBox6->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(63, 133);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(154, 19);
			this->label8->TabIndex = 31;
			this->label8->Text = L"As soon as possible";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(63, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(279, 42);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Your order will be deliverd to your address.";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(22, 50);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(35, 35);
			this->pictureBox4->TabIndex = 29;
			this->pictureBox4->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel4->Location = System::Drawing::Point(22, 117);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(320, 2);
			this->panel4->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(63, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 19);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Delivery";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Order information";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel5->Controls->Add(this->lbl_rating);
			this->panel5->Controls->Add(this->lbl_WorkingHour);
			this->panel5->Controls->Add(this->lbl_ResturantName);
			this->panel5->Controls->Add(this->pb_logo);
			this->panel5->Location = System::Drawing::Point(48, 153);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(697, 100);
			this->panel5->TabIndex = 29;
			// 
			// lbl_rating
			// 
			this->lbl_rating->AutoSize = true;
			this->lbl_rating->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_rating->Location = System::Drawing::Point(110, 67);
			this->lbl_rating->Name = L"lbl_rating";
			this->lbl_rating->Size = System::Drawing::Size(43, 17);
			this->lbl_rating->TabIndex = 36;
			this->lbl_rating->Text = L"rating";
			// 
			// lbl_WorkingHour
			// 
			this->lbl_WorkingHour->AutoSize = true;
			this->lbl_WorkingHour->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_WorkingHour->Location = System::Drawing::Point(109, 39);
			this->lbl_WorkingHour->Name = L"lbl_WorkingHour";
			this->lbl_WorkingHour->Size = System::Drawing::Size(98, 20);
			this->lbl_WorkingHour->TabIndex = 35;
			this->lbl_WorkingHour->Text = L"Open From  ";
			// 
			// lbl_ResturantName
			// 
			this->lbl_ResturantName->AutoSize = true;
			this->lbl_ResturantName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ResturantName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->lbl_ResturantName->Location = System::Drawing::Point(108, 11);
			this->lbl_ResturantName->Name = L"lbl_ResturantName";
			this->lbl_ResturantName->Size = System::Drawing::Size(178, 18);
			this->lbl_ResturantName->TabIndex = 34;
			this->lbl_ResturantName->Text = L"Estimated delivery time";
			// 
			// pb_logo
			// 
			this->pb_logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pb_logo->Location = System::Drawing::Point(13, 11);
			this->pb_logo->Name = L"pb_logo";
			this->pb_logo->Size = System::Drawing::Size(87, 77);
			this->pb_logo->TabIndex = 30;
			this->pb_logo->TabStop = false;
			// 
			// flp_Order
			// 
			this->flp_Order->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flp_Order->Location = System::Drawing::Point(48, 259);
			this->flp_Order->Name = L"flp_Order";
			this->flp_Order->Size = System::Drawing::Size(697, 225);
			this->flp_Order->TabIndex = 30;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->panel6->Controls->Add(this->lbl_subtotal);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Location = System::Drawing::Point(48, 490);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(697, 30);
			this->panel6->TabIndex = 37;
			// 
			// lbl_subtotal
			// 
			this->lbl_subtotal->AutoSize = true;
			this->lbl_subtotal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_subtotal->Location = System::Drawing::Point(607, 4);
			this->lbl_subtotal->Name = L"lbl_subtotal";
			this->lbl_subtotal->Size = System::Drawing::Size(39, 20);
			this->lbl_subtotal->TabIndex = 37;
			this->lbl_subtotal->Text = L"EGP";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(515, 4);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 20);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Subtotal";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel7->Controls->Add(this->lbl_Deliveryfee);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->lbl_total);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->btn_Submitvoucher);
			this->panel7->Controls->Add(this->tb_voucher);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Location = System::Drawing::Point(48, 524);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(697, 188);
			this->panel7->TabIndex = 38;
			// 
			// lbl_Deliveryfee
			// 
			this->lbl_Deliveryfee->AutoSize = true;
			this->lbl_Deliveryfee->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Deliveryfee->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Deliveryfee->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_Deliveryfee->Location = System::Drawing::Point(631, 106);
			this->lbl_Deliveryfee->Name = L"lbl_Deliveryfee";
			this->lbl_Deliveryfee->Size = System::Drawing::Size(32, 18);
			this->lbl_Deliveryfee->TabIndex = 28;
			this->lbl_Deliveryfee->Text = L"--,--";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(449, 106);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(79, 18);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Delivery fee";
			// 
			// lbl_total
			// 
			this->lbl_total->AutoSize = true;
			this->lbl_total->BackColor = System::Drawing::Color::Transparent;
			this->lbl_total->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_total->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_total->Location = System::Drawing::Point(583, 140);
			this->lbl_total->Name = L"lbl_total";
			this->lbl_total->Size = System::Drawing::Size(51, 24);
			this->lbl_total->TabIndex = 27;
			this->lbl_total->Text = L"EGP";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(449, 142);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 18);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Total";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel8->Location = System::Drawing::Point(26, 86);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(620, 2);
			this->panel8->TabIndex = 24;
			// 
			// btn_Submitvoucher
			// 
			this->btn_Submitvoucher->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Submitvoucher->ForeColor = System::Drawing::Color::Red;
			this->btn_Submitvoucher->Location = System::Drawing::Point(237, 40);
			this->btn_Submitvoucher->Name = L"btn_Submitvoucher";
			this->btn_Submitvoucher->Size = System::Drawing::Size(75, 30);
			this->btn_Submitvoucher->TabIndex = 13;
			this->btn_Submitvoucher->Text = L"Submit";
			this->btn_Submitvoucher->UseVisualStyleBackColor = true;
			// 
			// tb_voucher
			// 
			this->tb_voucher->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_voucher->Location = System::Drawing::Point(14, 41);
			this->tb_voucher->Name = L"tb_voucher";
			this->tb_voucher->Size = System::Drawing::Size(225, 27);
			this->tb_voucher->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label12->Location = System::Drawing::Point(10, 7);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(274, 23);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Enter you vouchre code here";
			// 
			// ReviewOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1150, 732);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->flp_Order);
			this->Controls->Add(this->panel5);
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
			this->Name = L"ReviewOrder";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReviewOrder";
			this->Load += gcnew System::EventHandler(this, &ReviewOrder::ReviewOrder_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_logo))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
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
private: System::Void ReviewOrder_Load(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context con;
			 String ^temp = con.marshal_as<String^>(curResturant.name);
			 lbl_ResturantName->Text = temp;
			 for (int i = 0; i < curResturant.workingHours.size(); i++){
				 if (curResturant.workingHours[i].day == con.marshal_as<string>(now->tm_mday.ToString())){
					 lbl_WorkingHour->Text = con.marshal_as<String^>(curResturant.workingHours[i].open + " - " + curResturant.workingHours[0].close);
					 break;
				 }
			 }
			 lbl_rating->Text = curResturant.rating.ToString();
			 btn_Profile->Text = con.marshal_as<String^>(user->F_name + " " + user->L_name);
			 //Logo
			 String ^s = temp;
			 s += ".jpg";
			 auto img = System::Drawing::Image::FromFile(s);
			 pb_logo->BackgroundImage = img;
			 for (auto i : curResturant.deliveryLocations){
				 if (i.first == curlocation){
					 lbl_DeliveryTime->Text = i.second.ToString();
					 break;
				 }
			 }
			 //Order Items
			 MessageBox::Show(curOrder.items.size().ToString());
			 glo::Menus->Controls["flp_Orders"]->Controls->Clear();
			 for (int i = 0; i < curOrder.items.size(); i++){
				 UserControl ^uc = gcnew ReviewOrderUC(curOrder.items[i].second.first.quantity);
				 uc->Controls["lbl_name"]->Text = con.marshal_as<String^>(curOrder.items[i].second.first.name);
				 uc->Controls["lbl_price"]->Text += curOrder.items[i].second.first.price.ToString();
				 //curOrder.items[i].second.second = int::Parse(uc->Controls["nUD_Quantity"]->Text);
				 uc->Controls["nUD_Quantity"]->Text = curOrder.items[i].second.second.ToString();
				 flp_Order->Controls->Add(uc);
			 }
			 lbl_subtotal->Text += curOrder.totalPrice.ToString();
			 lbl_Deliveryfee->Text = curResturant.deliveryfee.ToString();
			 lbl_total->Text += (curOrder.totalPrice + curResturant.deliveryfee).ToString();
}
private: System::Void btn_ShowRestaurnats_Click(System::Object^  sender, System::EventArgs^  e) {
			 curOrder = glo::FML();
			 this->Hide();
			 PlaceOrder ^po = gcnew PlaceOrder();
			 po->Show();
}

private: System::Void btn_Profile_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 glo::MyAccount->Show();
}
};
}
