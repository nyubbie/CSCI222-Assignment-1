#include <string>
#include <cstring>
#include <fstream>

#pragma once

namespace CSCI222_Assn2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditMemberView
	/// </summary>
	public ref class EditMemberView : public System::Windows::Forms::Form
	{
	public:
		EditMemberView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		EditMemberView(System::Windows::Forms::Form^ editMemberView, std::string memberID, std::string memberUsername, std::string memberPassword, std::string memberRanking, std::string memberName, std::string memberDOB, std::string memberAddress)
		{
			adminForm = editMemberView;

			InitializeComponent();

			String^ s_memberID = gcnew String(memberID.c_str());
			MemberIDTextBox->Text = s_memberID;
			String^ s_memberUsername = gcnew String(memberUsername.c_str());
			UsernameTextBox->Text = s_memberUsername;
			String^ s_memberPassword = gcnew String(memberPassword.c_str());
			PasswordTextBox->Text = s_memberPassword;
			String^ s_memberName = gcnew String(memberName.c_str());
			NameTextBox->Text = s_memberName;
			String^ s_memberRanking = gcnew String(memberRanking.c_str());
			RankingTextBox->Text = s_memberRanking;
			String^ s_memberAddress = gcnew String(memberAddress.c_str());
			AddressTextBox->Text = s_memberAddress;
			String^ s_memberDOB = gcnew String(memberDOB.c_str());
			DOBTextBox->Text = s_memberDOB;
		}
	private: System::Windows::Forms::Button^  EditButton;
	private: System::Windows::Forms::Button^  CancelButton;
	private: System::Windows::Forms::Label^  EditingMemberTitle;
	private: System::Windows::Forms::Label^  EditingMemberLabel;
	private: System::Windows::Forms::Label^  MemberIDTitle;
	private: System::Windows::Forms::Label^  PasswordTitle;
	private: System::Windows::Forms::TextBox^  MemberIDTextBox;
	private: System::Windows::Forms::TextBox^  UsernameTextBox;
	private: System::Windows::Forms::Label^  RankingTitle;


	private: System::Windows::Forms::Label^  UsernameTitle;
	private: System::Windows::Forms::TextBox^  PasswordTextBox;
	private: System::Windows::Forms::Label^  NameTitle;

	private: System::Windows::Forms::Label^  DOBTitle;

	private: System::Windows::Forms::TextBox^  NameTextBox;
	private: System::Windows::Forms::TextBox^  RankingTextBox;
	private: System::Windows::Forms::TextBox^  DOBTextBox;
	private: System::Windows::Forms::Label^  AddressTitle;
	private: System::Windows::Forms::TextBox^  AddressTextBox;

	private: System::Windows::Forms::Form ^ adminForm;

	public: String^ MemberID;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditMemberView()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->EditButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->EditingMemberTitle = (gcnew System::Windows::Forms::Label());
			this->EditingMemberLabel = (gcnew System::Windows::Forms::Label());
			this->MemberIDTitle = (gcnew System::Windows::Forms::Label());
			this->PasswordTitle = (gcnew System::Windows::Forms::Label());
			this->MemberIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->UsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RankingTitle = (gcnew System::Windows::Forms::Label());
			this->UsernameTitle = (gcnew System::Windows::Forms::Label());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NameTitle = (gcnew System::Windows::Forms::Label());
			this->DOBTitle = (gcnew System::Windows::Forms::Label());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RankingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DOBTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddressTitle = (gcnew System::Windows::Forms::Label());
			this->AddressTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// EditButton
			// 
			this->EditButton->Location = System::Drawing::Point(60, 214);
			this->EditButton->Name = L"EditButton";
			this->EditButton->Size = System::Drawing::Size(75, 23);
			this->EditButton->TabIndex = 0;
			this->EditButton->Text = L"Edit";
			this->EditButton->UseVisualStyleBackColor = true;
			this->EditButton->Click += gcnew System::EventHandler(this, &EditMemberView::EditButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(142, 214);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(75, 23);
			this->CancelButton->TabIndex = 1;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &EditMemberView::CancelButton_Click);
			// 
			// EditingMemberTitle
			// 
			this->EditingMemberTitle->AutoSize = true;
			this->EditingMemberTitle->Location = System::Drawing::Point(52, 33);
			this->EditingMemberTitle->Name = L"EditingMemberTitle";
			this->EditingMemberTitle->Size = System::Drawing::Size(83, 13);
			this->EditingMemberTitle->TabIndex = 2;
			this->EditingMemberTitle->Text = L"Editing Member:";
			// 
			// EditingMemberLabel
			// 
			this->EditingMemberLabel->AutoSize = true;
			this->EditingMemberLabel->Location = System::Drawing::Point(142, 33);
			this->EditingMemberLabel->Name = L"EditingMemberLabel";
			this->EditingMemberLabel->Size = System::Drawing::Size(23, 13);
			this->EditingMemberLabel->TabIndex = 3;
			this->EditingMemberLabel->Text = L"null";
			// 
			// MemberIDTitle
			// 
			this->MemberIDTitle->AutoSize = true;
			this->MemberIDTitle->Location = System::Drawing::Point(37, 73);
			this->MemberIDTitle->Name = L"MemberIDTitle";
			this->MemberIDTitle->Size = System::Drawing::Size(59, 13);
			this->MemberIDTitle->TabIndex = 4;
			this->MemberIDTitle->Text = L"MemberID:";
			// 
			// PasswordTitle
			// 
			this->PasswordTitle->AutoSize = true;
			this->PasswordTitle->Location = System::Drawing::Point(37, 140);
			this->PasswordTitle->Name = L"PasswordTitle";
			this->PasswordTitle->Size = System::Drawing::Size(59, 13);
			this->PasswordTitle->TabIndex = 6;
			this->PasswordTitle->Text = L"Password: ";
			// 
			// MemberIDTextBox
			// 
			this->MemberIDTextBox->Location = System::Drawing::Point(102, 70);
			this->MemberIDTextBox->Name = L"MemberIDTextBox";
			this->MemberIDTextBox->Size = System::Drawing::Size(100, 20);
			this->MemberIDTextBox->TabIndex = 7;
			// 
			// UsernameTextBox
			// 
			this->UsernameTextBox->Location = System::Drawing::Point(102, 101);
			this->UsernameTextBox->Name = L"UsernameTextBox";
			this->UsernameTextBox->Size = System::Drawing::Size(100, 20);
			this->UsernameTextBox->TabIndex = 8;
			// 
			// RankingTitle
			// 
			this->RankingTitle->AutoSize = true;
			this->RankingTitle->Location = System::Drawing::Point(237, 108);
			this->RankingTitle->Name = L"RankingTitle";
			this->RankingTitle->Size = System::Drawing::Size(50, 13);
			this->RankingTitle->TabIndex = 9;
			this->RankingTitle->Text = L"Ranking:";
			// 
			// UsernameTitle
			// 
			this->UsernameTitle->AutoSize = true;
			this->UsernameTitle->Location = System::Drawing::Point(37, 104);
			this->UsernameTitle->Name = L"UsernameTitle";
			this->UsernameTitle->Size = System::Drawing::Size(58, 13);
			this->UsernameTitle->TabIndex = 10;
			this->UsernameTitle->Text = L"Username:";
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Location = System::Drawing::Point(102, 137);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(100, 20);
			this->PasswordTextBox->TabIndex = 11;
			// 
			// NameTitle
			// 
			this->NameTitle->AutoSize = true;
			this->NameTitle->Location = System::Drawing::Point(237, 73);
			this->NameTitle->Name = L"NameTitle";
			this->NameTitle->Size = System::Drawing::Size(38, 13);
			this->NameTitle->TabIndex = 12;
			this->NameTitle->Text = L"Name:";
			// 
			// DOBTitle
			// 
			this->DOBTitle->AutoSize = true;
			this->DOBTitle->Location = System::Drawing::Point(237, 140);
			this->DOBTitle->Name = L"DOBTitle";
			this->DOBTitle->Size = System::Drawing::Size(69, 13);
			this->DOBTitle->TabIndex = 13;
			this->DOBTitle->Text = L"Date of Birth:";
			// 
			// NameTextBox
			// 
			this->NameTextBox->Location = System::Drawing::Point(317, 70);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(100, 20);
			this->NameTextBox->TabIndex = 14;
			// 
			// RankingTextBox
			// 
			this->RankingTextBox->Location = System::Drawing::Point(317, 104);
			this->RankingTextBox->Name = L"RankingTextBox";
			this->RankingTextBox->Size = System::Drawing::Size(100, 20);
			this->RankingTextBox->TabIndex = 15;
			// 
			// DOBTextBox
			// 
			this->DOBTextBox->Location = System::Drawing::Point(317, 137);
			this->DOBTextBox->Name = L"DOBTextBox";
			this->DOBTextBox->Size = System::Drawing::Size(100, 20);
			this->DOBTextBox->TabIndex = 16;
			// 
			// AddressTitle
			// 
			this->AddressTitle->AutoSize = true;
			this->AddressTitle->Location = System::Drawing::Point(37, 177);
			this->AddressTitle->Name = L"AddressTitle";
			this->AddressTitle->Size = System::Drawing::Size(48, 13);
			this->AddressTitle->TabIndex = 17;
			this->AddressTitle->Text = L"Address:";
			// 
			// AddressTextBox
			// 
			this->AddressTextBox->Location = System::Drawing::Point(102, 174);
			this->AddressTextBox->Name = L"AddressTextBox";
			this->AddressTextBox->Size = System::Drawing::Size(315, 20);
			this->AddressTextBox->TabIndex = 18;
			// 
			// EditMemberView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 261);
			this->Controls->Add(this->AddressTextBox);
			this->Controls->Add(this->AddressTitle);
			this->Controls->Add(this->DOBTextBox);
			this->Controls->Add(this->RankingTextBox);
			this->Controls->Add(this->NameTextBox);
			this->Controls->Add(this->DOBTitle);
			this->Controls->Add(this->NameTitle);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->UsernameTitle);
			this->Controls->Add(this->RankingTitle);
			this->Controls->Add(this->UsernameTextBox);
			this->Controls->Add(this->MemberIDTextBox);
			this->Controls->Add(this->PasswordTitle);
			this->Controls->Add(this->MemberIDTitle);
			this->Controls->Add(this->EditingMemberLabel);
			this->Controls->Add(this->EditingMemberTitle);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->EditButton);
			this->Name = L"EditMemberView";
			this->Text = L"EditMemberView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Go back to Admin View
		adminForm->Show();
		this->Close();
	}
	private: System::Void EditButton_Click(System::Object^  sender, System::EventArgs^  e) {

		// Delete original string first
		// Read AccountDB file
		std::ifstream myfile("AccountDB.txt");
		std::string line;

		// Declare strings for conversion
		std::string memberIDConvertToString;
		std::string usernameConvertToString;
		std::string passwordConvertToString;
		std::string nameConvertToString;
		std::string rankingConvertToString;
		std::string dobConvertToString;
		std::string addressConvertToString;

		// Get ID entered from MemberIDTextBox
		String^ memberIDTextBox = MemberIDTextBox->Text;
		String^ usernameTextBox = UsernameTextBox->Text;
		String^ passwordTextBox = PasswordTextBox->Text;
		String^ nameTextBox = NameTextBox->Text;
		String^ rankingTextBox = RankingTextBox->Text;
		String^ dobTextBox = DOBTextBox->Text;
		String^ addressTextBox = AddressTextBox->Text;

		// Convert System String to String
		MarshalString(memberIDTextBox, memberIDConvertToString);
		MarshalString(usernameTextBox, usernameConvertToString);
		MarshalString(passwordTextBox, passwordConvertToString);
		MarshalString(nameTextBox, nameConvertToString);
		MarshalString(rankingTextBox, rankingConvertToString);
		MarshalString(dobTextBox, dobConvertToString);
		MarshalString(addressTextBox, addressConvertToString);

		EditingMemberLabel->Text = MemberID;
		std::string retainMemberID;
		MarshalString(MemberID, retainMemberID);

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

				// Check for Member, no Admin will exist here
				if (retainMemberID == account[accountCount][0] && atoi(account[accountCount][3].c_str()) >= 1) {

					// Insert new values into 
					account[accountCount][0] = memberIDConvertToString;
					account[accountCount][1] = usernameConvertToString;
					account[accountCount][2] = passwordConvertToString;
					account[accountCount][3] = rankingConvertToString;
					account[accountCount][4] = nameConvertToString;
					account[accountCount][5] = dobConvertToString;
					account[accountCount][6] = addressConvertToString;
				}
				else {
					// Do Nothing
				}
			}

			// Needs fixing (LEFT OFF)
			std::ofstream overwriteFile("AccountDB.txt");
			if (overwriteFile.is_open()) {
				// Loop through accounts for file output
				for (int accountCount = 0; accountCount < maxAccountCount; accountCount++) {
					// Loop through account columns as well
					for (int accountColumnCount = 0; accountColumnCount < 7; accountColumnCount++) {
						if (accountColumnCount <= 5) {
							overwriteFile << account[accountCount][accountColumnCount] << ":";
						}
						else if (accountColumnCount == 6) {
							overwriteFile << account[accountCount][accountColumnCount] << "\n";
						}
					}
				}
			}

			// Go back to Admin View
			adminForm->Show();
			this->Close();
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