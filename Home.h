#pragma once
#include "Globals.h"
#include <msclr\marshal_cppstd.h>
#include "ShowResturants.h"
#include <fstream>
#include "Person.h"
#include<vector>
namespace OOP_Otlob_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Global;
	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cb_area;
private: System::Windows::Forms::Button^  btn_ShowRestaurnats;




	private: System::Windows::Forms::ComboBox^  cb_governments;

private: System::Windows::Forms::Label^  lbl_SigninSignup;
private: System::Windows::Forms::Button^  btn_Exit;
private: System::Windows::Forms::Label^  lbl_areaError;
	private: System::Windows::Forms::Label^  btn_Profile;










	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_Profile = (gcnew System::Windows::Forms::Label());
			this->btn_Exit = (gcnew System::Windows::Forms::Button());
			this->lbl_SigninSignup = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cb_area = (gcnew System::Windows::Forms::ComboBox());
			this->btn_ShowRestaurnats = (gcnew System::Windows::Forms::Button());
			this->cb_governments = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_areaError = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->btn_Profile);
			this->panel1->Controls->Add(this->btn_Exit);
			this->panel1->Controls->Add(this->lbl_SigninSignup);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(901, 54);
			this->panel1->TabIndex = 0;
			// 
			// btn_Profile
			// 
			this->btn_Profile->BackColor = System::Drawing::Color::Transparent;
			this->btn_Profile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Profile->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Profile->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->btn_Profile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Profile.Image")));
			this->btn_Profile->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Profile->Location = System::Drawing::Point(262, 11);
			this->btn_Profile->Name = L"btn_Profile";
			this->btn_Profile->Size = System::Drawing::Size(112, 26);
			this->btn_Profile->TabIndex = 12;
			this->btn_Profile->Text = L"My Account";
			this->btn_Profile->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->btn_Profile->Click += gcnew System::EventHandler(this, &Home::btn_Profile_Click);
			this->btn_Profile->MouseLeave += gcnew System::EventHandler(this, &Home::btn_Profile_MouseLeave);
			this->btn_Profile->MouseHover += gcnew System::EventHandler(this, &Home::btn_Profile_MouseHover);
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
			this->btn_Exit->Location = System::Drawing::Point(868, 17);
			this->btn_Exit->Name = L"btn_Exit";
			this->btn_Exit->Size = System::Drawing::Size(20, 20);
			this->btn_Exit->TabIndex = 3;
			this->btn_Exit->Text = L"X";
			this->btn_Exit->UseVisualStyleBackColor = true;
			this->btn_Exit->Click += gcnew System::EventHandler(this, &Home::btn_Exit_Click);
			this->btn_Exit->MouseLeave += gcnew System::EventHandler(this, &Home::btn_Exit_MouseLeave);
			this->btn_Exit->MouseHover += gcnew System::EventHandler(this, &Home::btn_Exit_MouseHover);
			// 
			// lbl_SigninSignup
			// 
			this->lbl_SigninSignup->BackColor = System::Drawing::Color::Transparent;
			this->lbl_SigninSignup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_SigninSignup->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_SigninSignup->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(123)));
			this->lbl_SigninSignup->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lbl_SigninSignup.Image")));
			this->lbl_SigninSignup->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_SigninSignup->Location = System::Drawing::Point(715, 11);
			this->lbl_SigninSignup->Name = L"lbl_SigninSignup";
			this->lbl_SigninSignup->Size = System::Drawing::Size(147, 26);
			this->lbl_SigninSignup->TabIndex = 4;
			this->lbl_SigninSignup->Text = L"Sign in or Sign up";
			this->lbl_SigninSignup->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->lbl_SigninSignup->Click += gcnew System::EventHandler(this, &Home::btn_login_signup_Click);
			this->lbl_SigninSignup->MouseLeave += gcnew System::EventHandler(this, &Home::btn_login_signup_MouseLeave);
			this->lbl_SigninSignup->MouseHover += gcnew System::EventHandler(this, &Home::btn_login_signup_MouseHover);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(128, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(675, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Order Your Favorite Food Online Now";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(281, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(378, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"From thousands of resturants in Egypt";
			// 
			// cb_area
			// 
			this->cb_area->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->cb_area->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cb_area->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cb_area->BackColor = System::Drawing::Color::White;
			this->cb_area->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cb_area->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_area->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->cb_area->ItemHeight = 25;
			this->cb_area->Location = System::Drawing::Point(370, 275);
			this->cb_area->Name = L"cb_area";
			this->cb_area->Size = System::Drawing::Size(254, 33);
			this->cb_area->Sorted = true;
			this->cb_area->TabIndex = 6;
			this->cb_area->Text = L"Enter area";
			this->cb_area->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::cb_area_SelectedIndexChanged);
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
			this->btn_ShowRestaurnats->Location = System::Drawing::Point(621, 275);
			this->btn_ShowRestaurnats->Name = L"btn_ShowRestaurnats";
			this->btn_ShowRestaurnats->Size = System::Drawing::Size(195, 33);
			this->btn_ShowRestaurnats->TabIndex = 7;
			this->btn_ShowRestaurnats->Text = L"SHOW RESTURANTS";
			this->btn_ShowRestaurnats->UseVisualStyleBackColor = false;
			this->btn_ShowRestaurnats->Click += gcnew System::EventHandler(this, &Home::btn_ShowRestaurnats_Click);
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
			this->cb_governments->Font = (gcnew System::Drawing::Font(L"Bahnschrift Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_governments->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->cb_governments->ItemHeight = 25;
			this->cb_governments->Location = System::Drawing::Point(119, 275);
			this->cb_governments->Name = L"cb_governments";
			this->cb_governments->Size = System::Drawing::Size(255, 33);
			this->cb_governments->Sorted = true;
			this->cb_governments->TabIndex = 8;
			this->cb_governments->Text = L"Cairo";
			this->cb_governments->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::governments_SelectedIndexChanged);
			// 
			// lbl_areaError
			// 
			this->lbl_areaError->AutoSize = true;
			this->lbl_areaError->BackColor = System::Drawing::Color::Transparent;
			this->lbl_areaError->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_areaError->ForeColor = System::Drawing::Color::Red;
			this->lbl_areaError->Location = System::Drawing::Point(371, 459);
			this->lbl_areaError->Name = L"lbl_areaError";
			this->lbl_areaError->Size = System::Drawing::Size(158, 18);
			this->lbl_areaError->TabIndex = 9;
			this->lbl_areaError->Text = L"Plese Enter an area.";
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->lbl_areaError);
			this->Controls->Add(this->cb_governments);
			this->Controls->Add(this->btn_ShowRestaurnats);
			this->Controls->Add(this->cb_area);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Activated += gcnew System::EventHandler(this, &Home::Home_Activated);
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
private: System::Void Home_Load(System::Object^  sender, System::EventArgs^  e) {
			 load();
			 lbl_areaError->Hide();
			 msclr::interop::marshal_context con;
			 if (!logged){
				 btn_Profile->Hide();
			 }
			 else{
				 msclr::interop::marshal_context con;
				 btn_Profile->Text = con.marshal_as<String^>(user->F_name + " " + user->L_name);
				 btn_Profile->Location = System::Drawing::Point(698, 11);;
				 btn_Profile->Show();
			 }
			 map<string, vector<string> > ::iterator it = Global::cities.begin();
			 cb_governments->Items->Clear();
			 cb_area->Items->Clear();
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
}

private: System::Void governments_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
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

private: System::Void btn_login_signup_Click(System::Object^  sender, System::EventArgs^  e) {
			 glo::Login_signup->Show();
}
private: System::Void btn_login_signup_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 lbl_SigninSignup->ForeColor = Color::White;
			 auto img = System::Drawing::Image::FromFile("loginhover.png");
			 lbl_SigninSignup->Image = img;
}

private: System::Void btn_login_signup_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 lbl_SigninSignup->ForeColor = Color::FromArgb(99, 42, 123);
			 auto img = System::Drawing::Image::FromFile("login.png");
			 lbl_SigninSignup->Image = img;
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
private: System::Void btn_ShowRestaurnats_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (cb_area->Text != "Enter area"){
				 msclr::interop::marshal_context con;
				 curlocation = con.marshal_as<string>(cb_area->Text);
				 curCity = con.marshal_as<string>(cb_governments->Text);
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
				 ShowResturants ^sr = gcnew ShowResturants();
				 sr->Show();
				 this->Hide();
			 }
			 else
				 lbl_areaError->Show();
}
private: System::Void cb_area_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 lbl_areaError->Hide();
}
private: System::Void btn_Profile_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 glo::MyAccount->Show();
}
private: System::Void Home_Activated(System::Object^  sender, System::EventArgs^  e) {
			 if (logged){
				 msclr::interop::marshal_context con;
				 btn_Profile->Location = System::Drawing::Point(750, 11);
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
};
}
