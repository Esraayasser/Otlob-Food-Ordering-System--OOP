#pragma once
#include "Globals.h"
#include "ResturantMenu.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Global;


namespace OOP_Otlob_Project {

	/// <summary>
	/// Summary for ResturantsUC
	/// </summary>
	public ref class ResturantsUC : public System::Windows::Forms::UserControl
	{
	public:

		ResturantsUC()
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
		~ResturantsUC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pb_cc;
	protected:
	private: System::Windows::Forms::PictureBox^  pb_Discont;
	private: System::Windows::Forms::Label^  lbl_DeliveryT;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbl_Tags;
	private: System::Windows::Forms::Label^  lbl_Name;
	private: System::Windows::Forms::PictureBox^  pb_Logo;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbl_rating;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lbl_deliveryfee;
	private: System::Windows::Forms::Label^  lbl_DiscountDes;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ResturantsUC::typeid));
			this->pb_cc = (gcnew System::Windows::Forms::PictureBox());
			this->pb_Discont = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_DeliveryT = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_Tags = (gcnew System::Windows::Forms::Label());
			this->lbl_Name = (gcnew System::Windows::Forms::Label());
			this->pb_Logo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_rating = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbl_deliveryfee = (gcnew System::Windows::Forms::Label());
			this->lbl_DiscountDes = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_cc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Discont))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pb_cc
			// 
			this->pb_cc->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_cc.BackgroundImage")));
			this->pb_cc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pb_cc->Location = System::Drawing::Point(447, 62);
			this->pb_cc->Name = L"pb_cc";
			this->pb_cc->Size = System::Drawing::Size(30, 21);
			this->pb_cc->TabIndex = 13;
			this->pb_cc->TabStop = false;
			// 
			// pb_Discont
			// 
			this->pb_Discont->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_Discont.BackgroundImage")));
			this->pb_Discont->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pb_Discont->Location = System::Drawing::Point(474, 62);
			this->pb_Discont->Name = L"pb_Discont";
			this->pb_Discont->Size = System::Drawing::Size(30, 21);
			this->pb_Discont->TabIndex = 12;
			this->pb_Discont->TabStop = false;
			// 
			// lbl_DeliveryT
			// 
			this->lbl_DeliveryT->AutoSize = true;
			this->lbl_DeliveryT->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_DeliveryT->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->lbl_DeliveryT->Location = System::Drawing::Point(574, 37);
			this->lbl_DeliveryT->Name = L"lbl_DeliveryT";
			this->lbl_DeliveryT->Size = System::Drawing::Size(69, 22);
			this->lbl_DeliveryT->TabIndex = 11;
			this->lbl_DeliveryT->Text = L"30 min";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->label2->Location = System::Drawing::Point(508, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 18);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Delivers in";
			// 
			// lbl_Tags
			// 
			this->lbl_Tags->Font = (gcnew System::Drawing::Font(L"Corbel", 10.5F));
			this->lbl_Tags->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->lbl_Tags->Location = System::Drawing::Point(136, 36);
			this->lbl_Tags->Name = L"lbl_Tags";
			this->lbl_Tags->Size = System::Drawing::Size(295, 34);
			this->lbl_Tags->TabIndex = 9;
			this->lbl_Tags->Text = L"tags";
			this->lbl_Tags->Click += gcnew System::EventHandler(this, &ResturantsUC::ResturantsUC_Click);
			// 
			// lbl_Name
			// 
			this->lbl_Name->AutoSize = true;
			this->lbl_Name->Font = (gcnew System::Drawing::Font(L"Corbel", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Name->Location = System::Drawing::Point(128, 8);
			this->lbl_Name->Name = L"lbl_Name";
			this->lbl_Name->Size = System::Drawing::Size(69, 29);
			this->lbl_Name->TabIndex = 8;
			this->lbl_Name->Text = L"Maco";
			// 
			// pb_Logo
			// 
			this->pb_Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pb_Logo->Location = System::Drawing::Point(14, 12);
			this->pb_Logo->Name = L"pb_Logo";
			this->pb_Logo->Size = System::Drawing::Size(95, 95);
			this->pb_Logo->TabIndex = 7;
			this->pb_Logo->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 10.5F));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->label1->Location = System::Drawing::Point(131, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Rating :";
			// 
			// lbl_rating
			// 
			this->lbl_rating->AutoSize = true;
			this->lbl_rating->Font = (gcnew System::Drawing::Font(L"Corbel", 10.5F));
			this->lbl_rating->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->lbl_rating->Location = System::Drawing::Point(177, 77);
			this->lbl_rating->Name = L"lbl_rating";
			this->lbl_rating->Size = System::Drawing::Size(45, 17);
			this->lbl_rating->TabIndex = 15;
			this->lbl_rating->Text = L"Rating";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->label3->Location = System::Drawing::Point(510, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 18);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Delivery fee :";
			// 
			// lbl_deliveryfee
			// 
			this->lbl_deliveryfee->AutoSize = true;
			this->lbl_deliveryfee->Font = (gcnew System::Drawing::Font(L"Corbel", 10.5F));
			this->lbl_deliveryfee->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->lbl_deliveryfee->Location = System::Drawing::Point(591, 63);
			this->lbl_deliveryfee->Name = L"lbl_deliveryfee";
			this->lbl_deliveryfee->Size = System::Drawing::Size(26, 17);
			this->lbl_deliveryfee->TabIndex = 17;
			this->lbl_deliveryfee->Text = L"fee";
			// 
			// lbl_DiscountDes
			// 
			this->lbl_DiscountDes->Font = (gcnew System::Drawing::Font(L"Corbel", 10.5F));
			this->lbl_DiscountDes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->lbl_DiscountDes->Location = System::Drawing::Point(445, 83);
			this->lbl_DiscountDes->Name = L"lbl_DiscountDes";
			this->lbl_DiscountDes->Size = System::Drawing::Size(198, 36);
			this->lbl_DiscountDes->TabIndex = 18;
			this->lbl_DiscountDes->Text = L"Discount description";
			this->lbl_DiscountDes->Click += gcnew System::EventHandler(this, &ResturantsUC::lbl_DiscountDes_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(228, 77);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(17, 17);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(247, 77);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(17, 17);
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(266, 77);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(17, 17);
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(285, 77);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(17, 17);
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Location = System::Drawing::Point(304, 77);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(17, 17);
			this->pictureBox5->TabIndex = 23;
			this->pictureBox5->TabStop = false;
			// 
			// ResturantsUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lbl_DiscountDes);
			this->Controls->Add(this->lbl_deliveryfee);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lbl_rating);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pb_cc);
			this->Controls->Add(this->pb_Discont);
			this->Controls->Add(this->lbl_DeliveryT);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbl_Tags);
			this->Controls->Add(this->lbl_Name);
			this->Controls->Add(this->pb_Logo);
			this->Name = L"ResturantsUC";
			this->Size = System::Drawing::Size(656, 119);
			this->Load += gcnew System::EventHandler(this, &ResturantsUC::ResturantsUC_Load);
			this->Click += gcnew System::EventHandler(this, &ResturantsUC::ResturantsUC_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_cc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Discont))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lbl_DiscountDes_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void ResturantsUC_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context con;
			 for (int i = 0; i < curLocRestaurants.size(); i++){
				 String ^temp = con.marshal_as<String^>(curLocRestaurants[i].name + " - " + curLocRestaurants[i].location);
				 if (lbl_Name->Text == temp){
					 Global::curResturant = curLocRestaurants[i];
					 break;
				 }
			 }
			 //curOrder.items.clear();
			 ResturantMenu ^menu = gcnew ResturantMenu();
			 glo::Menus = menu;
			 glo::showresturant->Hide();
			 glo::Menus->Show(); 
}
private: System::Void ResturantsUC_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
