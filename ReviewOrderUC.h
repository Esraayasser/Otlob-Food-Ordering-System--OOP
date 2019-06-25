#pragma once
#include "Globals.h"
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Global;

namespace OOP_Otlob_Project {

	/// <summary>
	/// Summary for ReviewOrderUC
	/// </summary>
	//static int maximumQ;
	public ref class ReviewOrderUC : public System::Windows::Forms::UserControl
	{
	public:
		ReviewOrderUC(int m)
		{
			maximumQ = m;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReviewOrderUC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_description;
	protected:
	private: System::Windows::Forms::Label^  lbl_Name;
	public: System::Windows::Forms::NumericUpDown^  nUD_Quantity;
	private:
	private: System::Windows::Forms::Label^  lbl_Price;
	private: System::Windows::Forms::Button^  btn_cancel;
	public:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ReviewOrderUC::typeid));
			this->lbl_description = (gcnew System::Windows::Forms::Label());
			this->lbl_Name = (gcnew System::Windows::Forms::Label());
			this->nUD_Quantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbl_Price = (gcnew System::Windows::Forms::Label());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUD_Quantity))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_description
			// 
			this->lbl_description->Font = (gcnew System::Drawing::Font(L"Corbel", 10.5F));
			this->lbl_description->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->lbl_description->Location = System::Drawing::Point(58, 49);
			this->lbl_description->Name = L"lbl_description";
			this->lbl_description->Size = System::Drawing::Size(344, 69);
			this->lbl_description->TabIndex = 13;
			this->lbl_description->Text = L"tags";
			// 
			// lbl_Name
			// 
			this->lbl_Name->AutoSize = true;
			this->lbl_Name->Font = (gcnew System::Drawing::Font(L"Corbel", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Name->Location = System::Drawing::Point(56, 20);
			this->lbl_Name->Name = L"lbl_Name";
			this->lbl_Name->Size = System::Drawing::Size(59, 26);
			this->lbl_Name->TabIndex = 12;
			this->lbl_Name->Text = L"Maco";
			// 
			// nUD_Quantity
			// 
			this->nUD_Quantity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->nUD_Quantity->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->nUD_Quantity->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nUD_Quantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nUD_Quantity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->nUD_Quantity->Location = System::Drawing::Point(437, 63);
			this->nUD_Quantity->Name = L"nUD_Quantity";
			this->nUD_Quantity->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nUD_Quantity->Size = System::Drawing::Size(75, 22);
			this->nUD_Quantity->TabIndex = 14;
			this->nUD_Quantity->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->nUD_Quantity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nUD_Quantity->ValueChanged += gcnew System::EventHandler(this, &ReviewOrderUC::nUD_Quantity_ValueChanged);
			// 
			// lbl_Price
			// 
			this->lbl_Price->AutoSize = true;
			this->lbl_Price->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->lbl_Price->Location = System::Drawing::Point(563, 60);
			this->lbl_Price->Name = L"lbl_Price";
			this->lbl_Price->Size = System::Drawing::Size(48, 23);
			this->lbl_Price->TabIndex = 15;
			this->lbl_Price->Text = L"EGP ";
			// 
			// btn_cancel
			// 
			this->btn_cancel->FlatAppearance->BorderSize = 0;
			this->btn_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->ForeColor = System::Drawing::Color::Transparent;
			this->btn_cancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cancel.Image")));
			this->btn_cancel->Location = System::Drawing::Point(13, 56);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(25, 25);
			this->btn_cancel->TabIndex = 16;
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &ReviewOrderUC::btn_cancel_Click);
			// 
			// ReviewOrderUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->lbl_Price);
			this->Controls->Add(this->nUD_Quantity);
			this->Controls->Add(this->lbl_description);
			this->Controls->Add(this->lbl_Name);
			this->Name = L"ReviewOrderUC";
			this->Size = System::Drawing::Size(680, 136);
			this->Load += gcnew System::EventHandler(this, &ReviewOrderUC::ReviewOrderUC_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUD_Quantity))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void fill_panel_SemiBill(){
			curOrder.calc();
			glo::Menus->Controls["panel_SemiBill"]->Controls["lbl_subTotal"]->Text = curOrder.totalPrice.ToString();
			glo::Menus->Controls["panel_SemiBill"]->Controls["lbl_Deliveryfee"]->Text = curResturant.deliveryfee.ToString();
			glo::Menus->Controls["panel_SemiBill"]->Controls["lbl_total"]->Text = (curOrder.totalPrice + curResturant.deliveryfee).ToString();
		}
#pragma endregion
	private: System::Void btn_cancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 msclr::interop::marshal_context con;
				 glo::cancelOrder(lbl_Name->Text);
				 glo::Menus->Controls["flp_Orders"]->Controls->Clear();
				 for (int i = 0; i < curOrder.items.size(); i++){
					 UserControl ^uc = gcnew ReviewOrderUC(curOrder.items[i].second.first.quantity);
					 uc->Controls["lbl_name"]->Text = con.marshal_as<String^>(curOrder.items[i].second.first.name);
					 uc->Controls["lbl_price"]->Text = curOrder.items[i].second.first.price.ToString();
					 uc->Controls["nUD_Quantity"]->Text = curOrder.items[i].second.second.ToString();
					 glo::Menus->Controls["flp_Orders"]->Controls->Add(uc);
				 }
				 fill_panel_SemiBill();
	}
private: System::Void ReviewOrderUC_Load(System::Object^  sender, System::EventArgs^  e) {
			 nUD_Quantity->Maximum = maximumQ;
}
private: System::Void nUD_Quantity_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 glo::OrderOuantityChange(lbl_Name->Text, nUD_Quantity->Value.ToInt32(nUD_Quantity->Value));
			 fill_panel_SemiBill();
}
};
}
