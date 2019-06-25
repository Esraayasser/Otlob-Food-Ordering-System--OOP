#pragma once
#include <msclr\marshal_cppstd.h>
#include "Globals.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Global;
namespace OOP_Otlob_Project {

	/// <summary>
	/// Summary for OrderUC
	/// </summary>
	public ref class OrderUC : public System::Windows::Forms::UserControl
	{
	public:
		int maximumQ;
		OrderUC(int m)
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
		~OrderUC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_name;
	protected:
	private: System::Windows::Forms::Label^  lbl_price;
	public: System::Windows::Forms::NumericUpDown^  nUD_Quantity;
	private:

	private:

	private:

	private: System::Windows::Forms::Button^  btn_cancel;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderUC::typeid));
			this->lbl_name = (gcnew System::Windows::Forms::Label());
			this->lbl_price = (gcnew System::Windows::Forms::Label());
			this->nUD_Quantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUD_Quantity))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_name
			// 
			this->lbl_name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_name->Location = System::Drawing::Point(44, 22);
			this->lbl_name->Name = L"lbl_name";
			this->lbl_name->Size = System::Drawing::Size(150, 36);
			this->lbl_name->TabIndex = 0;
			this->lbl_name->Text = L"name";
			// 
			// lbl_price
			// 
			this->lbl_price->AutoSize = true;
			this->lbl_price->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_price->Location = System::Drawing::Point(196, 42);
			this->lbl_price->Name = L"lbl_price";
			this->lbl_price->Size = System::Drawing::Size(39, 17);
			this->lbl_price->TabIndex = 1;
			this->lbl_price->Text = L"Price";
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
			this->nUD_Quantity->Location = System::Drawing::Point(0, 29);
			this->nUD_Quantity->Name = L"nUD_Quantity";
			this->nUD_Quantity->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nUD_Quantity->Size = System::Drawing::Size(38, 22);
			this->nUD_Quantity->TabIndex = 2;
			this->nUD_Quantity->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->nUD_Quantity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nUD_Quantity->ValueChanged += gcnew System::EventHandler(this, &OrderUC::nUD_Quantity_ValueChanged);
			// 
			// btn_cancel
			// 
			this->btn_cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cancel.BackgroundImage")));
			this->btn_cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_cancel->FlatAppearance->BorderSize = 0;
			this->btn_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancel->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(184)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->btn_cancel->Location = System::Drawing::Point(202, 14);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(25, 25);
			this->btn_cancel->TabIndex = 3;
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &OrderUC::btn_cancel_Click);
			// 
			// OrderUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->nUD_Quantity);
			this->Controls->Add(this->lbl_price);
			this->Controls->Add(this->lbl_name);
			this->Name = L"OrderUC";
			this->Size = System::Drawing::Size(249, 76);
			this->Load += gcnew System::EventHandler(this, &OrderUC::OrderUC_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nUD_Quantity))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void OrderUC_Load(System::Object^  sender, System::EventArgs^  e) {
				 nUD_Quantity->Maximum = maximumQ;
	}
void fill_panel_SemiBill(){
	curOrder.calc();
	glo::Menus->Controls["panel_SemiBill"]->Controls["lbl_subTotal"]->Text = curOrder.totalPrice.ToString();
	glo::Menus->Controls["panel_SemiBill"]->Controls["lbl_Deliveryfee"]->Text = curResturant.deliveryfee.ToString();
	glo::Menus->Controls["panel_SemiBill"]->Controls["lbl_total"]->Text = (curOrder.totalPrice + curResturant.deliveryfee).ToString();
}
private: System::Void btn_cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			msclr::interop::marshal_context con;
			glo::cancelOrder(lbl_name->Text);
			if (curOrder.items.size()){
				for (int i = 0; i < curOrder.items.size(); i++){
					UserControl ^cc = gcnew OrderUC(curOrder.items[i].second.first.quantity);
					cc->Controls["lbl_name"]->Text = con.marshal_as<String^>(curOrder.items[i].second.first.name);
					cc->Controls["lbl_price"]->Text = curOrder.items[i].second.first.price.ToString();
					cc->Controls["nUD_Quantity"]->Text = curOrder.items[i].second.second.ToString();
					glo::Menus->Controls["flp_Orders"]->Controls->Add(cc);
				}
				fill_panel_SemiBill();
			}
			else
				glo::Menus->Controls["panel_SemiBill"]->Hide();
}

private: System::Void nUD_Quantity_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (!nUD_Quantity->Value.ToInt32(nUD_Quantity->Value))
				 btn_cancel_Click(this, e);
			 else
				 glo::OrderOuantityChange(lbl_name->Text, nUD_Quantity->Value.ToInt32(nUD_Quantity->Value));
}
};
}
