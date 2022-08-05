#pragma once
#include"MyForm1.h"
#include"endec.h"
#include<msclr\marshal_cppstd.h>
//#include<iostream>
#include<iostream>
#include<fstream>

namespace PasswordOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ master_password;
	public: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


	protected:

	protected:

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
			this->master_password = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// master_password
			// 
			this->master_password->AccessibleName = L"Password";
			this->master_password->ForeColor = System::Drawing::Color::Gray;
			this->master_password->Location = System::Drawing::Point(155, 179);
			this->master_password->MaxLength = 64;
			this->master_password->Name = L"master_password";
			this->master_password->Size = System::Drawing::Size(134, 20);
			this->master_password->TabIndex = 2;
			this->master_password->Text = L"Enter Master Password...";
			this->master_password->TextChanged += gcnew System::EventHandler(this, &MyForm::master_password_TextChanged);
			this->master_password->Enter += gcnew System::EventHandler(this, &MyForm::master_password_Enter);
			this->master_password->Leave += gcnew System::EventHandler(this, &MyForm::master_password_Leave);
			// 
			// username
			// 
			this->username->ForeColor = System::Drawing::Color::Gray;
			this->username->Location = System::Drawing::Point(155, 133);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(134, 20);
			this->username->TabIndex = 1;
			this->username->Text = L"Enter Username...";
			this->username->TextChanged += gcnew System::EventHandler(this, &MyForm::username_TextChanged);
			this->username->Enter += gcnew System::EventHandler(this, &MyForm::username_Enter);
			this->username->Leave += gcnew System::EventHandler(this, &MyForm::username_Leave);
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->Location = System::Drawing::Point(160, 138);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(0, 13);
			this->username_label->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(320, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Thank you for choosing Password Organizer, please sign in below:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(181, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(71, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->button1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::button1_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 388);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->username_label);
			this->Controls->Add(this->username);
			this->Controls->Add(this->master_password);
			this->Name = L"MyForm";
			this->Text = L"Password Organizer";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void username_Enter(System::Object^ sender, System::EventArgs^ e) {//if a username has not been typed yet, this method will clear the placeholder text
																						//and set the text color to black when the username textbox comes into focus.
		if (username->Text == L"Enter Username...")
			this->username->Text = L"";

		this->username->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void master_password_Enter(System::Object^ sender, System::EventArgs^ e) {//nearly identical to the username method above

		if (this->master_password->Text == L"Enter Master Password...")
			this->master_password->Text = L"";

		this->master_password->PasswordChar = '*';

		this->master_password->ForeColor = System::Drawing::Color::Black;

	}

	private: System::Void username_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->username->Text == L"")
		{
			this->username->Text = L"Enter Username...";
			this->username->ForeColor = System::Drawing::Color::Gray;
		}
	}
	private: System::Void master_password_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->master_password->Text == L"")
		{
			this->master_password->Text = L"Enter Master Password...";
			this->master_password->ForeColor = System::Drawing::Color::Gray;
			this->master_password->PasswordChar = 0;
		}
	}

	private: System::Void master_password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ convert = this->master_password->Text;	//using marshal library to convert from System::String to std::string,
		msclr::interop::marshal_context context;		//effectively converting from textbox to a usable string
		endec userinfo;
		std::string temp = context.marshal_as<std::string>(convert);
		userinfo.set_password(temp);
	}
	private: System::Void username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ convert = this->username->Text;	//using marshal library to convert from System::String to std::string,
		msclr::interop::marshal_context context;		//effectively converting from textbox to a usable string
		endec userinfo;
		std::string temp = context.marshal_as<std::string>(convert);
		userinfo.set_username(temp);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		MyForm::Visible = false;

		MyForm1^ organizer_page = gcnew MyForm1;
		organizer_page->Show();

	}
	private: System::Void button1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar)
		{
			MyForm::Visible = false;

			MyForm1^ organizer_page = gcnew MyForm1;
			organizer_page->Show();
		}
	}
	};
}
