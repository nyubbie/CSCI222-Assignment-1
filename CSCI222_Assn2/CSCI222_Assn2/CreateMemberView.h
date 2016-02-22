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
	/// Summary for CreateMemberView
	/// </summary>
	public ref class CreateMemberView : public System::Windows::Forms::Form
	{
	public:
		CreateMemberView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		CreateMemberView(System::Windows::Forms::Form^ createMemberView)
		{
			adminForm = createMemberView;

			InitializeComponent();

			/*String^ s_memberID = gcnew String(memberID.c_str());
			label9->Text = s_memberID;
			String^ s_memberName = gcnew String(memberName.c_str());
			label3->Text = s_memberName;
			String^ s_memberAddress = gcnew String(memberAddress.c_str());
			label5->Text = s_memberAddress;
			String^ s_memberDOB = gcnew String(memberDOB.c_str());
			label7->Text = s_memberDOB;*/
		}
	private: System::Windows::Forms::Button^  CreateButton;
	public:

	private: System::Windows::Forms::Button^  CancelButton;
	private: System::Windows::Forms::Label^  CreateMemberTitle;


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

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateMemberView()
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
			this->CreateButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->CreateMemberTitle = (gcnew System::Windows::Forms::Label());
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
			// CreateButton
			// 
			this->CreateButton->Location = System::Drawing::Point(60, 214);
			this->CreateButton->Name = L"CreateButton";
			this->CreateButton->Size = System::Drawing::Size(75, 23);
			this->CreateButton->TabIndex = 0;
			this->CreateButton->Text = L"Create";
			this->CreateButton->UseVisualStyleBackColor = true;
			this->CreateButton->Click += gcnew System::EventHandler(this, &CreateMemberView::CreateButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(142, 214);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(75, 23);
			this->CancelButton->TabIndex = 1;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &CreateMemberView::CancelButton_Click);
			// 
			// CreateMemberTitle
			// 
			this->CreateMemberTitle->AutoSize = true;
			this->CreateMemberTitle->Location = System::Drawing::Point(208, 29);
			this->CreateMemberTitle->Name = L"CreateMemberTitle";
			this->CreateMemberTitle->Size = System::Drawing::Size(79, 13);
			this->CreateMemberTitle->TabIndex = 2;
			this->CreateMemberTitle->Text = L"Create Member";
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
			// CreateMemberView
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
			this->Controls->Add(this->CreateMemberTitle);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->CreateButton);
			this->Name = L"CreateMemberView";
			this->Text = L"CreateMemberView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		adminForm->Show();
		this->Close();
	}
	private: System::Void CreateButton_Click(System::Object^  sender, System::EventArgs^  e) {

		// Declare strings for conversion
		std::string memberIDConvertToString;
		std::string usernameConvertToString;
		std::string passwordConvertToString;
		std::string rankingConvertToString;
		std::string nameConvertToString;
		std::string dobConvertToString;
		std::string addressConvertToString;

		// Get the information in all TextBoxes
		// member, username, password, name, ranking, DOB, address
		String^ memberIDTextBox = MemberIDTextBox->Text;
		String^ usernameTextBox = UsernameTextBox->Text;
		String^ passwordTextBox = PasswordTextBox->Text;
		String^ rankingTextBox = RankingTextBox->Text;
		String^ nameTextBox = NameTextBox->Text;
		String^ dobTextBox = DOBTextBox->Text;
		String^ addressTextBox = AddressTextBox->Text;

		// Convert System String to String
		MarshalString(memberIDTextBox, memberIDConvertToString);
		MarshalString(usernameTextBox, usernameConvertToString);
		MarshalString(passwordTextBox, passwordConvertToString);
		MarshalString(rankingTextBox, rankingConvertToString);
		MarshalString(nameTextBox, nameConvertToString);
		MarshalString(dobTextBox, dobConvertToString);
		MarshalString(addressTextBox, addressConvertToString);

		std::ofstream afile;
		afile.open("AccountDB.txt", std::ios::app);

		afile << "\n" << memberIDConvertToString << ":" << usernameConvertToString << ":" << passwordConvertToString << ":" << rankingConvertToString << ":" << nameConvertToString << ":" << dobConvertToString << ":" << addressConvertToString;

		afile.close();

		// Go back to Admin View
		adminForm->Show();
		this->Close();
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
