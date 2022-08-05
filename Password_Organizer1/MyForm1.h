#pragma once
#include"addlogin.h"

namespace PasswordOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ loginbutton;
	protected:

	private: System::Windows::Forms::Button^ accountinfo1;
	protected:


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ accountinfo2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->loginbutton = (gcnew System::Windows::Forms::Button());
			this->accountinfo1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->accountinfo2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// loginbutton
			// 
			this->loginbutton->Location = System::Drawing::Point(12, 10);
			this->loginbutton->Name = L"loginbutton";
			this->loginbutton->Size = System::Drawing::Size(69, 24);
			this->loginbutton->TabIndex = 0;
			this->loginbutton->Text = L"New Login";
			this->loginbutton->UseVisualStyleBackColor = true;
			this->loginbutton->Click += gcnew System::EventHandler(this, &MyForm1::newloginbutton_click);
			// 
			// accountinfo1
			// 
			this->accountinfo1->Location = System::Drawing::Point(7, 9);
			this->accountinfo1->Name = L"accountinfo1";
			this->accountinfo1->Size = System::Drawing::Size(113, 47);
			this->accountinfo1->TabIndex = 2;
			this->accountinfo1->Text = L"Placeholder, used for the login information of an account";
			this->accountinfo1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->accountinfo2);
			this->panel1->Controls->Add(this->accountinfo1);
			this->panel1->Location = System::Drawing::Point(5, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(162, 425);
			this->panel1->TabIndex = 3;
			this->panel1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm1::panel1_Scroll);
			// 
			// accountinfo2
			// 
			this->accountinfo2->Location = System::Drawing::Point(7, 62);
			this->accountinfo2->Name = L"accountinfo2";
			this->accountinfo2->Size = System::Drawing::Size(113, 47);
			this->accountinfo2->TabIndex = 3;
			this->accountinfo2->Text = L"Placeholder, used for the login information of an account";
			this->accountinfo2->UseVisualStyleBackColor = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(170, 466);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->loginbutton);
			this->Name = L"MyForm1";
			this->Text = L"Password Organizer";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void newloginbutton_click(System::Object^ sender, System::EventArgs^ e) {//method used for creating a new set of login information
		addlogin^ new_account_page = gcnew addlogin;
		new_account_page->Show();
	}
	private: System::Void panel1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	};
}
