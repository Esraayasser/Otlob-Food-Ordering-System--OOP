#pragma once
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
	/// Summary for ResturantsMenu
	/// </summary>
	public ref class CategoryMenu : public System::Windows::Forms::UserControl
	{
	public:
		CategoryMenu(void)
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
		~CategoryMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_Categoryname;
	protected:

	private: System::Windows::Forms::PictureBox^  pb_CategoryImg;


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
			this->lbl_Categoryname = (gcnew System::Windows::Forms::Label());
			this->pb_CategoryImg = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_CategoryImg))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_Categoryname
			// 
			this->lbl_Categoryname->AutoSize = true;
			this->lbl_Categoryname->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Categoryname->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Categoryname->ForeColor = System::Drawing::Color::Black;
			this->lbl_Categoryname->Location = System::Drawing::Point(14, 75);
			this->lbl_Categoryname->Name = L"lbl_Categoryname";
			this->lbl_Categoryname->Size = System::Drawing::Size(137, 23);
			this->lbl_Categoryname->TabIndex = 0;
			this->lbl_Categoryname->Text = L"Category name";
			// 
			// pb_CategoryImg
			// 
			this->pb_CategoryImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pb_CategoryImg->Location = System::Drawing::Point(0, 0);
			this->pb_CategoryImg->Name = L"pb_CategoryImg";
			this->pb_CategoryImg->Size = System::Drawing::Size(650, 68);
			this->pb_CategoryImg->TabIndex = 2;
			this->pb_CategoryImg->TabStop = false;
			// 
			// CategoryMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->pb_CategoryImg);
			this->Controls->Add(this->lbl_Categoryname);
			this->Name = L"CategoryMenu";
			this->Size = System::Drawing::Size(590, 115);
			this->Load += gcnew System::EventHandler(this, &CategoryMenu::CategoryMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_CategoryImg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CategoryMenu_Load(System::Object^  sender, System::EventArgs^  e) {
				 /*msclr::interop::marshal_context con;
				 MessageBox::Show("Fuck!!!!!!!!!!!!!-__- " + con.marshal_as<String^>(Global::curResturant.name) + ", " + (Global::curResturant.menu.size()).ToString());*/
	}
	};
}
