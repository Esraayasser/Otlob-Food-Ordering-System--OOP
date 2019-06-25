#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace OOP_Otlob_Project {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class ResturantUC : public System::Windows::Forms::UserControl
	{
	public:
		ResturantUC(void)
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
		~ResturantUC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  ResturantName;
	protected:
	private: System::Windows::Forms::PictureBox^  ReesturantLogo;

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
			this->ResturantName = (gcnew System::Windows::Forms::Label());
			this->ReesturantLogo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ReesturantLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// ResturantName
			// 
			this->ResturantName->AutoSize = true;
			this->ResturantName->Location = System::Drawing::Point(104, 21);
			this->ResturantName->Name = L"ResturantName";
			this->ResturantName->Size = System::Drawing::Size(0, 13);
			this->ResturantName->TabIndex = 3;
			// 
			// ReesturantLogo
			// 
			this->ReesturantLogo->Location = System::Drawing::Point(18, 21);
			this->ReesturantLogo->Name = L"ReesturantLogo";
			this->ReesturantLogo->Size = System::Drawing::Size(70, 72);
			this->ReesturantLogo->TabIndex = 2;
			this->ReesturantLogo->TabStop = false;
			// 
			// ResturantUC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Controls->Add(this->ResturantName);
			this->Controls->Add(this->ReesturantLogo);
			this->Name = L"ResturantUC";
			this->Size = System::Drawing::Size(503, 124);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ReesturantLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
