#pragma once
#include <vector>
#include "Globals.h"
#include <msclr\marshal_cppstd.h>
#include "OrderUC.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Global;

namespace OOP_Otlob_Project {

	/// <summary>
	/// Summary for Food
	/// </summary>
	public ref class Foods : public System::Windows::Forms::UserControl
	{
	public:
		Foods(Resturant t)
		{
			curResturant = t;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Foods()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pb_FoodImg;
	protected:

	private: System::Windows::Forms::Label^  lbl_description;
	private: System::Windows::Forms::Label^  lbl_Name;
	private: System::Windows::Forms::Label^  lbl_OutOfStock;
	private: System::Windows::Forms::Label^  lbl_Price;
	private: System::Windows::Forms::Button^  btn_addToOrder;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Foods::typeid));
			this->pb_FoodImg = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_description = (gcnew System::Windows::Forms::Label());
			this->lbl_Name = (gcnew System::Windows::Forms::Label());
			this->lbl_OutOfStock = (gcnew System::Windows::Forms::Label());
			this->lbl_Price = (gcnew System::Windows::Forms::Label());
			this->btn_addToOrder = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_FoodImg))->BeginInit();
			this->SuspendLayout();
			// 
			// pb_FoodImg
			// 
			this->pb_FoodImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pb_FoodImg->Location = System::Drawing::Point(9, 13);
			this->pb_FoodImg->Name = L"pb_FoodImg";
			this->pb_FoodImg->Size = System::Drawing::Size(100, 90);
			this->pb_FoodImg->TabIndex = 0;
			this->pb_FoodImg->TabStop = false;
			// 
			// lbl_description
			// 
			this->lbl_description->Font = (gcnew System::Drawing::Font(L"Corbel", 10.5F));
			this->lbl_description->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->lbl_description->Location = System::Drawing::Point(124, 41);
			this->lbl_description->Name = L"lbl_description";
			this->lbl_description->Size = System::Drawing::Size(295, 42);
			this->lbl_description->TabIndex = 11;
			this->lbl_description->Text = L"tags";
			// 
			// lbl_Name
			// 
			this->lbl_Name->AutoSize = true;
			this->lbl_Name->Font = (gcnew System::Drawing::Font(L"Corbel", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Name->Location = System::Drawing::Point(122, 12);
			this->lbl_Name->Name = L"lbl_Name";
			this->lbl_Name->Size = System::Drawing::Size(59, 26);
			this->lbl_Name->TabIndex = 10;
			this->lbl_Name->Text = L"Maco";
			// 
			// lbl_OutOfStock
			// 
			this->lbl_OutOfStock->AutoSize = true;
			this->lbl_OutOfStock->ForeColor = System::Drawing::Color::Red;
			this->lbl_OutOfStock->Location = System::Drawing::Point(126, 90);
			this->lbl_OutOfStock->Name = L"lbl_OutOfStock";
			this->lbl_OutOfStock->Size = System::Drawing::Size(154, 13);
			this->lbl_OutOfStock->TabIndex = 12;
			this->lbl_OutOfStock->Text = L"Sorry, this item is out of stock.";
			// 
			// lbl_Price
			// 
			this->lbl_Price->AutoSize = true;
			this->lbl_Price->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Price->ForeColor = System::Drawing::SystemColors::Desktop;
			this->lbl_Price->Location = System::Drawing::Point(512, 65);
			this->lbl_Price->Name = L"lbl_Price";
			this->lbl_Price->Size = System::Drawing::Size(34, 18);
			this->lbl_Price->TabIndex = 13;
			this->lbl_Price->Text = L"EGP";
			// 
			// btn_addToOrder
			// 
			this->btn_addToOrder->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_addToOrder.BackgroundImage")));
			this->btn_addToOrder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_addToOrder->FlatAppearance->BorderSize = 0;
			this->btn_addToOrder->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_addToOrder->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_addToOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_addToOrder->Location = System::Drawing::Point(543, 32);
			this->btn_addToOrder->Name = L"btn_addToOrder";
			this->btn_addToOrder->Size = System::Drawing::Size(30, 30);
			this->btn_addToOrder->TabIndex = 15;
			this->btn_addToOrder->UseVisualStyleBackColor = true;
			this->btn_addToOrder->Click += gcnew System::EventHandler(this, &Foods::pb_addToOrder_Click);
			// 
			// Foods
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->btn_addToOrder);
			this->Controls->Add(this->lbl_Price);
			this->Controls->Add(this->lbl_OutOfStock);
			this->Controls->Add(this->lbl_description);
			this->Controls->Add(this->lbl_Name);
			this->Controls->Add(this->pb_FoodImg);
			this->Name = L"Foods";
			this->Size = System::Drawing::Size(590, 115);
			this->Load += gcnew System::EventHandler(this, &Foods::Foods_Load);
			this->Click += gcnew System::EventHandler(this, &Foods::Foods_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_FoodImg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	void fill_panel_SemiBill(){
		curOrder.calc();
		glo::Menus->Controls["panel_SemiBill"]->Controls["lbl_subTotal"]->Text = curOrder.totalPrice.ToString();
		glo::Menus->Controls["panel_SemiBill"]->Controls["lbl_Deliveryfee"]->Text = curResturant.deliveryfee.ToString();
		glo::Menus->Controls["panel_SemiBill"]->Controls["lbl_total"]->Text = (curOrder.totalPrice + curResturant.deliveryfee).ToString();
	}
	private: System::Void pb_addToOrder_Click(System::Object^  sender, System::EventArgs^  e) {
				 msclr::interop::marshal_context con;
				 bool ok1 = 1;
				 for (int i = 0; i < curResturant.workingHours.size(); i++){
					 int Ohour = int::Parse(con.marshal_as<String^>(curResturant.workingHours[i].open.substr(0, 2))), Omin = int::Parse(con.marshal_as<String^>(curResturant.workingHours[i].open.substr(3, 2)));
					 int Chour = int::Parse(con.marshal_as<String^>(curResturant.workingHours[i].close.substr(0, 2))), Cmin = int::Parse(con.marshal_as<String^>(curResturant.workingHours[i].close.substr(3, 2)));
					 if (System::DateTime::Now.DayOfWeek.ToString() == con.marshal_as<String^>(curResturant.workingHours[i].day) && ((System::DateTime::Now.Hour < Ohour || (System::DateTime::Now.Hour == Ohour && System::DateTime::Now.Minute < Omin)) && (System::DateTime::Now.Hour > Chour || (System::DateTime::Now.Hour == Chour && System::DateTime::Now.Minute > Cmin))))
						 ok1 = 0;
				 }
				 for (auto it : Global::curResturant.menu){
					 String ^temp = con.marshal_as<String^>(it.first);
					 vector<Food> v = it.second;
					 for (int j = 0; j < v.size(); j++){
						 if (v[j].name == con.marshal_as<string>(lbl_Name->Text) && !v[j].quantity){
							 ok1 = 0;
						 }
					 }
				 }
				 if (ok1){
					 glo::Menus->Controls["panel_SemiBill"]->Show();
					 glo::addOrder(lbl_Name->Text);
					 glo::Menus->Controls["flp_Orders"]->BackgroundImage = nullptr;
					 glo::Menus->Controls["flp_Orders"]->Controls->Clear();
					 for (int i = 0; i < curOrder.items.size(); i++){
						 UserControl ^uc = gcnew OrderUC(curOrder.items[i].second.first.quantity);
						 uc->Controls["lbl_name"]->Text = con.marshal_as<String^>(curOrder.items[i].second.first.name);
						 uc->Controls["lbl_price"]->Text = curOrder.items[i].second.first.price.ToString();
						 uc->Controls["nUD_Quantity"]->Text = curOrder.items[i].second.second.ToString();
						 glo::Menus->Controls["flp_Orders"]->Controls->Add(uc);
					 }
					 fill_panel_SemiBill();
				 }
	}
private: System::Void Foods_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Foods_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
