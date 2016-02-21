#include <string>
#include <cstring>

#include "CreateMemberView.h"
#include "EditMemberView.h"

#pragma once

namespace CSCI222_Assn2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminView
	/// </summary>
	public ref class AdminView : public System::Windows::Forms::Form
	{
	public:
		AdminView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		AdminView(System::Windows::Forms::Form^ loginView, std::string adminID, std::string adminUsername, std::string adminPassword, std::string adminRanking, std::string adminName, std::string adminDOB, std::string adminAddress)
		{
			mainForm = loginView;

			InitializeComponent();

			String^ s_adminID = gcnew String(adminID.c_str());
			AdminIDLabel->Text = s_adminID;

			// Rest of admin data should be null, just Admin ID, Username, Password is available
			/*String^ s_memberName = gcnew String(memberName.c_str());
			label3->Text = s_memberName;
			String^ s_memberAddress = gcnew String(memberAddress.c_str());
			label5->Text = s_memberAddress;
			String^ s_memberDOB = gcnew String(memberDOB.c_str());
			label7->Text = s_memberDOB;*/
		}
	private: System::Windows::Forms::Label^  MemberNotFoundTitle;
	public:

	private: System::Windows::Forms::Form ^ mainForm;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  AdminViewTitle;
	protected:

	private: System::Windows::Forms::Label^  AdminTitle;
	private: System::Windows::Forms::Label^  AdminIDLabel;


	private: System::Windows::Forms::Button^  EditMemberButton;
	private: System::Windows::Forms::TextBox^  MemberIDTextBox;


	private: System::Windows::Forms::Button^  CreateMemberButton;
	private: System::Windows::Forms::Button^  DeleteMemberButton;
	private: System::Windows::Forms::Button^  SearchMemberButton;
	private: System::Windows::Forms::Label^  MemberIDTitle;

	private: System::Windows::Forms::Button^  LogoutButton;




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
			this->AdminViewTitle = (gcnew System::Windows::Forms::Label());
			this->AdminTitle = (gcnew System::Windows::Forms::Label());
			this->AdminIDLabel = (gcnew System::Windows::Forms::Label());
			this->EditMemberButton = (gcnew System::Windows::Forms::Button());
			this->MemberIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CreateMemberButton = (gcnew System::Windows::Forms::Button());
			this->DeleteMemberButton = (gcnew System::Windows::Forms::Button());
			this->SearchMemberButton = (gcnew System::Windows::Forms::Button());
			this->MemberIDTitle = (gcnew System::Windows::Forms::Label());
			this->LogoutButton = (gcnew System::Windows::Forms::Button());
			this->MemberNotFoundTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// AdminViewTitle
			// 
			this->AdminViewTitle->AutoSize = true;
			this->AdminViewTitle->Location = System::Drawing::Point(168, 32);
			this->AdminViewTitle->Name = L"AdminViewTitle";
			this->AdminViewTitle->Size = System::Drawing::Size(258, 13);
			this->AdminViewTitle->TabIndex = 1;
			this->AdminViewTitle->Text = L"Country Club Facilities Booking System (Admin Page) ";
			// 
			// AdminTitle
			// 
			this->AdminTitle->AutoSize = true;
			this->AdminTitle->Location = System::Drawing::Point(34, 73);
			this->AdminTitle->Name = L"AdminTitle";
			this->AdminTitle->Size = System::Drawing::Size(53, 13);
			this->AdminTitle->TabIndex = 2;
			this->AdminTitle->Text = L"Admin ID:";
			// 
			// AdminIDLabel
			// 
			this->AdminIDLabel->AutoSize = true;
			this->AdminIDLabel->Location = System::Drawing::Point(93, 73);
			this->AdminIDLabel->Name = L"AdminIDLabel";
			this->AdminIDLabel->Size = System::Drawing::Size(23, 13);
			this->AdminIDLabel->TabIndex = 3;
			this->AdminIDLabel->Text = L"null";
			// 
			// EditMemberButton
			// 
			this->EditMemberButton->Location = System::Drawing::Point(195, 189);
			this->EditMemberButton->Name = L"EditMemberButton";
			this->EditMemberButton->Size = System::Drawing::Size(75, 23);
			this->EditMemberButton->TabIndex = 4;
			this->EditMemberButton->Text = L"Edit Member";
			this->EditMemberButton->UseVisualStyleBackColor = true;
			this->EditMemberButton->Click += gcnew System::EventHandler(this, &AdminView::EditMemberButton_Click);
			// 
			// MemberIDTextBox
			// 
			this->MemberIDTextBox->Location = System::Drawing::Point(89, 191);
			this->MemberIDTextBox->Name = L"MemberIDTextBox";
			this->MemberIDTextBox->Size = System::Drawing::Size(100, 20);
			this->MemberIDTextBox->TabIndex = 5;
			// 
			// CreateMemberButton
			// 
			this->CreateMemberButton->Location = System::Drawing::Point(31, 162);
			this->CreateMemberButton->Name = L"CreateMemberButton";
			this->CreateMemberButton->Size = System::Drawing::Size(91, 23);
			this->CreateMemberButton->TabIndex = 7;
			this->CreateMemberButton->Text = L"Create Member";
			this->CreateMemberButton->UseVisualStyleBackColor = true;
			this->CreateMemberButton->Click += gcnew System::EventHandler(this, &AdminView::CreateMemberButton_Click);
			// 
			// DeleteMemberButton
			// 
			this->DeleteMemberButton->Location = System::Drawing::Point(372, 189);
			this->DeleteMemberButton->Name = L"DeleteMemberButton";
			this->DeleteMemberButton->Size = System::Drawing::Size(91, 23);
			this->DeleteMemberButton->TabIndex = 8;
			this->DeleteMemberButton->Text = L"Delete Member";
			this->DeleteMemberButton->UseVisualStyleBackColor = true;
			// 
			// SearchMemberButton
			// 
			this->SearchMemberButton->Location = System::Drawing::Point(276, 189);
			this->SearchMemberButton->Name = L"SearchMemberButton";
			this->SearchMemberButton->Size = System::Drawing::Size(90, 23);
			this->SearchMemberButton->TabIndex = 9;
			this->SearchMemberButton->Text = L"Search Member";
			this->SearchMemberButton->UseVisualStyleBackColor = true;
			// 
			// MemberIDTitle
			// 
			this->MemberIDTitle->AutoSize = true;
			this->MemberIDTitle->Location = System::Drawing::Point(28, 194);
			this->MemberIDTitle->Name = L"MemberIDTitle";
			this->MemberIDTitle->Size = System::Drawing::Size(59, 13);
			this->MemberIDTitle->TabIndex = 10;
			this->MemberIDTitle->Text = L"MemberID:";
			// 
			// LogoutButton
			// 
			this->LogoutButton->Location = System::Drawing::Point(469, 189);
			this->LogoutButton->Name = L"LogoutButton";
			this->LogoutButton->Size = System::Drawing::Size(90, 23);
			this->LogoutButton->TabIndex = 11;
			this->LogoutButton->Text = L"Logout";
			this->LogoutButton->UseVisualStyleBackColor = true;
			this->LogoutButton->Click += gcnew System::EventHandler(this, &AdminView::LogoutButton_Click);
			// 
			// MemberNotFoundTitle
			// 
			this->MemberNotFoundTitle->AutoSize = true;
			this->MemberNotFoundTitle->Location = System::Drawing::Point(128, 167);
			this->MemberNotFoundTitle->Name = L"MemberNotFoundTitle";
			this->MemberNotFoundTitle->Size = System::Drawing::Size(0, 13);
			this->MemberNotFoundTitle->TabIndex = 12;
			// 
			// AdminView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 261);
			this->Controls->Add(this->MemberNotFoundTitle);
			this->Controls->Add(this->LogoutButton);
			this->Controls->Add(this->MemberIDTitle);
			this->Controls->Add(this->SearchMemberButton);
			this->Controls->Add(this->DeleteMemberButton);
			this->Controls->Add(this->CreateMemberButton);
			this->Controls->Add(this->MemberIDTextBox);
			this->Controls->Add(this->EditMemberButton);
			this->Controls->Add(this->AdminIDLabel);
			this->Controls->Add(this->AdminTitle);
			this->Controls->Add(this->AdminViewTitle);
			this->Name = L"AdminView";
			this->Text = L"AdminView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void LogoutButton_Click(System::Object^  sender, System::EventArgs^  e) {
		mainForm->Show();
		this->Close();
	}
	private: System::Void CreateMemberButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		CreateMemberView^ createMemberForm = gcnew CreateMemberView(this);
		createMemberForm->Show();
	}
	private: System::Void EditMemberButton_Click(System::Object^  sender, System::EventArgs^  e) {

		// Declare strings for conversion
		std::string memberIDConvertToString;

		// Get ID entered from MemberIDTextBox
		String^ memberIDTextBox = MemberIDTextBox->Text;

		// Convert System String to String
		MarshalString(memberIDTextBox, memberIDConvertToString);

		// Read AccountDB file
		std::ifstream myfile("AccountDB.txt");

		std::string line;
		char charLine[256];
		char* accountString;

		std::string account[999][6];

		// For counting accounts
		int accountCount = 0;
		int maxAccountCount = 0;

		// For counting account columns
		int accountColumnCount = 0;

		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				// Change line to const char *, then use strcpy to use as charLine variable.
				strcpy(charLine, line.c_str());

				// Strtok charLine to separate the entire string with ':' as the delimiter
				accountString = strtok(charLine, ":");
				while (accountString != NULL)
				{
					// Save data as Member / Admin Object
					account[accountCount][accountColumnCount] = accountString;

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

			// Loop through accounts
			for (int accountCount = 0; accountCount < maxAccountCount; accountCount++) {

				// Check for Admin
				if (memberIDConvertToString == account[accountCount][0] && atoi(account[accountCount][3].c_str()) == 0) {

					// Alert user this is an Admin
					MemberNotFoundTitle->Text = "This is an Admin ID!";

				}
				// Check for Member
				else if (memberIDConvertToString == account[accountCount][0] && atoi(account[accountCount][3].c_str()) >= 1) {

					// Go into Member Form
					this->Hide();
					EditMemberView^ editMemberForm = gcnew EditMemberView(this, account[accountCount][0], account[accountCount][1], account[accountCount][2], account[accountCount][3], account[accountCount][4], account[accountCount][5], account[accountCount][6]);
					editMemberForm->Show();
					String^ retainMemberID = gcnew String(account[accountCount][0].c_str());
					editMemberForm->MemberID = retainMemberID;
				}
				else {

					// Tell user it's an invalid ID
					MemberNotFoundTitle->Text = "This is an invalid ID!";
				}
			}
		}
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
