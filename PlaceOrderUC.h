#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace OOP_Otlob_Project {

	/// <summary>
	/// Summary for PlaceOrderUC
	/// </summary>
	public ref class PlaceOrderUC : public System::Windows::Forms::UserControl
	{
	public:
		PlaceOrderUC(void)
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
		~PlaceOrderUC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_name;
	private: System::Windows::Forms::Label^  lbl_Price;
	private: System::Windows::Forms::Label^  lbl_Quantity;
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
			this->lbl_name = (gcnew System::Windows::Forms::Label());
			this->lbl_Price = (gcnew System::Windows::Forms::Label());
			this->lbl_Quantity = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_name
			// 
			this->lbl_name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_name->Location = System::Drawing::Point(57, 29);
			this->lbl_name->Name = L"lbl_name";
			this->lbl_name->Size = System::Drawing::Size(163, 36);
			this->lbl_name->TabIndex = 1;
			this->lbl_name->Text = L"name";
			// 
			// lbl_Price
			// 
			this->lbl_Price->AutoSize = true;
			this->lbl_Price->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Price->Location = System::Drawing::Point(226, 47);
			this->lbl_Price->Name = L"lbl_Price";
			this->lbl_Price->Size = System::Drawing::Size(39, 20);
			this->lbl_Price->TabIndex = 38;
			this->lbl_Price->Text = L"EGP";
			// 
			// lbl_Quantity
			// 
			this->lbl_Quantity->AutoSize = true;
			this->lbl_Quantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Quantity->Location = System::Drawing::Point(12, 47);
			this->lbl_Quantity->Name = L"lbl_Quantity";
			this->lbl_Quantity->Size = System::Drawing::Size(24, 18);
			this->lbl_Quantity->TabIndex = 39;
			this->lbl_Quantity->Text = L"2x";
			// 
			// PlaceOrderUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->lbl_Quantity);
			this->Controls->Add(this->lbl_Price);
			this->Controls->Add(this->lbl_name);
			this->Name = L"PlaceOrderUC";
			this->Size = System::Drawing::Size(320, 94);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
