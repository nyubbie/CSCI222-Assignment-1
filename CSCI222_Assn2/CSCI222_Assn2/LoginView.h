#pragma once

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

#include "MemberView.h"
#include "AdminView.h"

namespace CSCI222_Assn2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class LoginView : public System::Windows::Forms::Form
	{
	public:
		LoginView(void)
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
		~LoginView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  TitleLabel;
	private: System::Windows::Forms::Label^  UsernameLabel;
	private: System::Windows::Forms::Label^  PasswordLabel;
	private: System::Windows::Forms::TextBox^  UsernameTextBox;
	private: System::Windows::Forms::TextBox^  PasswordTextBox;
	private: System::Windows::Forms::Button^  systemLogin;
	private: System::Windows::Forms::Label^  label1;

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
			this->TitleLabel = (gcnew System::Windows::Forms::Label());
			this->UsernameLabel = (gcnew System::Windows::Forms::Label());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->UsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->systemLogin = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TitleLabel
			// 
			this->TitleLabel->AutoSize = true;
			this->TitleLabel->Location = System::Drawing::Point(37, 34);
			this->TitleLabel->Name = L"TitleLabel";
			this->TitleLabel->Size = System::Drawing::Size(189, 13);
			this->TitleLabel->TabIndex = 0;
			this->TitleLabel->Text = L"Country Club Facilities Booking System";
			// 
			// UsernameLabel
			// 
			this->UsernameLabel->AutoSize = true;
			this->UsernameLabel->Location = System::Drawing::Point(29, 79);
			this->UsernameLabel->Name = L"UsernameLabel";
			this->UsernameLabel->Size = System::Drawing::Size(58, 13);
			this->UsernameLabel->TabIndex = 1;
			this->UsernameLabel->Text = L"Username:";
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->Location = System::Drawing::Point(29, 136);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(56, 13);
			this->PasswordLabel->TabIndex = 2;
			this->PasswordLabel->Text = L"Password:";
			// 
			// UsernameTextBox
			// 
			this->UsernameTextBox->Location = System::Drawing::Point(104, 79);
			this->UsernameTextBox->Name = L"UsernameTextBox";
			this->UsernameTextBox->Size = System::Drawing::Size(100, 20);
			this->UsernameTextBox->TabIndex = 3;
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Location = System::Drawing::Point(104, 136);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(100, 20);
			this->PasswordTextBox->TabIndex = 4;
			// 
			// systemLogin
			// 
			this->systemLogin->Location = System::Drawing::Point(104, 196);
			this->systemLogin->Name = L"systemLogin";
			this->systemLogin->Size = System::Drawing::Size(75, 23);
			this->systemLogin->TabIndex = 5;
			this->systemLogin->Text = L"Login";
			this->systemLogin->UseVisualStyleBackColor = true;
			this->systemLogin->Click += gcnew System::EventHandler(this, &LoginView::systemLogin_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(125, 227);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 6;
			// 
			// LoginView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->systemLogin);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->UsernameTextBox);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->UsernameLabel);
			this->Controls->Add(this->TitleLabel);
			this->Name = L"LoginView";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void systemLogin_Click(System::Object^  sender, System::EventArgs^  e) {
		// To validate if Member or Admin, read AccountDB file
		std::ifstream myfile("AccountDB.txt");

		std::string line;
		char charLine[256];
		char* accountString;

		std::string usernameConvertToString;
		std::string passwordConvertToString;

		std::string account[999][7];

		// For counting accounts
		int accountCount = 0;
		int maxAccountCount = 0;

		// For counting account columns
		int accountColumnCount = 0;

		//// testing
		//char ass[40];
		////

		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				// Convert string to System string^
				//String^ sline = gcnew String(line.c_str());
				//TitleLabel->Text = sline;

				// Change line to const char *, then use strcpy to use as charLine variable.
				strcpy(charLine, line.c_str());

				// Strtok charLine to separate the entire string with ':' as the delimiter
				accountString = strtok(charLine, ":");
				while (accountString != NULL)
				{
					// Save data as Member / Admin Object
					account[accountCount][accountColumnCount] = accountString;

					// testing
					//String^ testo = gcnew String(itoa(accountColumnCount, ass, 10));
					//label1->Text = testo;

					// Only 7 columns
					if (accountColumnCount >= 6) {
						// Reset count
						accountColumnCount = 0;
					}
					else { accountColumnCount++; }
					
					accountString = strtok(NULL, ":");
				}

				accountCount++;
			}
			myfile.close();

			// Store total account counts into maxAccountCount variable
			maxAccountCount = accountCount;

			// Get the username and password in TextBox
			String^ usernameTextBox = UsernameTextBox->Text;
			String^ passwordTextBox = PasswordTextBox->Text;

			// Convert System String to String
			MarshalString(usernameTextBox, usernameConvertToString);
			MarshalString(passwordTextBox, passwordConvertToString);

			// Loop through accounts
			for (int accountCount = 0; accountCount < maxAccountCount; accountCount++) {

				//String^ sline = gcnew String(usernameConvertToString);
				//TitleLabel->Text= sline;

				// Check for Admin
				if (usernameConvertToString == account[accountCount][1] && passwordConvertToString == account[accountCount][2] && atoi(account[accountCount][3].c_str()) == 0) {

					// Go into Admin Form
					this->Hide();
					AdminView^ adminForm = gcnew AdminView(this, account[accountCount][0], account[accountCount][1], account[accountCount][2], account[accountCount][3], account[accountCount][4], account[accountCount][5], account[accountCount][6]);
					adminForm->Show();
					
				}
				else if (usernameConvertToString == account[accountCount][1] && passwordConvertToString == account[accountCount][2] && atoi(account[accountCount][3].c_str()) >= 1) {
					
					// Go into Member Form
					this->Hide();
					MemberView^ memberForm = gcnew MemberView(this, account[accountCount][0], account[accountCount][1], account[accountCount][2], account[accountCount][3], account[accountCount][4], account[accountCount][5], account[accountCount][6]);
					memberForm->Show();
					String^ retainMemberID = gcnew String(account[accountCount][0].c_str());
					memberForm->MemberID = retainMemberID;
					String^ retainMemberUsername = gcnew String(account[accountCount][1].c_str());
					memberForm->MemberUsername = retainMemberUsername;
					String^ retainMemberPassword = gcnew String(account[accountCount][2].c_str());
					memberForm->MemberPassword = retainMemberPassword;
					String^ retainMemberRanking = gcnew String(account[accountCount][3].c_str());
					memberForm->MemberRanking = retainMemberRanking;
					String^ retainMemberName = gcnew String(account[accountCount][4].c_str());
					memberForm->MemberName = retainMemberName;
					String^ retainMemberDOB = gcnew String(account[accountCount][5].c_str());
					memberForm->MemberDOB = retainMemberDOB;
					String^ retainMemberAddress = gcnew String(account[accountCount][6].c_str());
					memberForm->MemberAddress = retainMemberAddress;
				}
				else {
					
					// Tell user it's an invalid login
					label1->Text = "Invalid Login!";
				}
			}

			// testing
			//String^ sline = gcnew String(account[2][2].c_str());
			//TitleLabel->Text= sline;
		}

		/**/
	}

	void MarshalString(String ^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	void MarshalString(String ^ s, std::wstring& os) {
		using namespace Runtime::InteropServices;
		const wchar_t* chars =
			(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
};
}