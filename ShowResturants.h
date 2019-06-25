#pragma once
#include <msclr\marshal_cppstd.h>
#include "ResturantsUC.h"
#include "Globals.h"
#include <vector>

namespace OOP_Otlob_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Global;
	/// <summary>
	/// Summary for ShowResturants
	/// </summary>
	static bool filters[4], cuisines[7];
	static string searchTxt;
	public ref class ShowResturants : public System::Windows::Forms::Form
	{
	public:
		
		ShowResturants()
		{
			InitializeComponent();
			for (int i = 0; i < 4; i++)
				filters[i] = false;
			for (int i = 0; i < 7; i++)
				cuisines[i] = false;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ShowResturants()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:


	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^  btn_changeloc;

	private: System::Windows::Forms::Label^  lbl_SigninSignup;
	private: System::Windows::Forms::Button^  btn_Exit;
	private: System::Windows::Forms::ComboBox^  cb_governments;
	private: System::Windows::Forms::ComboBox^  cb_area;
	private: System::Windows::Forms::Label^  lbl_locandnum;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  tb_Search;
	private: System::Windows::Forms::Label^  lbl_Nthin2;

	private: System::Windows::Forms::Button^  btn_nothin1;
	private: System::Windows::Forms::Label^  lbl_searchNthin;
	private: System::Windows::Forms::Label^  lbl_Filter1;

	private: System::Windows::Forms::Label^  lbl_Filter2;

	private: System::Windows::Forms::Label^  lbl_Filter3;

	private: System::Windows::Forms::Label^  lbl_Nthin3;
	private: System::Windows::Forms::Button^  btn_nothin2;
	private: System::Windows::Forms::Button^  btn_Filter1;
	private: System::Windows::Forms::Button^  btn_Filter2;
	private: System::Windows::Forms::Button^  btn_Filter3;
	private: System::Windows::Forms::Button^  btn_Cuisines3;




	private: System::Windows::Forms::Button^  btn_Cuisines2;

	private: System::Windows::Forms::Button^  btn_Cuisines1;

	private: System::Windows::Forms::Label^  lbl_Cuisines3;

	private: System::Windows::Forms::Label^  lbl_Cuisines2;

	private: System::Windows::Forms::Label^  lbl_Cuisines1;
	private: System::Windows::Forms::Button^  btn_Cuisines6;



	private: System::Windows::Forms::Button^  btn_Cuisines5;

	private: System::Windows::Forms::Button^  btn_Cuisines4;
	private: System::Windows::Forms::Label^  lbl_Cuisines6;



	private: System::Windows::Forms::Label^  lbl_Cuisines5;

	private: System::Windows::Forms::Label^  lbl_Cuisines4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ShowResturants::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_Profile = (gcnew System::Windows::Forms::Label());
			this->lbl_SigninSignup = (gcnew System::Windows::Forms::Label());
			this->btn_Exit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btn_changeloc = (gcnew System::Windows::Forms::Button());
			this->cb_governments = (gcnew System::Windows::Forms::ComboBox());
			this->cb_area = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_locandnum = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb_Search = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Nthin2 = (gcnew System::Windows::Forms::Label());
			this->btn_nothin1 = (gcnew System::Windows::Forms::Button());
			this->lbl_searchNthin = (gcnew System::Windows::Forms::Label());
			this->lbl_Filter1 = (gcnew System::Windows::Forms::Label());
			this->lbl_Filter2 = (gcnew System::Windows::Forms::Label());
			this->lbl_Filter3 = (gcnew System::Windows::Forms::Label());
			this->lbl_Nthin3 = (gcnew System::Windows::Forms::Label());
			this->btn_nothin2 = (gcnew System::Windows::Forms::Button());
			this->btn_Filter1 = (gcnew System::Windows::Forms::Button());
			this->btn_Filter2 = (gcnew System::Windows::Forms::Button());
			this->btn_Filter3 = (gcnew System::Windows::Forms::Button());
			this->btn_Cuisines3 = (gcnew System::Windows::Forms::Button());
			this->btn_Cuisines2 = (gcnew System::Windows::Forms::Button());
			this->btn_Cuisines1 = (gcnew System::Windows::Forms::Button());
			this->lbl_Cuisines3 = (gcnew System::Windows::Forms::Label());
			this->lbl_Cuisines2 = (gcnew System::Windows::Forms::Label());
			this->lbl_Cuisines1 = (gcnew System::Windows::Forms::Label());
			this->btn_Cuisines6 = (gcnew System::Windows::Forms::Button());
			this->btn_Cuisines5 = (gcnew System::Windows::Forms::Button());
			this->btn_Cuisines4 = (gcnew System::Windows::Forms::Button());
			this->lbl_Cuisines6 = (gcnew System::Windows::Forms::Label());
			this->lbl_Cuisines5 = (gcnew System::Windows::Forms::Label());
			this->lbl_Cuisines4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->btn_Profile);
			this->panel1->Controls->Add(this->lbl_SigninSignup);
			this->panel1->Controls->Add(this->btn_Exit);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1150, 54);
			this->panel1->TabIndex = 1;
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
			this->btn_Profile->Location = System::Drawing::Point(253, 13);
			this->btn_Profile->Name = L"btn_Profile";
			this->btn_Profile->Size = System::Drawing::Size(112, 26);
			this->btn_Profile->TabIndex = 13;
			this->btn_Profile->Text = L"My Account";
			this->btn_Profile->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// lbl_SigninSignup
			// 
			this->lbl_SigninSignup->BackColor = System::Drawing::Color::Transparent;
			this->lbl_SigninSignup->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_SigninSignup->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->lbl_SigninSignup->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbl_SigninSignup.Image")));
			this->lbl_SigninSignup->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_SigninSignup->Location = System::Drawing::Point(969, 8);
			this->lbl_SigninSignup->Name = L"lbl_SigninSignup";
			this->lbl_SigninSignup->Size = System::Drawing::Size(147, 26);
			this->lbl_SigninSignup->TabIndex = 7;
			this->lbl_SigninSignup->Text = L"Sign in or Sign up";
			this->lbl_SigninSignup->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->lbl_SigninSignup->Click += gcnew System::EventHandler(this, &ShowResturants::lbl_SigninSignup_Click);
			this->lbl_SigninSignup->MouseLeave += gcnew System::EventHandler(this, &ShowResturants::lbl_SigninSignup_MouseLeave);
			this->lbl_SigninSignup->MouseHover += gcnew System::EventHandler(this, &ShowResturants::lbl_SigninSignup_MouseHover);
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
			this->btn_Exit->Click += gcnew System::EventHandler(this, &ShowResturants::btn_Exit_Click);
			this->btn_Exit->MouseLeave += gcnew System::EventHandler(this, &ShowResturants::btn_Exit_MouseLeave);
			this->btn_Exit->MouseHover += gcnew System::EventHandler(this, &ShowResturants::btn_Exit_MouseHover);
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
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(242, 203);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(712, 463);
			this->flowLayoutPanel1->TabIndex = 4;
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
			this->btn_changeloc->Location = System::Drawing::Point(765, 89);
			this->btn_changeloc->Name = L"btn_changeloc";
			this->btn_changeloc->Size = System::Drawing::Size(128, 27);
			this->btn_changeloc->TabIndex = 5;
			this->btn_changeloc->Text = L"CHANGE LOCATION";
			this->btn_changeloc->UseVisualStyleBackColor = false;
			this->btn_changeloc->Click += gcnew System::EventHandler(this, &ShowResturants::btn_changeloc_Click);
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
			this->cb_governments->Location = System::Drawing::Point(256, 90);
			this->cb_governments->Name = L"cb_governments";
			this->cb_governments->Size = System::Drawing::Size(255, 26);
			this->cb_governments->Sorted = true;
			this->cb_governments->TabIndex = 10;
			this->cb_governments->Text = L"Cairo";
			this->cb_governments->SelectedIndexChanged += gcnew System::EventHandler(this, &ShowResturants::cb_governments_SelectedIndexChanged);
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
			this->cb_area->Location = System::Drawing::Point(511, 90);
			this->cb_area->Name = L"cb_area";
			this->cb_area->Size = System::Drawing::Size(254, 26);
			this->cb_area->Sorted = true;
			this->cb_area->TabIndex = 9;
			this->cb_area->Text = L"Enter area";
			// 
			// lbl_locandnum
			// 
			this->lbl_locandnum->AutoSize = true;
			this->lbl_locandnum->BackColor = System::Drawing::Color::Transparent;
			this->lbl_locandnum->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_locandnum->ForeColor = System::Drawing::Color::White;
			this->lbl_locandnum->Location = System::Drawing::Point(392, 13);
			this->lbl_locandnum->Name = L"lbl_locandnum";
			this->lbl_locandnum->Size = System::Drawing::Size(127, 25);
			this->lbl_locandnum->TabIndex = 11;
			this->lbl_locandnum->Text = L"Order from";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->lbl_locandnum);
			this->panel2->Controls->Add(this->cb_governments);
			this->panel2->Controls->Add(this->btn_changeloc);
			this->panel2->Controls->Add(this->cb_area);
			this->panel2->Location = System::Drawing::Point(0, 54);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1150, 127);
			this->panel2->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(465, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 19);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Delivering to your door.";
			// 
			// tb_Search
			// 
			this->tb_Search->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->tb_Search->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tb_Search->Location = System::Drawing::Point(48, 203);
			this->tb_Search->Name = L"tb_Search";
			this->tb_Search->Size = System::Drawing::Size(185, 22);
			this->tb_Search->TabIndex = 13;
			this->tb_Search->TextChanged += gcnew System::EventHandler(this, &ShowResturants::tb_Search_TextChanged);
			this->tb_Search->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &ShowResturants::tb_Search_KeyUp);
			// 
			// lbl_Nthin2
			// 
			this->lbl_Nthin2->AutoSize = true;
			this->lbl_Nthin2->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Nthin2->Enabled = false;
			this->lbl_Nthin2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->lbl_Nthin2->Location = System::Drawing::Point(74, 234);
			this->lbl_Nthin2->Name = L"lbl_Nthin2";
			this->lbl_Nthin2->Size = System::Drawing::Size(121, 18);
			this->lbl_Nthin2->TabIndex = 14;
			this->lbl_Nthin2->Text = L"Filter Restaurants";
			// 
			// btn_nothin1
			// 
			this->btn_nothin1->BackColor = System::Drawing::Color::Transparent;
			this->btn_nothin1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_nothin1.BackgroundImage")));
			this->btn_nothin1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_nothin1->Enabled = false;
			this->btn_nothin1->FlatAppearance->BorderSize = 0;
			this->btn_nothin1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_nothin1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_nothin1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_nothin1->Location = System::Drawing::Point(48, 231);
			this->btn_nothin1->Name = L"btn_nothin1";
			this->btn_nothin1->Size = System::Drawing::Size(22, 22);
			this->btn_nothin1->TabIndex = 15;
			this->btn_nothin1->UseVisualStyleBackColor = false;
			// 
			// lbl_searchNthin
			// 
			this->lbl_searchNthin->AutoSize = true;
			this->lbl_searchNthin->BackColor = System::Drawing::Color::White;
			this->lbl_searchNthin->Enabled = false;
			this->lbl_searchNthin->Font = (gcnew System::Drawing::Font(L"Tahoma", 9));
			this->lbl_searchNthin->Location = System::Drawing::Point(52, 207);
			this->lbl_searchNthin->Name = L"lbl_searchNthin";
			this->lbl_searchNthin->Size = System::Drawing::Size(44, 14);
			this->lbl_searchNthin->TabIndex = 16;
			this->lbl_searchNthin->Text = L"Seacrh";
			// 
			// lbl_Filter1
			// 
			this->lbl_Filter1->AutoSize = true;
			this->lbl_Filter1->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Filter1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->lbl_Filter1->ForeColor = System::Drawing::Color::DarkGray;
			this->lbl_Filter1->Location = System::Drawing::Point(74, 265);
			this->lbl_Filter1->Name = L"lbl_Filter1";
			this->lbl_Filter1->Size = System::Drawing::Size(87, 17);
			this->lbl_Filter1->TabIndex = 17;
			this->lbl_Filter1->Text = L"Free Delivery";
			this->lbl_Filter1->Click += gcnew System::EventHandler(this, &ShowResturants::lbl_Filter1_Click);
			// 
			// lbl_Filter2
			// 
			this->lbl_Filter2->AutoSize = true;
			this->lbl_Filter2->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Filter2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->lbl_Filter2->ForeColor = System::Drawing::Color::DarkGray;
			this->lbl_Filter2->Location = System::Drawing::Point(74, 290);
			this->lbl_Filter2->Name = L"lbl_Filter2";
			this->lbl_Filter2->Size = System::Drawing::Size(40, 17);
			this->lbl_Filter2->TabIndex = 18;
			this->lbl_Filter2->Text = L"Deals";
			this->lbl_Filter2->Click += gcnew System::EventHandler(this, &ShowResturants::lbl_Filter2_Click);
			// 
			// lbl_Filter3
			// 
			this->lbl_Filter3->AutoSize = true;
			this->lbl_Filter3->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Filter3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->lbl_Filter3->ForeColor = System::Drawing::Color::DarkGray;
			this->lbl_Filter3->Location = System::Drawing::Point(74, 315);
			this->lbl_Filter3->Name = L"lbl_Filter3";
			this->lbl_Filter3->Size = System::Drawing::Size(159, 17);
			this->lbl_Filter3->TabIndex = 19;
			this->lbl_Filter3->Text = L"Online Payment Available";
			this->lbl_Filter3->Click += gcnew System::EventHandler(this, &ShowResturants::lbl_Filter3_Click);
			// 
			// lbl_Nthin3
			// 
			this->lbl_Nthin3->AutoSize = true;
			this->lbl_Nthin3->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Nthin3->Enabled = false;
			this->lbl_Nthin3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->lbl_Nthin3->Location = System::Drawing::Point(74, 360);
			this->lbl_Nthin3->Name = L"lbl_Nthin3";
			this->lbl_Nthin3->Size = System::Drawing::Size(59, 18);
			this->lbl_Nthin3->TabIndex = 20;
			this->lbl_Nthin3->Text = L"Cuisines";
			// 
			// btn_nothin2
			// 
			this->btn_nothin2->BackColor = System::Drawing::Color::Transparent;
			this->btn_nothin2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_nothin2.BackgroundImage")));
			this->btn_nothin2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_nothin2->Enabled = false;
			this->btn_nothin2->FlatAppearance->BorderSize = 0;
			this->btn_nothin2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_nothin2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_nothin2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_nothin2->Location = System::Drawing::Point(48, 359);
			this->btn_nothin2->Name = L"btn_nothin2";
			this->btn_nothin2->Size = System::Drawing::Size(22, 22);
			this->btn_nothin2->TabIndex = 21;
			this->btn_nothin2->UseVisualStyleBackColor = false;
			// 
			// btn_Filter1
			// 
			this->btn_Filter1->BackColor = System::Drawing::Color::Transparent;
			this->btn_Filter1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Filter1.BackgroundImage")));
			this->btn_Filter1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Filter1->Enabled = false;
			this->btn_Filter1->FlatAppearance->BorderSize = 0;
			this->btn_Filter1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Filter1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Filter1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Filter1->Location = System::Drawing::Point(46, 265);
			this->btn_Filter1->Name = L"btn_Filter1";
			this->btn_Filter1->Size = System::Drawing::Size(20, 20);
			this->btn_Filter1->TabIndex = 22;
			this->btn_Filter1->UseVisualStyleBackColor = false;
			this->btn_Filter1->Visible = false;
			// 
			// btn_Filter2
			// 
			this->btn_Filter2->BackColor = System::Drawing::Color::Transparent;
			this->btn_Filter2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Filter2.BackgroundImage")));
			this->btn_Filter2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Filter2->Enabled = false;
			this->btn_Filter2->FlatAppearance->BorderSize = 0;
			this->btn_Filter2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Filter2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Filter2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Filter2->Location = System::Drawing::Point(46, 290);
			this->btn_Filter2->Name = L"btn_Filter2";
			this->btn_Filter2->Size = System::Drawing::Size(20, 20);
			this->btn_Filter2->TabIndex = 23;
			this->btn_Filter2->UseVisualStyleBackColor = false;
			this->btn_Filter2->Visible = false;
			// 
			// btn_Filter3
			// 
			this->btn_Filter3->BackColor = System::Drawing::Color::Transparent;
			this->btn_Filter3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Filter3.BackgroundImage")));
			this->btn_Filter3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Filter3->Enabled = false;
			this->btn_Filter3->FlatAppearance->BorderSize = 0;
			this->btn_Filter3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Filter3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Filter3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Filter3->Location = System::Drawing::Point(46, 315);
			this->btn_Filter3->Name = L"btn_Filter3";
			this->btn_Filter3->Size = System::Drawing::Size(20, 20);
			this->btn_Filter3->TabIndex = 24;
			this->btn_Filter3->UseVisualStyleBackColor = false;
			this->btn_Filter3->Visible = false;
			// 
			// btn_Cuisines3
			// 
			this->btn_Cuisines3->BackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Cuisines3.BackgroundImage")));
			this->btn_Cuisines3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Cuisines3->Enabled = false;
			this->btn_Cuisines3->FlatAppearance->BorderSize = 0;
			this->btn_Cuisines3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Cuisines3->Location = System::Drawing::Point(46, 445);
			this->btn_Cuisines3->Name = L"btn_Cuisines3";
			this->btn_Cuisines3->Size = System::Drawing::Size(20, 20);
			this->btn_Cuisines3->TabIndex = 30;
			this->btn_Cuisines3->UseVisualStyleBackColor = false;
			this->btn_Cuisines3->Visible = false;
			// 
			// btn_Cuisines2
			// 
			this->btn_Cuisines2->BackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Cuisines2.BackgroundImage")));
			this->btn_Cuisines2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Cuisines2->Enabled = false;
			this->btn_Cuisines2->FlatAppearance->BorderSize = 0;
			this->btn_Cuisines2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Cuisines2->Location = System::Drawing::Point(46, 420);
			this->btn_Cuisines2->Name = L"btn_Cuisines2";
			this->btn_Cuisines2->Size = System::Drawing::Size(20, 20);
			this->btn_Cuisines2->TabIndex = 29;
			this->btn_Cuisines2->UseVisualStyleBackColor = false;
			this->btn_Cuisines2->Visible = false;
			// 
			// btn_Cuisines1
			// 
			this->btn_Cuisines1->BackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Cuisines1.BackgroundImage")));
			this->btn_Cuisines1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Cuisines1->Enabled = false;
			this->btn_Cuisines1->FlatAppearance->BorderSize = 0;
			this->btn_Cuisines1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Cuisines1->Location = System::Drawing::Point(46, 395);
			this->btn_Cuisines1->Name = L"btn_Cuisines1";
			this->btn_Cuisines1->Size = System::Drawing::Size(20, 20);
			this->btn_Cuisines1->TabIndex = 28;
			this->btn_Cuisines1->UseVisualStyleBackColor = false;
			this->btn_Cuisines1->Visible = false;
			// 
			// lbl_Cuisines3
			// 
			this->lbl_Cuisines3->AutoSize = true;
			this->lbl_Cuisines3->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Cuisines3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->lbl_Cuisines3->ForeColor = System::Drawing::Color::DarkGray;
			this->lbl_Cuisines3->Location = System::Drawing::Point(74, 445);
			this->lbl_Cuisines3->Name = L"lbl_Cuisines3";
			this->lbl_Cuisines3->Size = System::Drawing::Size(68, 17);
			this->lbl_Cuisines3->TabIndex = 27;
			this->lbl_Cuisines3->Text = L"Fast Food";
			this->lbl_Cuisines3->Click += gcnew System::EventHandler(this, &ShowResturants::lbl_Cuisines3_Click);
			// 
			// lbl_Cuisines2
			// 
			this->lbl_Cuisines2->AutoSize = true;
			this->lbl_Cuisines2->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Cuisines2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->lbl_Cuisines2->ForeColor = System::Drawing::Color::DarkGray;
			this->lbl_Cuisines2->Location = System::Drawing::Point(74, 420);
			this->lbl_Cuisines2->Name = L"lbl_Cuisines2";
			this->lbl_Cuisines2->Size = System::Drawing::Size(34, 17);
			this->lbl_Cuisines2->TabIndex = 26;
			this->lbl_Cuisines2->Text = L"Grills";
			this->lbl_Cuisines2->Click += gcnew System::EventHandler(this, &ShowResturants::lbl_Cuisines2_Click);
			// 
			// lbl_Cuisines1
			// 
			this->lbl_Cuisines1->AutoSize = true;
			this->lbl_Cuisines1->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Cuisines1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->lbl_Cuisines1->ForeColor = System::Drawing::Color::DarkGray;
			this->lbl_Cuisines1->Location = System::Drawing::Point(74, 395);
			this->lbl_Cuisines1->Name = L"lbl_Cuisines1";
			this->lbl_Cuisines1->Size = System::Drawing::Size(79, 17);
			this->lbl_Cuisines1->TabIndex = 25;
			this->lbl_Cuisines1->Text = L"Sandwiches";
			this->lbl_Cuisines1->Click += gcnew System::EventHandler(this, &ShowResturants::lbl_Cuisines1_Click);
			// 
			// btn_Cuisines6
			// 
			this->btn_Cuisines6->BackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Cuisines6.BackgroundImage")));
			this->btn_Cuisines6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Cuisines6->Enabled = false;
			this->btn_Cuisines6->FlatAppearance->BorderSize = 0;
			this->btn_Cuisines6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Cuisines6->Location = System::Drawing::Point(46, 520);
			this->btn_Cuisines6->Name = L"btn_Cuisines6";
			this->btn_Cuisines6->Size = System::Drawing::Size(20, 20);
			this->btn_Cuisines6->TabIndex = 36;
			this->btn_Cuisines6->UseVisualStyleBackColor = false;
			this->btn_Cuisines6->Visible = false;
			// 
			// btn_Cuisines5
			// 
			this->btn_Cuisines5->BackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Cuisines5.BackgroundImage")));
			this->btn_Cuisines5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Cuisines5->Enabled = false;
			this->btn_Cuisines5->FlatAppearance->BorderSize = 0;
			this->btn_Cuisines5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Cuisines5->Location = System::Drawing::Point(46, 495);
			this->btn_Cuisines5->Name = L"btn_Cuisines5";
			this->btn_Cuisines5->Size = System::Drawing::Size(20, 20);
			this->btn_Cuisines5->TabIndex = 35;
			this->btn_Cuisines5->UseVisualStyleBackColor = false;
			this->btn_Cuisines5->Visible = false;
			// 
			// btn_Cuisines4
			// 
			this->btn_Cuisines4->BackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Cuisines4.BackgroundImage")));
			this->btn_Cuisines4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Cuisines4->Enabled = false;
			this->btn_Cuisines4->FlatAppearance->BorderSize = 0;
			this->btn_Cuisines4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Cuisines4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Cuisines4->Location = System::Drawing::Point(46, 470);
			this->btn_Cuisines4->Name = L"btn_Cuisines4";
			this->btn_Cuisines4->Size = System::Drawing::Size(20, 20);
			this->btn_Cuisines4->TabIndex = 34;
			this->btn_Cuisines4->UseVisualStyleBackColor = false;
			this->btn_Cuisines4->Visible = false;
			// 
			// lbl_Cuisines6
			// 
			this->lbl_Cuisines6->AutoSize = true;
			this->lbl_Cuisines6->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Cuisines6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->lbl_Cuisines6->ForeColor = System::Drawing::Color::DarkGray;
			this->lbl_Cuisines6->Location = System::Drawing::Point(74, 520);
			this->lbl_Cuisines6->Name = L"lbl_Cuisines6";
			this->lbl_Cuisines6->Size = System::Drawing::Size(46, 17);
			this->lbl_Cuisines6->TabIndex = 33;
			this->lbl_Cuisines6->Text = L"Salads";
			this->lbl_Cuisines6->Click += gcnew System::EventHandler(this, &ShowResturants::lbl_Cuisines7_Click);
			// 
			// lbl_Cuisines5
			// 
			this->lbl_Cuisines5->AutoSize = true;
			this->lbl_Cuisines5->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Cuisines5->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->lbl_Cuisines5->ForeColor = System::Drawing::Color::DarkGray;
			this->lbl_Cuisines5->Location = System::Drawing::Point(74, 495);
			this->lbl_Cuisines5->Name = L"lbl_Cuisines5";
			this->lbl_Cuisines5->Size = System::Drawing::Size(55, 17);
			this->lbl_Cuisines5->TabIndex = 32;
			this->lbl_Cuisines5->Text = L"Burgers";
			this->lbl_Cuisines5->Click += gcnew System::EventHandler(this, &ShowResturants::lbl_Cuisines5_Click);
			// 
			// lbl_Cuisines4
			// 
			this->lbl_Cuisines4->AutoSize = true;
			this->lbl_Cuisines4->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Cuisines4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->lbl_Cuisines4->ForeColor = System::Drawing::Color::DarkGray;
			this->lbl_Cuisines4->Location = System::Drawing::Point(74, 470);
			this->lbl_Cuisines4->Name = L"lbl_Cuisines4";
			this->lbl_Cuisines4->Size = System::Drawing::Size(37, 17);
			this->lbl_Cuisines4->TabIndex = 31;
			this->lbl_Cuisines4->Text = L"Pizza";
			this->lbl_Cuisines4->Click += gcnew System::EventHandler(this, &ShowResturants::lbl_Cuisines4_Click);
			// 
			// ShowResturants
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->ClientSize = System::Drawing::Size(1150, 700);
			this->Controls->Add(this->btn_Cuisines6);
			this->Controls->Add(this->btn_Cuisines5);
			this->Controls->Add(this->btn_Cuisines4);
			this->Controls->Add(this->lbl_Cuisines6);
			this->Controls->Add(this->lbl_Cuisines5);
			this->Controls->Add(this->lbl_Cuisines4);
			this->Controls->Add(this->btn_Cuisines3);
			this->Controls->Add(this->btn_Cuisines2);
			this->Controls->Add(this->btn_Cuisines1);
			this->Controls->Add(this->lbl_Cuisines3);
			this->Controls->Add(this->lbl_Cuisines2);
			this->Controls->Add(this->lbl_Cuisines1);
			this->Controls->Add(this->btn_Filter3);
			this->Controls->Add(this->btn_Filter2);
			this->Controls->Add(this->btn_Filter1);
			this->Controls->Add(this->btn_nothin2);
			this->Controls->Add(this->lbl_Nthin3);
			this->Controls->Add(this->lbl_Filter3);
			this->Controls->Add(this->lbl_Filter2);
			this->Controls->Add(this->lbl_Filter1);
			this->Controls->Add(this->lbl_searchNthin);
			this->Controls->Add(this->btn_nothin1);
			this->Controls->Add(this->lbl_Nthin2);
			this->Controls->Add(this->tb_Search);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ShowResturants";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ShowResturants";
			this->Activated += gcnew System::EventHandler(this, &ShowResturants::ShowResturants_Activated);
			this->Load += gcnew System::EventHandler(this, &ShowResturants::ShowResturants_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void ShowResturants_Load(System::Object^  sender, System::EventArgs^  e) {
				//form and combo boxes
				cb_governments->Items->Clear();
				cb_area->Items->Clear();
				msclr::interop::marshal_context con;
				map<string, vector<string> > ::iterator it = Global::cities.begin();
				for (; it != Global::cities.end(); it++)
				{
					string s = it->first;
					String ^item = con.marshal_as<String^>(s);
					cb_governments->Items->Add(item);
				}
				//
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
				String^ city = cb_governments->Text->ToString();
				cb_area->Items->Clear();
				string temp = con.marshal_as<string>(city);
				for (auto i : Global::cities[temp])
				{
					string s = i;
					String ^item = con.marshal_as<String^>(s);
					cb_area->Items->Add(item);
				}
				cb_area->Text = con.marshal_as<String^>(curlocation);
				cb_governments->Text = con.marshal_as<String^>(curCity);
				lbl_locandnum->Text += " " + curLocRestaurants.size().ToString() + " restaurants.";
				//
				for (int i = 0; i < curLocRestaurants.size(); i++){
					UserControl ^uc = gcnew ResturantsUC();
					msclr::interop::marshal_context con;
					String ^temp = con.marshal_as<String^>(curLocRestaurants[i].name);
					//Logo
					String ^s = temp;
					s += ".jpg";
					auto img = System::Drawing::Image::FromFile(s);
					uc->Controls["pb_Logo"]->BackgroundImage = img;
					//
					//name
					uc->Controls["lbl_Name"]->Text = temp + con.marshal_as<String^>(" - " + curLocRestaurants[i].location);
					//
					//tags
					uc->Controls["lbl_Tags"]->Text = "";
					vector<string> tag = curLocRestaurants[i].tags;
					for (int j = 0; j < tag.size(); j++){
						uc->Controls["lbl_Tags"]->Text += con.marshal_as<String^>(tag[j]);
						if (j < tag.size() - 1)
							uc->Controls["lbl_Tags"]->Text += ", ";
					}
					//
					//rating
					uc->Controls["lbl_rating"]->Text = curLocRestaurants[i].rating.ToString();
					int stars = curLocRestaurants[i].rating;
					for (int j = 1; j <= 5; j++){
						if (j <= stars){
							string s = "pictureBox";
							uc->Controls[con.marshal_as<String^>(s) +j.ToString()]->BackgroundImage = System::Drawing::Image::FromFile("star.png");
						}
					}

					//
					//delivery fee
					uc->Controls["lbl_deliveryfee"]->Text = curLocRestaurants[i].deliveryfee.ToString();
					//
					//Discont!
					if (!curLocRestaurants[i].deal.exist)
						uc->Controls["pb_Discont"]->Hide(), uc->Controls["lbl_DiscountDes"]->Hide();
					else
						uc->Controls["lbl_DiscountDes"]->Text = con.marshal_as<String^>(curLocRestaurants[i].deal.description);
					//
					//Payment method
					if (!curLocRestaurants[i].paymentWay)
						uc->Controls["pb_cc"]->Hide();
					//
					//delivery time
					for (auto i : curLocRestaurants[i].deliveryLocations){
						if (i.first == curlocation){
							uc->Controls["lbl_DeliveryT"]->Text = i.second.ToString() + "min";
							break;
						}
					}
					//
					flowLayoutPanel1->Controls->Add(uc);
				}
	}

	internal: System::Void btn_changeloc_Click(System::Object^  sender, System::EventArgs^  e) {
				 flowLayoutPanel1->Controls->Clear();
				 lbl_locandnum->Text = "Order from";
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
					 ShowResturants_Load(this, e);
				 }
				 else
					 MessageBox::Show("Please enter an area first.");
	}
	private: System::Void btn_Exit_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 btn_Exit->ForeColor = Color::White;
	}
	private: System::Void btn_Exit_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 btn_Exit->ForeColor = Color::FromArgb(99, 42, 123);
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void lbl_SigninSignup_Click(System::Object^  sender, System::EventArgs^  e) {
				 glo::Login_signup->Show();
	}
	private: System::Void ShowResturants_Activated(System::Object^  sender, System::EventArgs^  e) {
				 if (logged){
					 msclr::interop::marshal_context con;
					 btn_Profile->Location = System::Drawing::Point(1005, 8);
					 lbl_SigninSignup->Hide();
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
	private: System::Void lbl_SigninSignup_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				 lbl_SigninSignup->ForeColor = Color::White;
	}
	private: System::Void lbl_SigninSignup_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 lbl_SigninSignup->ForeColor = Color::FromArgb(99, 42, 123);
	}
	private: System::Void btn_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
				 close();
				 Application::Exit();
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
	private: System::Void tb_Search_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (tb_Search->TextLength > 0)
				 {
					 lbl_searchNthin->Visible = false;
				 }
				 else
				 {
					 lbl_searchNthin->Visible = true;
				 }
	}

	private: System::Void check_Filters(System::Object^  sender, System::EventArgs^  e) {
				 flowLayoutPanel1->Controls->Clear();
				 lbl_locandnum->Text = "Order from";
				 if (cb_area->Text != "Enter area"){
					 msclr::interop::marshal_context con;
					 curlocation = con.marshal_as<string>(cb_area->Text);
					 curCity = con.marshal_as<string>(cb_governments->Text);
					 curLocRestaurants.clear();
					 for (unsigned int i = 0; i < resturant.size(); i++){
						 if (resturant[i].City == curCity && resturant[i].location == curlocation){
							 if ((resturant[i].deliveryfee != 0.0 && filters[1])
								 || (!resturant[i].deal.exist && filters[2])
								 || (!resturant[i].paymentWay && filters[3]))
								 continue;
							 bool flags[7];
							 for (unsigned int j = 0; j < 7; j++) flags[j] = false;
							 for (unsigned int j = 0; j < resturant[i].tags.size(); j++)
							 {
								 if (!cuisines[0] || (cuisines[0] && (resturant[i].tags[j].find(searchTxt) != string::npos || resturant[i].name.find(searchTxt) != string::npos))) flags[0] = true;
								 if (!cuisines[1] || (cuisines[1] && resturant[i].tags[j].find("Sandwiches") != string::npos)) flags[1] = true;
								 if (!cuisines[2] || (cuisines[2] && resturant[i].tags[j].find("Grills") != string::npos)) flags[2] = true;
								 if (!cuisines[3] || (cuisines[3] && resturant[i].tags[j].find("Fast Food") != string::npos)) flags[3] = true;
								 if (!cuisines[4] || (cuisines[4] && resturant[i].tags[j].find("Pizza") != string::npos)) flags[4] = true;
								 if (!cuisines[5] || (cuisines[5] && resturant[i].tags[j].find("Burgers") != string::npos)) flags[5] = true;
								 if (!cuisines[6] || (cuisines[6] && resturant[i].tags[j].find("Salads") != string::npos)) flags[6] = true;
							 }
							 bool mehBGD = false;
							 for (unsigned int j = 0; j < 7; j++)
							 if (cuisines[j] && !flags[j])
								 mehBGD = true;
							 if (mehBGD) continue;
							 curLocRestaurants.push_back(resturant[i]);
						 }
						 else{
							 vector<pair<string, int> > v = resturant[i].deliveryLocations;
							 for (unsigned int j = 0; j < v.size(); j++)
							 if (v[j].first == curlocation){
								 if ((resturant[i].deliveryfee != 0.0 && filters[1])
									 || (!resturant[i].deal.exist && filters[2])
									 || (!resturant[i].paymentWay && filters[3]))
									 continue;
								 bool flags[7];
								 for (unsigned int j = 0; j < 7; j++) flags[j] = false;
								 for (unsigned int j = 0; j < resturant[i].tags.size(); j++)
								 {
									 if (!cuisines[0] || (cuisines[0] && (resturant[i].tags[j].find(searchTxt) != string::npos || resturant[i].name.find(searchTxt) != string::npos))) flags[0] = true;
									 if (!cuisines[1] || (cuisines[1] && resturant[i].tags[j].find("Sandwiches") != string::npos)) flags[1] = true;
									 if (!cuisines[2] || (cuisines[2] && resturant[i].tags[j].find("Grills") != string::npos)) flags[2] = true;
									 if (!cuisines[3] || (cuisines[3] && resturant[i].tags[j].find("Fast Food") != string::npos)) flags[3] = true;
									 if (!cuisines[4] || (cuisines[4] && resturant[i].tags[j].find("Pizza") != string::npos)) flags[4] = true;
									 if (!cuisines[5] || (cuisines[5] && resturant[i].tags[j].find("Burgers") != string::npos)) flags[5] = true;
									 if (!cuisines[6] || (cuisines[6] && resturant[i].tags[j].find("Salads") != string::npos)) flags[6] = true;
								 }
								 bool mehBGD = false;
								 for (unsigned int j = 0; j < 7; j++)
								 if (cuisines[j] && !flags[j])
									 mehBGD = true;
								 if (mehBGD) continue;
								 curLocRestaurants.push_back(resturant[i]);
							 }
						 }
					 }
					 ShowResturants_Load(this, e);
				 }
				 else
					 MessageBox::Show("Please enter an area first.");
	}

	private: System::Void lbl_Filter1_Click(System::Object^  sender, System::EventArgs^  e) {
				 filters[1] = !filters[1];
				 if (filters[1])
				 {
					 lbl_Filter1->ForeColor = Color::Black;
					 btn_Filter1->Visible = true;
				 }
				 else{
					 lbl_Filter1->ForeColor = Color::DarkGray;
					 btn_Filter1->Visible = false;
				 }
				 check_Filters(sender, e);
	}
	private: System::Void lbl_Filter2_Click(System::Object^  sender, System::EventArgs^  e) {
				 filters[2] = !filters[2];
				 if (filters[2])
				 {
					 lbl_Filter2->ForeColor = Color::Black;
					 btn_Filter2->Visible = true;
				 }
				 else{
					 lbl_Filter2->ForeColor = Color::DarkGray;
					 btn_Filter2->Visible = false;
				 }
				 check_Filters(sender, e);
	}
	private: System::Void lbl_Filter3_Click(System::Object^  sender, System::EventArgs^  e) {
				 filters[3] = !filters[3];
				 if (filters[3])
				 {
					 lbl_Filter3->ForeColor = Color::Black;
					 btn_Filter3->Visible = true;
				 }
				 else{
					 lbl_Filter3->ForeColor = Color::DarkGray;
					 btn_Filter3->Visible = false;
				 }
				 check_Filters(sender, e);
	}
	private: System::Void lbl_Cuisines1_Click(System::Object^  sender, System::EventArgs^  e) {
				 cuisines[1] = !cuisines[1];
				 if (cuisines[1])
				 {
					 lbl_Cuisines1->ForeColor = Color::Black;
					 btn_Cuisines1->Visible = true;
				 }
				 else{
					 lbl_Cuisines1->ForeColor = Color::DarkGray;
					 btn_Cuisines1->Visible = false;
				 }
				 check_Filters(sender, e);
	}
	private: System::Void lbl_Cuisines2_Click(System::Object^  sender, System::EventArgs^  e) {
				 cuisines[2] = !cuisines[2];
				 if (cuisines[2])
				 {
					 lbl_Cuisines2->ForeColor = Color::Black;
					 btn_Cuisines2->Visible = true;
				 }
				 else{
					 lbl_Cuisines2->ForeColor = Color::DarkGray;
					 btn_Cuisines2->Visible = false;
				 }
				 check_Filters(sender, e);
	}
	private: System::Void lbl_Cuisines3_Click(System::Object^  sender, System::EventArgs^  e) {
				 cuisines[3] = !cuisines[3];
				 if (cuisines[3])
				 {
					 lbl_Cuisines3->ForeColor = Color::Black;
					 btn_Cuisines3->Visible = true;
				 }
				 else{
					 lbl_Cuisines3->ForeColor = Color::DarkGray;
					 btn_Cuisines3->Visible = false;
				 }
				 check_Filters(sender, e);
	}
	private: System::Void lbl_Cuisines4_Click(System::Object^  sender, System::EventArgs^  e) {
				 cuisines[4] = !cuisines[4];
				 if (cuisines[4])
				 {
					 lbl_Cuisines4->ForeColor = Color::Black;
					 btn_Cuisines4->Visible = true;
				 }
				 else{
					 lbl_Cuisines4->ForeColor = Color::DarkGray;
					 btn_Cuisines4->Visible = false;
				 }
				 check_Filters(sender, e);
	}
	private: System::Void lbl_Cuisines5_Click(System::Object^  sender, System::EventArgs^  e) {
				 cuisines[5] = !cuisines[5];
				 if (cuisines[5])
				 {
					 lbl_Cuisines5->ForeColor = Color::Black;
					 btn_Cuisines5->Visible = true;
				 }
				 else{
					 lbl_Cuisines5->ForeColor = Color::DarkGray;
					 btn_Cuisines5->Visible = false;
				 }
				 check_Filters(sender, e);
	}
	private: System::Void lbl_Cuisines7_Click(System::Object^  sender, System::EventArgs^  e) {
				 cuisines[6] = !cuisines[6];
				 if (cuisines[6])
				 {
					 lbl_Cuisines6->ForeColor = Color::Black;
					 btn_Cuisines6->Visible = true;
				 }
				 else{
					 lbl_Cuisines6->ForeColor = Color::DarkGray;
					 btn_Cuisines6->Visible = false;
				 }
				 check_Filters(sender, e);
	}
	private: System::Void tb_Search_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 if (e->KeyCode == Keys::Enter || e->KeyCode == Keys::Back)
				 {
					 if (tb_Search->TextLength == 0){
						 cuisines[0] = false;
					 }
					 else{
						 cuisines[0] = true;
						 msclr::interop::marshal_context con;
						 searchTxt = con.marshal_as<string>(tb_Search->Text);
					 }
					 check_Filters(sender, e);
				 }
	}
	private: System::Void btn_Profile_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 glo::MyAccount->Show();
	}
};
}
