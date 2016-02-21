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
	/// Summary for SearchMemberView
	/// </summary>
	public ref class SearchMemberView : public System::Windows::Forms::Form
	{
	public:
		SearchMemberView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		SearchMemberView(System::Windows::Forms::Form^ searchMemberView, std::string memberID, std::string memberUsername, std::string memberPassword, std::string memberRanking, std::string memberName, std::string memberDOB, std::string memberAddress)
		{
			adminForm = searchMemberView;

			InitializeComponent();
			
			String^ s_memberID = gcnew String(memberID.c_str());
			MemberIDLabel->Text = s_memberID;
			EditingMemberLabel->Text = s_memberID;
			String^ s_memberUsername = gcnew String(memberUsername.c_str());
			UsernameLabel->Text = s_memberUsername;
			String^ s_memberPassword = gcnew String(memberPassword.c_str());
			PasswordLabel->Text = s_memberPassword;
			String^ s_memberName = gcnew String(memberName.c_str());
			NameLabel->Text = s_memberName;
			String^ s_memberRanking = gcnew String(memberRanking.c_str());
			RankingLabel->Text = s_memberRanking;
			String^ s_memberAddress = gcnew String(memberAddress.c_str());
			AddressLabel->Text = s_memberAddress;
			String^ s_memberDOB = gcnew String(memberDOB.c_str());
			DOBLabel->Text = s_memberDOB;
		}

	private: System::Windows::Forms::Button^  CancelButton;
	private: System::Windows::Forms::Label^  EditingMemberTitle;
	private: System::Windows::Forms::Label^  EditingMemberLabel;
	private: System::Windows::Forms::Label^  MemberIDTitle;
	private: System::Windows::Forms::Label^  PasswordTitle;


	private: System::Windows::Forms::Label^  RankingTitle;


	private: System::Windows::Forms::Label^  UsernameTitle;

	private: System::Windows::Forms::Label^  NameTitle;

	private: System::Windows::Forms::Label^  DOBTitle;




	private: System::Windows::Forms::Label^  AddressTitle;


	private: System::Windows::Forms::Form ^ adminForm;
	private: System::Windows::Forms::Label^  MemberIDLabel;
	private: System::Windows::Forms::Label^  UsernameLabel;
	private: System::Windows::Forms::Label^  PasswordLabel;
	private: System::Windows::Forms::Label^  AddressLabel;
	private: System::Windows::Forms::Label^  NameLabel;
	private: System::Windows::Forms::Label^  RankingLabel;
	private: System::Windows::Forms::Label^  DOBLabel;








	public: String^ MemberID;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchMemberView()
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
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->EditingMemberTitle = (gcnew System::Windows::Forms::Label());
			this->EditingMemberLabel = (gcnew System::Windows::Forms::Label());
			this->MemberIDTitle = (gcnew System::Windows::Forms::Label());
			this->PasswordTitle = (gcnew System::Windows::Forms::Label());
			this->RankingTitle = (gcnew System::Windows::Forms::Label());
			this->UsernameTitle = (gcnew System::Windows::Forms::Label());
			this->NameTitle = (gcnew System::Windows::Forms::Label());
			this->DOBTitle = (gcnew System::Windows::Forms::Label());
			this->AddressTitle = (gcnew System::Windows::Forms::Label());
			this->MemberIDLabel = (gcnew System::Windows::Forms::Label());
			this->UsernameLabel = (gcnew System::Windows::Forms::Label());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->AddressLabel = (gcnew System::Windows::Forms::Label());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->RankingLabel = (gcnew System::Windows::Forms::Label());
			this->DOBLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(55, 212);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(75, 23);
			this->CancelButton->TabIndex = 1;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &SearchMemberView::CancelButton_Click);
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
			// RankingTitle
			// 
			this->RankingTitle->AutoSize = true;
			this->RankingTitle->Location = System::Drawing::Point(237, 104);
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
			// AddressTitle
			// 
			this->AddressTitle->AutoSize = true;
			this->AddressTitle->Location = System::Drawing::Point(37, 177);
			this->AddressTitle->Name = L"AddressTitle";
			this->AddressTitle->Size = System::Drawing::Size(48, 13);
			this->AddressTitle->TabIndex = 17;
			this->AddressTitle->Text = L"Address:";
			// 
			// MemberIDLabel
			// 
			this->MemberIDLabel->AutoSize = true;
			this->MemberIDLabel->Location = System::Drawing::Point(102, 73);
			this->MemberIDLabel->Name = L"MemberIDLabel";
			this->MemberIDLabel->Size = System::Drawing::Size(23, 13);
			this->MemberIDLabel->TabIndex = 18;
			this->MemberIDLabel->Text = L"null";
			// 
			// UsernameLabel
			// 
			this->UsernameLabel->AutoSize = true;
			this->UsernameLabel->Location = System::Drawing::Point(101, 104);
			this->UsernameLabel->Name = L"UsernameLabel";
			this->UsernameLabel->Size = System::Drawing::Size(23, 13);
			this->UsernameLabel->TabIndex = 19;
			this->UsernameLabel->Text = L"null";
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->Location = System::Drawing::Point(101, 140);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(23, 13);
			this->PasswordLabel->TabIndex = 20;
			this->PasswordLabel->Text = L"null";
			// 
			// AddressLabel
			// 
			this->AddressLabel->AutoSize = true;
			this->AddressLabel->Location = System::Drawing::Point(101, 177);
			this->AddressLabel->Name = L"AddressLabel";
			this->AddressLabel->Size = System::Drawing::Size(23, 13);
			this->AddressLabel->TabIndex = 21;
			this->AddressLabel->Text = L"null";
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Location = System::Drawing::Point(281, 73);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(23, 13);
			this->NameLabel->TabIndex = 22;
			this->NameLabel->Text = L"null";
			// 
			// RankingLabel
			// 
			this->RankingLabel->AutoSize = true;
			this->RankingLabel->Location = System::Drawing::Point(293, 104);
			this->RankingLabel->Name = L"RankingLabel";
			this->RankingLabel->Size = System::Drawing::Size(23, 13);
			this->RankingLabel->TabIndex = 23;
			this->RankingLabel->Text = L"null";
			// 
			// DOBLabel
			// 
			this->DOBLabel->AutoSize = true;
			this->DOBLabel->Location = System::Drawing::Point(312, 140);
			this->DOBLabel->Name = L"DOBLabel";
			this->DOBLabel->Size = System::Drawing::Size(23, 13);
			this->DOBLabel->TabIndex = 24;
			this->DOBLabel->Text = L"null";
			// 
			// SearchMemberView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 261);
			this->Controls->Add(this->DOBLabel);
			this->Controls->Add(this->RankingLabel);
			this->Controls->Add(this->NameLabel);
			this->Controls->Add(this->AddressLabel);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->UsernameLabel);
			this->Controls->Add(this->MemberIDLabel);
			this->Controls->Add(this->AddressTitle);
			this->Controls->Add(this->DOBTitle);
			this->Controls->Add(this->NameTitle);
			this->Controls->Add(this->UsernameTitle);
			this->Controls->Add(this->RankingTitle);
			this->Controls->Add(this->PasswordTitle);
			this->Controls->Add(this->MemberIDTitle);
			this->Controls->Add(this->EditingMemberLabel);
			this->Controls->Add(this->EditingMemberTitle);
			this->Controls->Add(this->CancelButton);
			this->Name = L"SearchMemberView";
			this->Text = L"SearchMemberView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Go back to Admin View
		adminForm->Show();
		this->Close();
	}
};
}