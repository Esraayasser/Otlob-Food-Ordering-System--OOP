#pragma once
#include <msclr\marshal_cppstd.h>
#include "Globals.h"
#include "CategoryMenu.h"
#include "Foods.h"
#include "ReviewOrder.h"
#include "ReviewsUC.h"

namespace OOP_Otlob_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Global;
	/// <summary>
	/// Summary for ResturantMenu
	/// </summary>
	public ref class ResturantMenu : public System::Windows::Forms::Form
	{
	public:
		ResturantMenu()
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
		~ResturantMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pb_logo;
	private: System::Windows::Forms::Panel^  panel_restaurantInfo;
	protected:
	private: System::Windows::Forms::Label^  lbl_resturantname;
	private: System::Windows::Forms::ComboBox^  cb_governments;
	private: System::Windows::Forms::Button^  btn_changeloc;
	private: System::Windows::Forms::ComboBox^  cb_area;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btn_Exit;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lbl_Tags;
	private: System::Windows::Forms::FlowLayoutPanel^  flp_ctegoriesUC;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  lbl_DeliveryTime;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel_SemiBill;
	private: System::Windows::Forms::Button^  btn_ShowRestaurnats;
	private: System::Windows::Forms::Label^  lbl_subTotal;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lbl_Deliveryfee;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lbl_total;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::FlowLayoutPanel^  flp_Orders;
	private: System::Windows::Forms::Label^  lbl_PanelResturantCategories;
	private: System::Windows::Forms::Label^  lbl_PanelRestaurantName;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel15;
	private: System::Windows::Forms::Label^  lbl_review;
	private: System::Windows::Forms::Panel^  panel16;
	private: System::Windows::Forms::Panel^  panel17;
	private: System::Windows::Forms::Panel^  panel_Review;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Label^  lbl_Info;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::Panel^  panel_Info;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  lbl_Menu;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Panel^  panel_menu;
	private: System::Windows::Forms::Panel^  panel_ShowInfo;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  lbl_sat;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  lbl_Fri;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  lbl_Thr;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  lbl_Wed;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  lbl_Tue;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  lbl_Mon;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  lbl_Sun;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  lbl_Info_credit;
	private: System::Windows::Forms::Label^  lbl_Info_cash;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  panel19;
	private: System::Windows::Forms::Label^  lbl_Info_DeliveryTime;
	private: System::Windows::Forms::Label^  lbl_Info_deliveryfee;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel18;
	private: System::Windows::Forms::Panel^  panel14;
	private: System::Windows::Forms::Label^  lbl_Info_tags;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  lbl_mainTag;
	private: System::Windows::Forms::Label^  lbl_Info_ResturantName;
	private: System::Windows::Forms::Label^  lbl_signinSignup;

	private: System::Windows::Forms::FlowLayoutPanel^  flp_Reviews;
	private: System::Windows::Forms::Panel^  panel_reviews;
private: System::Windows::Forms::Label^  btn_Profile;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ResturantMenu::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pb_logo = (gcnew System::Windows::Forms::PictureBox());
			this->panel_restaurantInfo = (gcnew System::Windows::Forms::Panel());
			this->lbl_Tags = (gcnew System::Windows::Forms::Label());
			this->lbl_resturantname = (gcnew System::Windows::Forms::Label());
			this->cb_governments = (gcnew System::Windows::Forms::ComboBox());
			this->btn_changeloc = (gcnew System::Windows::Forms::Button());
			this->cb_area = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_Profile = (gcnew System::Windows::Forms::Label());
			this->lbl_signinSignup = (gcnew System::Windows::Forms::Label());
			this->btn_Exit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->flp_ctegoriesUC = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_DeliveryTime = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lbl_PanelResturantCategories = (gcnew System::Windows::Forms::Label());
			this->lbl_PanelRestaurantName = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel_SemiBill = (gcnew System::Windows::Forms::Panel());
			this->btn_ShowRestaurnats = (gcnew System::Windows::Forms::Button());
			this->lbl_subTotal = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbl_Deliveryfee = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbl_total = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->flp_Orders = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->lbl_review = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel_Review = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Info = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel_Info = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Menu = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel_menu = (gcnew System::Windows::Forms::Panel());
			this->panel_ShowInfo = (gcnew System::Windows::Forms::Panel());
			this->lbl_sat = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->lbl_Fri = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->lbl_Thr = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->lbl_Wed = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->lbl_Tue = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->lbl_Mon = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->lbl_Sun = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lbl_Info_credit = (gcnew System::Windows::Forms::Label());
			this->lbl_Info_cash = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Info_DeliveryTime = (gcnew System::Windows::Forms::Label());
			this->lbl_Info_deliveryfee = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->lbl_Info_tags = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_mainTag = (gcnew System::Windows::Forms::Label());
			this->lbl_Info_ResturantName = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->flp_Reviews = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel_reviews = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_logo))->BeginInit();
			this->panel_restaurantInfo->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel_SemiBill->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel_ShowInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel_reviews->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->pb_logo);
			this->panel2->Controls->Add(this->panel_restaurantInfo);
			this->panel2->Controls->Add(this->cb_governments);
			this->panel2->Controls->Add(this->btn_changeloc);
			this->panel2->Controls->Add(this->cb_area);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 54);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1150, 192);
			this->panel2->TabIndex = 7;
			// 
			// pb_logo
			// 
			this->pb_logo->BackColor = System::Drawing::Color::White;
			this->pb_logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pb_logo->Location = System::Drawing::Point(531, 6);
			this->pb_logo->Name = L"pb_logo";
			this->pb_logo->Size = System::Drawing::Size(100, 79);
			this->pb_logo->TabIndex = 9;
			this->pb_logo->TabStop = false;
			// 
			// panel_restaurantInfo
			// 
			this->panel_restaurantInfo->BackColor = System::Drawing::Color::White;
			this->panel_restaurantInfo->Controls->Add(this->lbl_Tags);
			this->panel_restaurantInfo->Controls->Add(this->lbl_resturantname);
			this->panel_restaurantInfo->Location = System::Drawing::Point(380, 68);
			this->panel_restaurantInfo->Name = L"panel_restaurantInfo";
			this->panel_restaurantInfo->Size = System::Drawing::Size(402, 80);
			this->panel_restaurantInfo->TabIndex = 12;
			// 
			// lbl_Tags
			// 
			this->lbl_Tags->Font = (gcnew System::Drawing::Font(L"Corbel", 10.5F));
			this->lbl_Tags->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->lbl_Tags->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbl_Tags.Image")));
			this->lbl_Tags->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_Tags->Location = System::Drawing::Point(55, 44);
			this->lbl_Tags->Name = L"lbl_Tags";
			this->lbl_Tags->Size = System::Drawing::Size(295, 26);
			this->lbl_Tags->TabIndex = 12;
			this->lbl_Tags->Text = L"tags";
			this->lbl_Tags->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_resturantname
			// 
			this->lbl_resturantname->BackColor = System::Drawing::Color::Transparent;
			this->lbl_resturantname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_resturantname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->lbl_resturantname->Location = System::Drawing::Point(73, 21);
			this->lbl_resturantname->Name = L"lbl_resturantname";
			this->lbl_resturantname->Size = System::Drawing::Size(259, 23);
			this->lbl_resturantname->TabIndex = 11;
			this->lbl_resturantname->Text = L"resturant name";
			this->lbl_resturantname->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cb_governments
			// 
			this->cb_governments->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->cb_governments->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(15) {
				L"Al Mahallah Al kubra",
					L"Alexandria", L"Assiut", L"Banha", L"Beni Suef", L"Cairo", L"Damanhour", L"Damietta", L"El Gouna", L"Fayoum", L"Hurghada", L"Ismailia",
					L"Kafr El Sheihk ", L"Mansoura", L"Minya"
			});
			this->cb_governments->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cb_governments->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cb_governments->BackColor = System::Drawing::Color::White;
			this->cb_governments->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_governments->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_governments->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->cb_governments->ItemHeight = 18;
			this->cb_governments->Location = System::Drawing::Point(268, 155);
			this->cb_governments->Name = L"cb_governments";
			this->cb_governments->Size = System::Drawing::Size(255, 26);
			this->cb_governments->Sorted = true;
			this->cb_governments->TabIndex = 10;
			this->cb_governments->Text = L"Cairo";
			this->cb_governments->SelectedIndexChanged += gcnew System::EventHandler(this, &ResturantMenu::cb_governments_SelectedIndexChanged);
			// 
			// btn_changeloc
			// 
			this->btn_changeloc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->btn_changeloc->FlatAppearance->BorderSize = 0;
			this->btn_changeloc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_changeloc->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_changeloc->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_changeloc->Location = System::Drawing::Point(777, 154);
			this->btn_changeloc->Name = L"btn_changeloc";
			this->btn_changeloc->Size = System::Drawing::Size(128, 27);
			this->btn_changeloc->TabIndex = 5;
			this->btn_changeloc->Text = L"CHANGE LOCATION";
			this->btn_changeloc->UseVisualStyleBackColor = false;
			this->btn_changeloc->Click += gcnew System::EventHandler(this, &ResturantMenu::btn_changeloc_Click);
			// 
			// cb_area
			// 
			this->cb_area->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->cb_area->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cb_area->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cb_area->BackColor = System::Drawing::Color::White;
			this->cb_area->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_area->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_area->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->cb_area->ItemHeight = 18;
			this->cb_area->Location = System::Drawing::Point(523, 155);
			this->cb_area->Name = L"cb_area";
			this->cb_area->Size = System::Drawing::Size(254, 26);
			this->cb_area->Sorted = true;
			this->cb_area->TabIndex = 9;
			this->cb_area->Text = L"Enter area";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->btn_Profile);
			this->panel1->Controls->Add(this->lbl_signinSignup);
			this->panel1->Controls->Add(this->btn_Exit);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1150, 54);
			this->panel1->TabIndex = 6;
			// 
			// btn_Profile
			// 
			this->btn_Profile->BackColor = System::Drawing::Color::Transparent;
			this->btn_Profile->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Profile->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->btn_Profile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Profile.Image")));
			this->btn_Profile->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Profile->Location = System::Drawing::Point(254, 13);
			this->btn_Profile->Name = L"btn_Profile";
			this->btn_Profile->Size = System::Drawing::Size(112, 26);
			this->btn_Profile->TabIndex = 13;
			this->btn_Profile->Text = L"My Account";
			this->btn_Profile->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// lbl_signinSignup
			// 
			this->lbl_signinSignup->BackColor = System::Drawing::Color::Transparent;
			this->lbl_signinSignup->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_signinSignup->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->lbl_signinSignup->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbl_signinSignup.Image")));
			this->lbl_signinSignup->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_signinSignup->Location = System::Drawing::Point(969, 8);
			this->lbl_signinSignup->Name = L"lbl_signinSignup";
			this->lbl_signinSignup->Size = System::Drawing::Size(147, 26);
			this->lbl_signinSignup->TabIndex = 10;
			this->lbl_signinSignup->Text = L"Sign up or Sign in";
			this->lbl_signinSignup->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->lbl_signinSignup->Click += gcnew System::EventHandler(this, &ResturantMenu::lbl_SigninSignup_Click);
			this->lbl_signinSignup->MouseLeave += gcnew System::EventHandler(this, &ResturantMenu::lbl_login_signup_MouseLeave);
			this->lbl_signinSignup->MouseHover += gcnew System::EventHandler(this, &ResturantMenu::lbl_login_signup_MouseHover);
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
			this->btn_Exit->Click += gcnew System::EventHandler(this, &ResturantMenu::btn_Exit_Click);
			this->btn_Exit->MouseLeave += gcnew System::EventHandler(this, &ResturantMenu::btn_Exit_MouseLeave);
			this->btn_Exit->MouseHover += gcnew System::EventHandler(this, &ResturantMenu::btn_Exit_MouseHover);
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
			// flp_ctegoriesUC
			// 
			this->flp_ctegoriesUC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flp_ctegoriesUC->AutoScroll = true;
			this->flp_ctegoriesUC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->flp_ctegoriesUC->Location = System::Drawing::Point(141, 0);
			this->flp_ctegoriesUC->Name = L"flp_ctegoriesUC";
			this->flp_ctegoriesUC->Size = System::Drawing::Size(615, 384);
			this->flp_ctegoriesUC->TabIndex = 13;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->lbl_DeliveryTime);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(863, 291);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(275, 64);
			this->panel3->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"minutes";
			// 
			// lbl_DeliveryTime
			// 
			this->lbl_DeliveryTime->AutoSize = true;
			this->lbl_DeliveryTime->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_DeliveryTime->Location = System::Drawing::Point(210, 12);
			this->lbl_DeliveryTime->Name = L"lbl_DeliveryTime";
			this->lbl_DeliveryTime->Size = System::Drawing::Size(34, 24);
			this->lbl_DeliveryTime->TabIndex = 8;
			this->lbl_DeliveryTime->Text = L"60";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(12, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Estimated Delivery time";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel4->Controls->Add(this->lbl_PanelResturantCategories);
			this->panel4->Controls->Add(this->lbl_PanelRestaurantName);
			this->panel4->Controls->Add(this->flp_ctegoriesUC);
			this->panel4->Location = System::Drawing::Point(57, 328);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(756, 384);
			this->panel4->TabIndex = 8;
			// 
			// lbl_PanelResturantCategories
			// 
			this->lbl_PanelResturantCategories->BackColor = System::Drawing::Color::Transparent;
			this->lbl_PanelResturantCategories->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_PanelResturantCategories->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lbl_PanelResturantCategories->Location = System::Drawing::Point(8, 64);
			this->lbl_PanelResturantCategories->Name = L"lbl_PanelResturantCategories";
			this->lbl_PanelResturantCategories->Size = System::Drawing::Size(125, 298);
			this->lbl_PanelResturantCategories->TabIndex = 14;
			// 
			// lbl_PanelRestaurantName
			// 
			this->lbl_PanelRestaurantName->AutoSize = true;
			this->lbl_PanelRestaurantName->BackColor = System::Drawing::Color::Transparent;
			this->lbl_PanelRestaurantName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_PanelRestaurantName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->lbl_PanelRestaurantName->Location = System::Drawing::Point(6, 20);
			this->lbl_PanelRestaurantName->Name = L"lbl_PanelRestaurantName";
			this->lbl_PanelRestaurantName->Size = System::Drawing::Size(117, 18);
			this->lbl_PanelRestaurantName->TabIndex = 13;
			this->lbl_PanelRestaurantName->Text = L"resturant name";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel5->Controls->Add(this->label3);
			this->panel5->Location = System::Drawing::Point(863, 362);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(275, 44);
			this->panel5->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 24);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Your Order";
			// 
			// panel_SemiBill
			// 
			this->panel_SemiBill->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel_SemiBill->Controls->Add(this->btn_ShowRestaurnats);
			this->panel_SemiBill->Controls->Add(this->lbl_subTotal);
			this->panel_SemiBill->Controls->Add(this->label4);
			this->panel_SemiBill->Controls->Add(this->lbl_Deliveryfee);
			this->panel_SemiBill->Controls->Add(this->label5);
			this->panel_SemiBill->Controls->Add(this->lbl_total);
			this->panel_SemiBill->Controls->Add(this->label6);
			this->panel_SemiBill->Location = System::Drawing::Point(863, 532);
			this->panel_SemiBill->Name = L"panel_SemiBill";
			this->panel_SemiBill->Size = System::Drawing::Size(276, 179);
			this->panel_SemiBill->TabIndex = 15;
			this->panel_SemiBill->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ResturantMenu::panel6_Paint);
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
			this->btn_ShowRestaurnats->Location = System::Drawing::Point(25, 133);
			this->btn_ShowRestaurnats->Name = L"btn_ShowRestaurnats";
			this->btn_ShowRestaurnats->Size = System::Drawing::Size(231, 33);
			this->btn_ShowRestaurnats->TabIndex = 23;
			this->btn_ShowRestaurnats->Text = L"PROCEED TO CHECKOUT";
			this->btn_ShowRestaurnats->UseVisualStyleBackColor = false;
			this->btn_ShowRestaurnats->Click += gcnew System::EventHandler(this, &ResturantMenu::btn_ShowRestaurnats_Click);
			// 
			// lbl_subTotal
			// 
			this->lbl_subTotal->AutoSize = true;
			this->lbl_subTotal->BackColor = System::Drawing::Color::Transparent;
			this->lbl_subTotal->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_subTotal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_subTotal->Location = System::Drawing::Point(205, 18);
			this->lbl_subTotal->Name = L"lbl_subTotal";
			this->lbl_subTotal->Size = System::Drawing::Size(32, 18);
			this->lbl_subTotal->TabIndex = 22;
			this->lbl_subTotal->Text = L"--,--";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(23, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 18);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Subtotal ";
			// 
			// lbl_Deliveryfee
			// 
			this->lbl_Deliveryfee->AutoSize = true;
			this->lbl_Deliveryfee->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Deliveryfee->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Deliveryfee->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_Deliveryfee->Location = System::Drawing::Point(205, 54);
			this->lbl_Deliveryfee->Name = L"lbl_Deliveryfee";
			this->lbl_Deliveryfee->Size = System::Drawing::Size(32, 18);
			this->lbl_Deliveryfee->TabIndex = 21;
			this->lbl_Deliveryfee->Text = L"--,--";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(23, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 18);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Delivery fee";
			// 
			// lbl_total
			// 
			this->lbl_total->AutoSize = true;
			this->lbl_total->BackColor = System::Drawing::Color::Transparent;
			this->lbl_total->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_total->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_total->Location = System::Drawing::Point(207, 93);
			this->lbl_total->Name = L"lbl_total";
			this->lbl_total->Size = System::Drawing::Size(32, 18);
			this->lbl_total->TabIndex = 20;
			this->lbl_total->Text = L"--,--";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(23, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 18);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Total";
			// 
			// flp_Orders
			// 
			this->flp_Orders->AutoScroll = true;
			this->flp_Orders->BackColor = System::Drawing::Color::White;
			this->flp_Orders->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flp_Orders.BackgroundImage")));
			this->flp_Orders->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->flp_Orders->Location = System::Drawing::Point(863, 409);
			this->flp_Orders->Name = L"flp_Orders";
			this->flp_Orders->Size = System::Drawing::Size(275, 120);
			this->flp_Orders->TabIndex = 16;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel6->Controls->Add(this->panel15);
			this->panel6->Controls->Add(this->panel11);
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Location = System::Drawing::Point(58, 290);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(755, 36);
			this->panel6->TabIndex = 17;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel15->Controls->Add(this->lbl_review);
			this->panel15->Controls->Add(this->panel16);
			this->panel15->Controls->Add(this->panel_Review);
			this->panel15->Location = System::Drawing::Point(280, 1);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(138, 36);
			this->panel15->TabIndex = 20;
			this->panel15->Click += gcnew System::EventHandler(this, &ResturantMenu::panel15_Click);
			this->panel15->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ResturantMenu::panel15_Paint);
			// 
			// lbl_review
			// 
			this->lbl_review->AutoSize = true;
			this->lbl_review->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_review->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->lbl_review->Location = System::Drawing::Point(44, 8);
			this->lbl_review->Name = L"lbl_review";
			this->lbl_review->Size = System::Drawing::Size(55, 17);
			this->lbl_review->TabIndex = 22;
			this->lbl_review->Text = L"Review";
			this->lbl_review->Click += gcnew System::EventHandler(this, &ResturantMenu::panel15_Click);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::White;
			this->panel16->Controls->Add(this->panel17);
			this->panel16->Location = System::Drawing::Point(139, -1);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(138, 36);
			this->panel16->TabIndex = 19;
			// 
			// panel17
			// 
			this->panel17->Location = System::Drawing::Point(0, 32);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(138, 4);
			this->panel17->TabIndex = 18;
			// 
			// panel_Review
			// 
			this->panel_Review->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->panel_Review->Location = System::Drawing::Point(0, 32);
			this->panel_Review->Name = L"panel_Review";
			this->panel_Review->Size = System::Drawing::Size(138, 4);
			this->panel_Review->TabIndex = 18;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->lbl_Info);
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->panel_Info);
			this->panel11->Location = System::Drawing::Point(141, 1);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(138, 36);
			this->panel11->TabIndex = 20;
			this->panel11->Click += gcnew System::EventHandler(this, &ResturantMenu::panel11_Click);
			// 
			// lbl_Info
			// 
			this->lbl_Info->AutoSize = true;
			this->lbl_Info->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Info->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->lbl_Info->Location = System::Drawing::Point(50, 8);
			this->lbl_Info->Name = L"lbl_Info";
			this->lbl_Info->Size = System::Drawing::Size(32, 17);
			this->lbl_Info->TabIndex = 21;
			this->lbl_Info->Text = L"Info";
			this->lbl_Info->Click += gcnew System::EventHandler(this, &ResturantMenu::panel11_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::White;
			this->panel12->Controls->Add(this->panel13);
			this->panel12->Location = System::Drawing::Point(139, -1);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(138, 36);
			this->panel12->TabIndex = 19;
			// 
			// panel13
			// 
			this->panel13->Location = System::Drawing::Point(0, 32);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(138, 4);
			this->panel13->TabIndex = 18;
			// 
			// panel_Info
			// 
			this->panel_Info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->panel_Info->Location = System::Drawing::Point(0, 32);
			this->panel_Info->Name = L"panel_Info";
			this->panel_Info->Size = System::Drawing::Size(138, 4);
			this->panel_Info->TabIndex = 18;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->lbl_Menu);
			this->panel7->Controls->Add(this->panel9);
			this->panel7->Controls->Add(this->panel_menu);
			this->panel7->Location = System::Drawing::Point(1, 1);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(141, 36);
			this->panel7->TabIndex = 0;
			this->panel7->Click += gcnew System::EventHandler(this, &ResturantMenu::panel7_Click);
			// 
			// lbl_Menu
			// 
			this->lbl_Menu->AutoSize = true;
			this->lbl_Menu->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Menu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->lbl_Menu->Location = System::Drawing::Point(40, 8);
			this->lbl_Menu->Name = L"lbl_Menu";
			this->lbl_Menu->Size = System::Drawing::Size(43, 17);
			this->lbl_Menu->TabIndex = 20;
			this->lbl_Menu->Text = L"Menu";
			this->lbl_Menu->Click += gcnew System::EventHandler(this, &ResturantMenu::panel7_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Location = System::Drawing::Point(139, -1);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(138, 36);
			this->panel9->TabIndex = 19;
			// 
			// panel10
			// 
			this->panel10->Location = System::Drawing::Point(0, 32);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(138, 4);
			this->panel10->TabIndex = 18;
			// 
			// panel_menu
			// 
			this->panel_menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->panel_menu->Location = System::Drawing::Point(0, 32);
			this->panel_menu->Name = L"panel_menu";
			this->panel_menu->Size = System::Drawing::Size(138, 4);
			this->panel_menu->TabIndex = 18;
			// 
			// panel_ShowInfo
			// 
			this->panel_ShowInfo->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel_ShowInfo->Controls->Add(this->lbl_sat);
			this->panel_ShowInfo->Controls->Add(this->label25);
			this->panel_ShowInfo->Controls->Add(this->lbl_Fri);
			this->panel_ShowInfo->Controls->Add(this->label23);
			this->panel_ShowInfo->Controls->Add(this->lbl_Thr);
			this->panel_ShowInfo->Controls->Add(this->label21);
			this->panel_ShowInfo->Controls->Add(this->lbl_Wed);
			this->panel_ShowInfo->Controls->Add(this->label19);
			this->panel_ShowInfo->Controls->Add(this->lbl_Tue);
			this->panel_ShowInfo->Controls->Add(this->label17);
			this->panel_ShowInfo->Controls->Add(this->lbl_Mon);
			this->panel_ShowInfo->Controls->Add(this->label15);
			this->panel_ShowInfo->Controls->Add(this->lbl_Sun);
			this->panel_ShowInfo->Controls->Add(this->label11);
			this->panel_ShowInfo->Controls->Add(this->lbl_Info_credit);
			this->panel_ShowInfo->Controls->Add(this->lbl_Info_cash);
			this->panel_ShowInfo->Controls->Add(this->pictureBox6);
			this->panel_ShowInfo->Controls->Add(this->label13);
			this->panel_ShowInfo->Controls->Add(this->panel19);
			this->panel_ShowInfo->Controls->Add(this->lbl_Info_DeliveryTime);
			this->panel_ShowInfo->Controls->Add(this->lbl_Info_deliveryfee);
			this->panel_ShowInfo->Controls->Add(this->label10);
			this->panel_ShowInfo->Controls->Add(this->pictureBox5);
			this->panel_ShowInfo->Controls->Add(this->label9);
			this->panel_ShowInfo->Controls->Add(this->pictureBox4);
			this->panel_ShowInfo->Controls->Add(this->label8);
			this->panel_ShowInfo->Controls->Add(this->pictureBox3);
			this->panel_ShowInfo->Controls->Add(this->label7);
			this->panel_ShowInfo->Controls->Add(this->panel18);
			this->panel_ShowInfo->Controls->Add(this->panel14);
			this->panel_ShowInfo->Controls->Add(this->lbl_Info_tags);
			this->panel_ShowInfo->Controls->Add(this->pictureBox2);
			this->panel_ShowInfo->Controls->Add(this->lbl_mainTag);
			this->panel_ShowInfo->Controls->Add(this->lbl_Info_ResturantName);
			this->panel_ShowInfo->Location = System::Drawing::Point(57, 328);
			this->panel_ShowInfo->Name = L"panel_ShowInfo";
			this->panel_ShowInfo->Size = System::Drawing::Size(754, 384);
			this->panel_ShowInfo->TabIndex = 15;
			// 
			// lbl_sat
			// 
			this->lbl_sat->AutoSize = true;
			this->lbl_sat->BackColor = System::Drawing::Color::Transparent;
			this->lbl_sat->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_sat->ForeColor = System::Drawing::Color::Black;
			this->lbl_sat->Location = System::Drawing::Point(353, 315);
			this->lbl_sat->Name = L"lbl_sat";
			this->lbl_sat->Size = System::Drawing::Size(61, 17);
			this->lbl_sat->TabIndex = 48;
			this->lbl_sat->Text = L"OFF DAY";
			this->lbl_sat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(28, 316);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(64, 16);
			this->label25->TabIndex = 47;
			this->label25->Text = L"Saturday";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_Fri
			// 
			this->lbl_Fri->AutoSize = true;
			this->lbl_Fri->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Fri->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Fri->ForeColor = System::Drawing::Color::Black;
			this->lbl_Fri->Location = System::Drawing::Point(353, 294);
			this->lbl_Fri->Name = L"lbl_Fri";
			this->lbl_Fri->Size = System::Drawing::Size(61, 17);
			this->lbl_Fri->TabIndex = 46;
			this->lbl_Fri->Text = L"OFF DAY";
			this->lbl_Fri->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(26, 295);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(45, 16);
			this->label23->TabIndex = 45;
			this->label23->Text = L"Friday";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_Thr
			// 
			this->lbl_Thr->AutoSize = true;
			this->lbl_Thr->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Thr->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Thr->ForeColor = System::Drawing::Color::Black;
			this->lbl_Thr->Location = System::Drawing::Point(353, 273);
			this->lbl_Thr->Name = L"lbl_Thr";
			this->lbl_Thr->Size = System::Drawing::Size(61, 17);
			this->lbl_Thr->TabIndex = 44;
			this->lbl_Thr->Text = L"OFF DAY";
			this->lbl_Thr->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(26, 274);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(70, 16);
			this->label21->TabIndex = 43;
			this->label21->Text = L"Thurthday";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_Wed
			// 
			this->lbl_Wed->AutoSize = true;
			this->lbl_Wed->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Wed->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Wed->ForeColor = System::Drawing::Color::Black;
			this->lbl_Wed->Location = System::Drawing::Point(353, 253);
			this->lbl_Wed->Name = L"lbl_Wed";
			this->lbl_Wed->Size = System::Drawing::Size(61, 17);
			this->lbl_Wed->TabIndex = 42;
			this->lbl_Wed->Text = L"OFF DAY";
			this->lbl_Wed->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(26, 253);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(82, 16);
			this->label19->TabIndex = 41;
			this->label19->Text = L"Wednesday";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_Tue
			// 
			this->lbl_Tue->AutoSize = true;
			this->lbl_Tue->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Tue->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Tue->ForeColor = System::Drawing::Color::Black;
			this->lbl_Tue->Location = System::Drawing::Point(353, 230);
			this->lbl_Tue->Name = L"lbl_Tue";
			this->lbl_Tue->Size = System::Drawing::Size(61, 17);
			this->lbl_Tue->TabIndex = 40;
			this->lbl_Tue->Text = L"OFF DAY";
			this->lbl_Tue->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(26, 231);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(58, 16);
			this->label17->TabIndex = 39;
			this->label17->Text = L"Tuesday";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_Mon
			// 
			this->lbl_Mon->AutoSize = true;
			this->lbl_Mon->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Mon->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Mon->ForeColor = System::Drawing::Color::Black;
			this->lbl_Mon->Location = System::Drawing::Point(353, 206);
			this->lbl_Mon->Name = L"lbl_Mon";
			this->lbl_Mon->Size = System::Drawing::Size(61, 17);
			this->lbl_Mon->TabIndex = 38;
			this->lbl_Mon->Text = L"OFF DAY";
			this->lbl_Mon->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(26, 207);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(62, 16);
			this->label15->TabIndex = 37;
			this->label15->Text = L"Monday";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_Sun
			// 
			this->lbl_Sun->AutoSize = true;
			this->lbl_Sun->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Sun->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Sun->ForeColor = System::Drawing::Color::Black;
			this->lbl_Sun->Location = System::Drawing::Point(353, 185);
			this->lbl_Sun->Name = L"lbl_Sun";
			this->lbl_Sun->Size = System::Drawing::Size(61, 17);
			this->lbl_Sun->TabIndex = 36;
			this->lbl_Sun->Text = L"OFF DAY";
			this->lbl_Sun->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(26, 186);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 16);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Sunday";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_Info_credit
			// 
			this->lbl_Info_credit->AutoSize = true;
			this->lbl_Info_credit->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Info_credit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Info_credit->ForeColor = System::Drawing::Color::Black;
			this->lbl_Info_credit->Location = System::Drawing::Point(553, 358);
			this->lbl_Info_credit->Name = L"lbl_Info_credit";
			this->lbl_Info_credit->Size = System::Drawing::Size(111, 17);
			this->lbl_Info_credit->TabIndex = 34;
			this->lbl_Info_credit->Text = L"Online payment";
			this->lbl_Info_credit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_Info_cash
			// 
			this->lbl_Info_cash->AutoSize = true;
			this->lbl_Info_cash->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Info_cash->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Info_cash->ForeColor = System::Drawing::Color::Black;
			this->lbl_Info_cash->Location = System::Drawing::Point(552, 336);
			this->lbl_Info_cash->Name = L"lbl_Info_cash";
			this->lbl_Info_cash->Size = System::Drawing::Size(115, 17);
			this->lbl_Info_cash->TabIndex = 33;
			this->lbl_Info_cash->Text = L"Cash on delivery";
			this->lbl_Info_cash->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox6->Location = System::Drawing::Point(522, 302);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(25, 25);
			this->pictureBox6->TabIndex = 32;
			this->pictureBox6->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(552, 307);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 16);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Payment types";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel19->Location = System::Drawing::Point(492, 288);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(240, 2);
			this->panel19->TabIndex = 30;
			// 
			// lbl_Info_DeliveryTime
			// 
			this->lbl_Info_DeliveryTime->AutoSize = true;
			this->lbl_Info_DeliveryTime->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Info_DeliveryTime->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Info_DeliveryTime->ForeColor = System::Drawing::Color::Black;
			this->lbl_Info_DeliveryTime->Location = System::Drawing::Point(561, 250);
			this->lbl_Info_DeliveryTime->Name = L"lbl_Info_DeliveryTime";
			this->lbl_Info_DeliveryTime->Size = System::Drawing::Size(0, 17);
			this->lbl_Info_DeliveryTime->TabIndex = 29;
			this->lbl_Info_DeliveryTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_Info_deliveryfee
			// 
			this->lbl_Info_deliveryfee->AutoSize = true;
			this->lbl_Info_deliveryfee->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Info_deliveryfee->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Info_deliveryfee->ForeColor = System::Drawing::Color::Black;
			this->lbl_Info_deliveryfee->Location = System::Drawing::Point(598, 173);
			this->lbl_Info_deliveryfee->Name = L"lbl_Info_deliveryfee";
			this->lbl_Info_deliveryfee->Size = System::Drawing::Size(34, 17);
			this->lbl_Info_deliveryfee->TabIndex = 28;
			this->lbl_Info_deliveryfee->Text = L"EGP";
			this->lbl_Info_deliveryfee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(552, 173);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 17);
			this->label10->TabIndex = 27;
			this->label10->Text = L"From";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox5->Location = System::Drawing::Point(522, 207);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(25, 25);
			this->pictureBox5->TabIndex = 26;
			this->pictureBox5->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(552, 212);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 16);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Delivery time";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox4->Location = System::Drawing::Point(522, 134);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(25, 25);
			this->pictureBox4->TabIndex = 24;
			this->pictureBox4->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(552, 139);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 16);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Delivery fee";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->Location = System::Drawing::Point(24, 129);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(25, 25);
			this->pictureBox3->TabIndex = 22;
			this->pictureBox3->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(54, 134);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 16);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Delivery hours";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel18->Location = System::Drawing::Point(492, 116);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(240, 2);
			this->panel18->TabIndex = 20;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->panel14->Location = System::Drawing::Point(24, 116);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(440, 2);
			this->panel14->TabIndex = 19;
			// 
			// lbl_Info_tags
			// 
			this->lbl_Info_tags->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Info_tags->ForeColor = System::Drawing::Color::Black;
			this->lbl_Info_tags->Location = System::Drawing::Point(25, 83);
			this->lbl_Info_tags->Name = L"lbl_Info_tags";
			this->lbl_Info_tags->Size = System::Drawing::Size(668, 27);
			this->lbl_Info_tags->TabIndex = 15;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Location = System::Drawing::Point(24, 51);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 25);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// lbl_mainTag
			// 
			this->lbl_mainTag->AutoSize = true;
			this->lbl_mainTag->BackColor = System::Drawing::Color::Transparent;
			this->lbl_mainTag->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_mainTag->ForeColor = System::Drawing::Color::Black;
			this->lbl_mainTag->Location = System::Drawing::Point(54, 55);
			this->lbl_mainTag->Name = L"lbl_mainTag";
			this->lbl_mainTag->Size = System::Drawing::Size(0, 16);
			this->lbl_mainTag->TabIndex = 13;
			this->lbl_mainTag->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_Info_ResturantName
			// 
			this->lbl_Info_ResturantName->AutoSize = true;
			this->lbl_Info_ResturantName->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Info_ResturantName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Info_ResturantName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->lbl_Info_ResturantName->Location = System::Drawing::Point(19, 21);
			this->lbl_Info_ResturantName->Name = L"lbl_Info_ResturantName";
			this->lbl_Info_ResturantName->Size = System::Drawing::Size(187, 28);
			this->lbl_Info_ResturantName->TabIndex = 12;
			this->lbl_Info_ResturantName->Text = L"resturant name";
			this->lbl_Info_ResturantName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->panel8->Controls->Add(this->label12);
			this->panel8->Location = System::Drawing::Point(58, 251);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(755, 36);
			this->panel8->TabIndex = 21;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(11, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(297, 17);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Resturant is closed. Ordering is not available.";
			// 
			// flp_Reviews
			// 
			this->flp_Reviews->Location = System::Drawing::Point(0, 0);
			this->flp_Reviews->Name = L"flp_Reviews";
			this->flp_Reviews->Size = System::Drawing::Size(754, 384);
			this->flp_Reviews->TabIndex = 0;
			// 
			// panel_reviews
			// 
			this->panel_reviews->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel_reviews->Controls->Add(this->flp_Reviews);
			this->panel_reviews->Location = System::Drawing::Point(57, 328);
			this->panel_reviews->Name = L"panel_reviews";
			this->panel_reviews->Size = System::Drawing::Size(754, 384);
			this->panel_reviews->TabIndex = 49;
			// 
			// ResturantMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->ClientSize = System::Drawing::Size(1150, 732);
			this->Controls->Add(this->panel_reviews);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel_ShowInfo);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->flp_Orders);
			this->Controls->Add(this->panel_SemiBill);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ResturantMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ResturantMenu";
			this->Activated += gcnew System::EventHandler(this, &ResturantMenu::ResturantMenu_Activated);
			this->Load += gcnew System::EventHandler(this, &ResturantMenu::ResturantMenu_Load);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_logo))->EndInit();
			this->panel_restaurantInfo->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel_SemiBill->ResumeLayout(false);
			this->panel_SemiBill->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel_ShowInfo->ResumeLayout(false);
			this->panel_ShowInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel_reviews->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ResturantMenu_Load(System::Object^  sender, System::EventArgs^  e) {
				 //panels
					 panel8->Hide();
					 panel_ShowInfo->Hide();
					 panel_reviews->Hide();
					 cb_governments->Items->Clear();
					 cb_area->Items->Clear();
					 lbl_Info->ForeColor = Color::FromArgb(105, 105, 105);
					 lbl_review->ForeColor = Color::FromArgb(105, 105, 105);
					 panel_Info->BackColor = Color::White;
					 panel_Review->BackColor = Color::White;
					 flp_ctegoriesUC->Controls->Clear();
					 panel_SemiBill->Hide();
				 //
				 //deliverytime
					 for (auto i : curResturant.deliveryLocations){
						 if (i.first == curlocation){
							 lbl_DeliveryTime->Text = i.second.ToString();
							 break;
						 }
					 }
				 //
				 //combo box
					 msclr::interop::marshal_context con;
					 map<string, vector<string> > ::iterator it = Global::cities.begin();
					 for (; it != Global::cities.end(); it++)
					 {
						 string s = it->first;
						 String ^item = con.marshal_as<String^>(s);
						 cb_governments->Items->Add(item);
					 }
					 String^ city = cb_governments->Text->ToString();
					 cb_area->Items->Clear();
					 string temp = con.marshal_as<string>(city);
					 for (auto i : Global::cities[temp])
					 {
						 string s = i;
						 String ^item = con.marshal_as<String^>(s);
						 cb_area->Items->Add(item);
					 }
				 //
				 //fill info panel
					 lbl_Info_ResturantName->Text = con.marshal_as<String^>(curResturant.name + " - " + curResturant.location);
					 lbl_Info_deliveryfee->Text += " " + curResturant.deliveryfee.ToString();
					 for (auto i : curResturant.deliveryLocations){
						 if (i.first == curlocation){
							 lbl_DeliveryTime->Text = i.second.ToString();
							 break;
						 }
					 }
					 if (!curResturant.paymentWay)
						 lbl_Info_credit->Hide();
					 for (int i = 0; i < curResturant.workingHours.size(); i++){
						 int Ohour = int::Parse(con.marshal_as<String^>(curResturant.workingHours[i].open.substr(0, 2))), Omin = int::Parse(con.marshal_as<String^>(curResturant.workingHours[i].open.substr(3, 2)));
						 int Chour = int::Parse(con.marshal_as<String^>(curResturant.workingHours[i].close.substr(0, 2))), Cmin = int::Parse(con.marshal_as<String^>(curResturant.workingHours[i].close.substr(3, 2)));
						 if (System::DateTime::Now.DayOfWeek.ToString() == con.marshal_as<String^>(curResturant.workingHours[i].day) && ((System::DateTime::Now.Hour < Ohour || (System::DateTime::Now.Hour == Ohour && System::DateTime::Now.Minute < Omin)) && (System::DateTime::Now.Hour > Chour || (System::DateTime::Now.Hour == Chour && System::DateTime::Now.Minute > Cmin))))
							 panel8->Show();
						 if (curResturant.workingHours[i].day == "SUNDAY")
							 lbl_Sun->Text = con.marshal_as<String^>(curResturant.workingHours[i].open + " - " + curResturant.workingHours[i].close);
						 else if (curResturant.workingHours[i].day == "MONDAY")
							 lbl_Mon->Text = con.marshal_as<String^>(curResturant.workingHours[i].open + " - " + curResturant.workingHours[i].close);
						 else if (curResturant.workingHours[i].day == "TUESDAY")
							 lbl_Tue->Text = con.marshal_as<String^>(curResturant.workingHours[i].open + " - " + curResturant.workingHours[i].close);
						 else if (curResturant.workingHours[i].day == "WEDNESDAY")
							 lbl_Wed->Text = con.marshal_as<String^>(curResturant.workingHours[i].open + " - " + curResturant.workingHours[i].close);
						 else if (curResturant.workingHours[i].day == "THURSDAY")
							 lbl_Thr->Text = con.marshal_as<String^>(curResturant.workingHours[i].open + " - " + curResturant.workingHours[i].close);
						 else if (curResturant.workingHours[i].day == "FRIDAY")
							 lbl_Fri->Text = con.marshal_as<String^>(curResturant.workingHours[i].open + " - " + curResturant.workingHours[i].close);
						 else if (curResturant.workingHours[i].day == "SATURDAY")
							 lbl_sat->Text = con.marshal_as<String^>(curResturant.workingHours[i].open + " - " + curResturant.workingHours[i].close);
					 }
				 //
				 //fill review panel
					 for (int i = 0; i < restaurantReviews.size(); i++){
						 if (restaurantReviews[i].restaurantName == curResturant.name && restaurantReviews[i].restaurantLocation == curResturant.location){
							 UserControl ^uc = gcnew ReviewsUC();
							 uc->Controls["lbl_Date"]->Text = restaurantReviews[i].submittedOn.day.ToString() + " / " + restaurantReviews[i].submittedOn.month.ToString() + " / " + restaurantReviews[i].submittedOn.year.ToString();
							 uc->Controls["lbl_CustmorName"]->Text += con.marshal_as<String^>(restaurantReviews[i].CustomerName);
							 uc->Controls["lbl_Subject"]->Text = con.marshal_as<String^>(restaurantReviews[i].Subject);
							 uc->Controls["lbl_comment"]->Text = con.marshal_as<String^>(restaurantReviews[i].reviewComment);
							 for (int j = 1; j <= 5; j++){
								 string s = "pictureBox";
								 if (j <= restaurantReviews[i].numOfStars)
									uc->Controls[con.marshal_as<String^>(s) +j.ToString()]->BackgroundImage = System::Drawing::Image::FromFile("star.png");
							 }
							 flp_Reviews->Controls->Add(uc);
						 }
					 }
				 //Profile button
					 if (!logged){
						 btn_Profile->Hide();
					 }
					 else{
						 msclr::interop::marshal_context con;
						 btn_Profile->Text = con.marshal_as<String^>(user->F_name + " " + user->L_name);
						 btn_Profile->Location = System::Drawing::Point(698, 11);;
						 btn_Profile->Show();
					 }
				 //
				 //Resturant logo
					 auto img = System::Drawing::Image::FromFile(con.marshal_as<String^>(curResturant.name) + ".jpg");
					 pb_logo->BackgroundImage = img;
				 //
				 //Resturant name
					 lbl_resturantname->Text = con.marshal_as<String^>(curResturant.name + " - " + curResturant.location);
					 lbl_PanelRestaurantName->Text = con.marshal_as<String^>(curResturant.name);
				 //Resturant category
					 int co = 0;
					 for (auto it : curResturant.menu){
						 lbl_PanelResturantCategories->Text += con.marshal_as<String^>(it.first) + "\n\n";
					 }
				 //
				 //Resturant tags
					 vector<string> tag = curResturant.tags;
					 lbl_Tags->Text = "";
					 for (int j = 0; j < tag.size(); j++){
						 if (j == 0)
							 lbl_mainTag->Text = con.marshal_as<String^>(tag[j]);
						 lbl_Info_tags->Text += con.marshal_as<String^>(tag[j]);
						 lbl_Tags->Text += con.marshal_as<String^>(tag[j]);
						 if (j < tag.size() - 1){
							 lbl_Tags->Text += ", ";
							 lbl_Info_tags->Text += ", ";
						 }
					 }
				 //
				 //menu
					 for (auto it : curResturant.menu){
						 UserControl ^uc = gcnew CategoryMenu();
						 String ^temp = con.marshal_as<String^>(it.first);
						 //Logo
							 String ^s = temp;
							 s += ".jpg";
							 /*auto img = System::Drawing::Image::FromFile(s);
							 uc->Controls["pb_CategoryImg"]->BackgroundImage = img;*/
						 //
						 //name
							uc->Controls["lbl_Categoryname"]->Text = temp;
						 //
						 //food
							 flp_ctegoriesUC->Controls->Add(uc);
							 for (int i = 0; i < it.second.size(); i++){
								 UserControl ^fooduc = gcnew Foods(curResturant);
								 Food cur = it.second[i];
								 temp = con.marshal_as<String^>(cur.name);
								 //Logo
								 s = temp;
								 s += ".jpg";
								 /*auto img = System::Drawing::Image::FromFile(s);
								 fooduc->Controls["pb_FoodImg"]->BackgroundImage = img;*/
						 //
						 //name
							 fooduc->Controls["lbl_Name"]->Text = temp;
						 //
						 //description
							fooduc->Controls["lbl_description"]->Text = con.marshal_as<String^>(cur.description);
						 //
						 //price
							fooduc->Controls["lbl_Price"]->Text += (cur.price).ToString();
						 //
						 //quantity
							if (cur.quantity > 0)
								fooduc->Controls["lbl_OutOfStock"]->Visible = false;
							flp_ctegoriesUC->Controls->Add(fooduc);
						 //
						 }
					 }
				//	
	}
private: System::Void cb_governments_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 cb_area->Items->Clear();
			 String^ city = cb_governments->Text->ToString();
			 msclr::interop::marshal_context con;
			 string temp = con.marshal_as<string>(city);
			 for (auto i : Global::cities[temp])
			 {
				 string s = i;
				 String ^item = con.marshal_as<String^>(s);
				 cb_area->Items->Add(item);
			 }
}
private: System::Void btn_changeloc_Click(System::Object^  sender, System::EventArgs^  e) {
			 curOrder.items.clear();
			 if (cb_area->Text != "Enter area"){
				 msclr::interop::marshal_context con;
				 curlocation = con.marshal_as<string>(cb_area->Text);
				 curCity = con.marshal_as<string>(cb_governments->Text);
				 curLocRestaurants.clear();
				 for (int i = 0; i < resturant.size(); i++){
					 if (resturant[i].City == curCity && resturant[i].location == curlocation){
						 curLocRestaurants.push_back(resturant[i]);
					 }
					 else{
						 vector<pair<string, int> > v = resturant[i].deliveryLocations;
						 for (int j = 0; j < v.size(); j++){
							 if (v[j].first == curlocation){
								 curLocRestaurants.push_back(resturant[i]);
							 }
						 }
					 }
				 }
				 //glo::showresturant->Activate();
				 glo::showresturant->Show();
				 this->Hide();
			 }
			 else
				 MessageBox::Show("Please enter an area first.");
}
private: System::Void btn_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 close();
			 Application::Exit();
}
private: System::Void lbl_SigninSignup_Click(System::Object^  sender, System::EventArgs^  e) {
			 glo::Login_signup->Show();
}
private: System::Void lbl_login_signup_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 lbl_signinSignup->ForeColor = Color::White;
			 lbl_signinSignup->Image = System::Drawing::Image::FromFile("loginhover.png");
}
private: System::Void lbl_login_signup_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 lbl_signinSignup->ForeColor = Color::FromArgb(99, 42, 123);
			 lbl_signinSignup->Image = System::Drawing::Image::FromFile("login.png");
}
private: System::Void ResturantMenu_Activated(System::Object^  sender, System::EventArgs^  e) {
			 if (logged){
				 msclr::interop::marshal_context con;
				 btn_Profile->Location = System::Drawing::Point(1005, 8);
				 lbl_signinSignup->Hide();
				 btn_Profile->Show();
			 }
}
private: System::Void btn_Profile_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btn_Profile->ForeColor = Color::White;
			 btn_Profile->Image = System::Drawing::Image::FromFile("loginhover.png");
}
private: System::Void btn_Profile_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btn_Profile->ForeColor = Color::FromArgb(99, 42, 123);
			 btn_Profile->Image = System::Drawing::Image::FromFile("login.png");
}
private: System::Void btn_Exit_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 btn_Exit->ForeColor = Color::White;
}
private: System::Void btn_Exit_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 btn_Exit->ForeColor = Color::FromArgb(99, 42, 123);
}
private: System::Void panel6_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel11_Click(System::Object^  sender, System::EventArgs^  e) {
			 lbl_Info->ForeColor = Color::FromArgb(80, 184, 72);
			 panel_Info->BackColor = Color::FromArgb(80, 184, 72);
			 lbl_review->ForeColor = Color::FromArgb(105, 105, 105);
			 lbl_Menu->ForeColor = Color::FromArgb(105, 105, 105);
			 panel_menu->BackColor = Color::White;
			 panel_Review->BackColor = Color::White;
			 panel_reviews->Hide();
			 panel_ShowInfo->Show();
}
private: System::Void panel7_Click(System::Object^  sender, System::EventArgs^  e) {
			 lbl_Menu->ForeColor = Color::FromArgb(80, 184, 72);
			 panel_menu->BackColor = Color::FromArgb(80, 184, 72);
			 lbl_review->ForeColor = Color::FromArgb(105, 105, 105);
			 lbl_Info->ForeColor = Color::FromArgb(105, 105, 105);
			 panel_Info->BackColor = Color::White;
			 panel_Review->BackColor = Color::White;
			 panel_ShowInfo->Hide();
			 panel_reviews->Hide();
}
private: System::Void btn_ShowRestaurnats_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (logged){
				 curOrder =  glo::FML();
				 ReviewOrder ^ro = gcnew ReviewOrder();
				 this->Hide();
				 ro->Show();
			 }
			 else{
				 MessageBox::Show("Please Sign in or Sign up first.");
				 ProceedToCheckout = 1;
				 glo::Login_signup->Show();
			 }
}

private: System::Void panel15_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel15_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel_Info->BackColor = Color::White;
			 lbl_Info->ForeColor = Color::FromArgb(105, 105, 105);
			 panel_Review->BackColor = Color::FromArgb(80, 184, 72);
			 lbl_review->ForeColor = Color::FromArgb(80, 184, 72);
			 panel_menu->BackColor = Color::White;
			 lbl_Menu->ForeColor = Color::FromArgb(105, 105, 105);
			 panel_reviews->Show();
}
};
}
