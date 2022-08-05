#pragma once

namespace PasswordOrganizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addlogin
	/// </summary>
	public ref class addlogin : public System::Windows::Forms::Form
	{
	public:
		addlogin(void)
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
		~addlogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ websiteappname;
	protected:
	private: System::Windows::Forms::TextBox^ email;
	private: System::Windows::Forms::TextBox^ savedusername;

	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ randompass;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ savebutton;
	private: System::Windows::Forms::Button^ cancelbutton;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->websiteappname = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->savedusername = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->randompass = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->savebutton = (gcnew System::Windows::Forms::Button());
			this->cancelbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// websiteappname
			// 
			this->websiteappname->ForeColor = System::Drawing::Color::Gray;
			this->websiteappname->Location = System::Drawing::Point(12, 33);
			this->websiteappname->Name = L"websiteappname";
			this->websiteappname->Size = System::Drawing::Size(235, 20);
			this->websiteappname->TabIndex = 0;
			this->websiteappname->Text = L"Enter the name of the Website or Application...";
			this->websiteappname->TextChanged += gcnew System::EventHandler(this, &addlogin::websiteappname_TextChanged);
			// 
			// email
			// 
			this->email->ForeColor = System::Drawing::Color::Gray;
			this->email->Location = System::Drawing::Point(37, 59);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(173, 20);
			this->email->TabIndex = 1;
			this->email->Text = L"Enter Email Address if applicable...";
			// 
			// savedusername
			// 
			this->savedusername->ForeColor = System::Drawing::Color::Gray;
			this->savedusername->Location = System::Drawing::Point(37, 85);
			this->savedusername->Name = L"savedusername";
			this->savedusername->Size = System::Drawing::Size(173, 20);
			this->savedusername->TabIndex = 2;
			this->savedusername->Text = L"Enter Username if applicable...";
			// 
			// password
			// 
			this->password->ForeColor = System::Drawing::Color::Gray;
			this->password->Location = System::Drawing::Point(37, 111);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(173, 20);
			this->password->TabIndex = 3;
			this->password->Text = L"Enter Password...";
			// 
			// randompass
			// 
			this->randompass->Location = System::Drawing::Point(217, 111);
			this->randompass->Name = L"randompass";
			this->randompass->Size = System::Drawing::Size(29, 19);
			this->randompass->TabIndex = 4;
			this->toolTip1->SetToolTip(this->randompass, L"Click this button to generate a randomized password.\r\n");
			this->randompass->UseVisualStyleBackColor = true;
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			// 
			// savebutton
			// 
			this->savebutton->Location = System::Drawing::Point(18, 142);
			this->savebutton->Name = L"savebutton";
			this->savebutton->Size = System::Drawing::Size(70, 23);
			this->savebutton->TabIndex = 5;
			this->savebutton->Text = L"Save";
			this->savebutton->UseVisualStyleBackColor = true;
			// 
			// cancelbutton
			// 
			this->cancelbutton->Location = System::Drawing::Point(176, 142);
			this->cancelbutton->Name = L"cancelbutton";
			this->cancelbutton->Size = System::Drawing::Size(70, 23);
			this->cancelbutton->TabIndex = 6;
			this->cancelbutton->Text = L"Cancel";
			this->cancelbutton->UseVisualStyleBackColor = true;
			// 
			// addlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 171);
			this->Controls->Add(this->cancelbutton);
			this->Controls->Add(this->savebutton);
			this->Controls->Add(this->randompass);
			this->Controls->Add(this->password);
			this->Controls->Add(this->savedusername);
			this->Controls->Add(this->email);
			this->Controls->Add(this->websiteappname);
			this->Name = L"addlogin";
			this->Text = L"Create New Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void websiteappname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
