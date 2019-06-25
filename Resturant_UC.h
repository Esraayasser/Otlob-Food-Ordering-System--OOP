#pragma once

namespace OOP_Otlob_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Resturant_UC
	/// </summary>
	public ref class Resturant_UC : public System::Windows::Forms::Form
	{
	public:
		Resturant_UC(void)
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
		~Resturant_UC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pb_Logo;
	private: System::Windows::Forms::Label^  lbl_Name;
	protected:

	protected:

	private: System::Windows::Forms::Label^  lbl_Tags;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbl_DeliveryT;
	private: System::Windows::Forms::PictureBox^  pb_Discont;
	private: System::Windows::Forms::PictureBox^  pb_cc;



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
			this->pb_Logo = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_Name = (gcnew System::Windows::Forms::Label());
			this->lbl_Tags = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_DeliveryT = (gcnew System::Windows::Forms::Label());
			this->pb_Discont = (gcnew System::Windows::Forms::PictureBox());
			this->pb_cc = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Discont))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_cc))->BeginInit();
			this->SuspendLayout();
			// 
			// pb_Logo
			// 
			this->pb_Logo->Location = System::Drawing::Point(12, 12);
			this->pb_Logo->Name = L"pb_Logo";
			this->pb_Logo->Size = System::Drawing::Size(95, 95);
			this->pb_Logo->TabIndex = 0;
			this->pb_Logo->TabStop = false;
			// 
			// lbl_Name
			// 
			this->lbl_Name->AutoSize = true;
			this->lbl_Name->Font = (gcnew System::Drawing::Font(L"Corbel", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Name->Location = System::Drawing::Point(126, 12);
			this->lbl_Name->Name = L"lbl_Name";
			this->lbl_Name->Size = System::Drawing::Size(69, 29);
			this->lbl_Name->TabIndex = 1;
			this->lbl_Name->Text = L"Maco";
			// 
			// lbl_Tags
			// 
			this->lbl_Tags->AutoSize = true;
			this->lbl_Tags->Font = (gcnew System::Drawing::Font(L"Corbel", 10.5F));
			this->lbl_Tags->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->lbl_Tags->Location = System::Drawing::Point(129, 43);
			this->lbl_Tags->Name = L"lbl_Tags";
			this->lbl_Tags->Size = System::Drawing::Size(40, 17);
			this->lbl_Tags->TabIndex = 2;
			this->lbl_Tags->Text = L"Maco";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->label2->Location = System::Drawing::Point(403, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Delivers in";
			// 
			// lbl_DeliveryT
			// 
			this->lbl_DeliveryT->AutoSize = true;
			this->lbl_DeliveryT->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_DeliveryT->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(157)));
			this->lbl_DeliveryT->Location = System::Drawing::Point(469, 69);
			this->lbl_DeliveryT->Name = L"lbl_DeliveryT";
			this->lbl_DeliveryT->Size = System::Drawing::Size(69, 22);
			this->lbl_DeliveryT->TabIndex = 4;
			this->lbl_DeliveryT->Text = L"30 min";
			// 
			// pb_Discont
			// 
			this->pb_Discont->Location = System::Drawing::Point(376, 73);
			this->pb_Discont->Name = L"pb_Discont";
			this->pb_Discont->Size = System::Drawing::Size(21, 21);
			this->pb_Discont->TabIndex = 5;
			this->pb_Discont->TabStop = false;
			// 
			// pb_cc
			// 
			this->pb_cc->Location = System::Drawing::Point(349, 73);
			this->pb_cc->Name = L"pb_cc";
			this->pb_cc->Size = System::Drawing::Size(21, 21);
			this->pb_cc->TabIndex = 6;
			this->pb_cc->TabStop = false;
			// 
			// Resturant_UC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(548, 119);
			this->Controls->Add(this->pb_cc);
			this->Controls->Add(this->pb_Discont);
			this->Controls->Add(this->lbl_DeliveryT);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbl_Tags);
			this->Controls->Add(this->lbl_Name);
			this->Controls->Add(this->pb_Logo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Resturant_UC";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Resturant_UC";
			this->Load += gcnew System::EventHandler(this, &Resturant_UC::Resturant_UC_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_Discont))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_cc))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Resturant_UC_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
