#include <string>
#include <cstring>

#include "MemberBookingView.h"

#pragma once

namespace CSCI222_Assn2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MemberView
	/// </summary>
	public ref class MemberView : public System::Windows::Forms::Form
	{
	public:
		MemberView(void)
		{
			InitializeComponent();
			// Do something
			//label1->Text = readMemberFile();
			//
			//TODO: Add the constructor code here
			//
		}
	// This retains the previous menu (LoginView)
	public:
		MemberView(System::Windows::Forms::Form^ loginView, std::string memberID, std::string memberUsername, std::string memberPassword, std::string memberRanking, std::string memberName, std::string memberDOB, std::string memberAddress)
		{
			mainForm = loginView;

			InitializeComponent();

			String^ s_memberID = gcnew String(memberID.c_str());
			MemberIDLabel->Text = s_memberID;
			String^ s_memberRanking = gcnew String(memberRanking.c_str());
			MemberRankingLabel->Text = s_memberRanking;
			String^ s_memberName = gcnew String(memberName.c_str());
			NameLabel->Text = s_memberName;
			String^ s_memberAddress = gcnew String(memberAddress.c_str());
			AddressLabel->Text = s_memberAddress;
			String^ s_memberDOB = gcnew String(memberDOB.c_str());
			DOBLabel->Text = s_memberDOB;
		}
	private: System::Windows::Forms::Button^  MakeBookingButton;

	private: System::Windows::Forms::Form ^ mainForm;

	public: String^ MemberID;
	public: String^ MemberUsername;
	public: String^ MemberPassword;
	public: String^ MemberRanking;
	public: String^ MemberName;
	public: String^ MemberDOB;
	private: System::Windows::Forms::Label^  MemberRankingTitle;
	private: System::Windows::Forms::Label^  MemberRankingLabel;

	public:
	public: String^ MemberAddress;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MemberView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  MemberPageTitle;
	private: System::Windows::Forms::Label^  MemberNameTitle;
	protected:

	protected:


	private: System::Windows::Forms::Label^  NameLabel;
	private: System::Windows::Forms::Label^  MemberAddressTitle;


	private: System::Windows::Forms::Label^  AddressLabel;
	private: System::Windows::Forms::Label^  DOBTitle;


	private: System::Windows::Forms::Label^  DOBLabel;
	private: System::Windows::Forms::Label^  MemberIDTitle;


	private: System::Windows::Forms::Label^  MemberIDLabel;




	private: System::Windows::Forms::Button^  memberLogout;


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
			this->MemberPageTitle = (gcnew System::Windows::Forms::Label());
			this->MemberNameTitle = (gcnew System::Windows::Forms::Label());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->MemberAddressTitle = (gcnew System::Windows::Forms::Label());
			this->AddressLabel = (gcnew System::Windows::Forms::Label());
			this->DOBTitle = (gcnew System::Windows::Forms::Label());
			this->DOBLabel = (gcnew System::Windows::Forms::Label());
			this->MemberIDTitle = (gcnew System::Windows::Forms::Label());
			this->MemberIDLabel = (gcnew System::Windows::Forms::Label());
			this->memberLogout = (gcnew System::Windows::Forms::Button());
			this->MakeBookingButton = (gcnew System::Windows::Forms::Button());
			this->MemberRankingTitle = (gcnew System::Windows::Forms::Label());
			this->MemberRankingLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// MemberPageTitle
			// 
			this->MemberPageTitle->AutoSize = true;
			this->MemberPageTitle->Location = System::Drawing::Point(190, 31);
			this->MemberPageTitle->Name = L"MemberPageTitle";
			this->MemberPageTitle->Size = System::Drawing::Size(267, 13);
			this->MemberPageTitle->TabIndex = 0;
			this->MemberPageTitle->Text = L"Country Club Facilities Booking System (Member Page) ";
			// 
			// MemberNameTitle
			// 
			this->MemberNameTitle->AutoSize = true;
			this->MemberNameTitle->Location = System::Drawing::Point(345, 85);
			this->MemberNameTitle->Name = L"MemberNameTitle";
			this->MemberNameTitle->Size = System::Drawing::Size(38, 13);
			this->MemberNameTitle->TabIndex = 1;
			this->MemberNameTitle->Text = L"Name:";
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Location = System::Drawing::Point(422, 85);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(23, 13);
			this->NameLabel->TabIndex = 2;
			this->NameLabel->Text = L"null";
			// 
			// MemberAddressTitle
			// 
			this->MemberAddressTitle->AutoSize = true;
			this->MemberAddressTitle->Location = System::Drawing::Point(32, 123);
			this->MemberAddressTitle->Name = L"MemberAddressTitle";
			this->MemberAddressTitle->Size = System::Drawing::Size(48, 13);
			this->MemberAddressTitle->TabIndex = 3;
			this->MemberAddressTitle->Text = L"Address:";
			// 
			// AddressLabel
			// 
			this->AddressLabel->AutoSize = true;
			this->AddressLabel->Location = System::Drawing::Point(136, 123);
			this->AddressLabel->Name = L"AddressLabel";
			this->AddressLabel->Size = System::Drawing::Size(23, 13);
			this->AddressLabel->TabIndex = 4;
			this->AddressLabel->Text = L"null";
			// 
			// DOBTitle
			// 
			this->DOBTitle->AutoSize = true;
			this->DOBTitle->Location = System::Drawing::Point(32, 161);
			this->DOBTitle->Name = L"DOBTitle";
			this->DOBTitle->Size = System::Drawing::Size(69, 13);
			this->DOBTitle->TabIndex = 5;
			this->DOBTitle->Text = L"Date of Birth:";
			this->DOBTitle->UseMnemonic = false;
			// 
			// DOBLabel
			// 
			this->DOBLabel->AutoSize = true;
			this->DOBLabel->Location = System::Drawing::Point(136, 161);
			this->DOBLabel->Name = L"DOBLabel";
			this->DOBLabel->Size = System::Drawing::Size(23, 13);
			this->DOBLabel->TabIndex = 6;
			this->DOBLabel->Text = L"null";
			// 
			// MemberIDTitle
			// 
			this->MemberIDTitle->AutoSize = true;
			this->MemberIDTitle->Location = System::Drawing::Point(32, 85);
			this->MemberIDTitle->Name = L"MemberIDTitle";
			this->MemberIDTitle->Size = System::Drawing::Size(59, 13);
			this->MemberIDTitle->TabIndex = 7;
			this->MemberIDTitle->Text = L"MemberID:";
			// 
			// MemberIDLabel
			// 
			this->MemberIDLabel->AutoSize = true;
			this->MemberIDLabel->Location = System::Drawing::Point(136, 85);
			this->MemberIDLabel->Name = L"MemberIDLabel";
			this->MemberIDLabel->Size = System::Drawing::Size(23, 13);
			this->MemberIDLabel->TabIndex = 8;
			this->MemberIDLabel->Text = L"null";
			// 
			// memberLogout
			// 
			this->memberLogout->Location = System::Drawing::Point(514, 197);
			this->memberLogout->Name = L"memberLogout";
			this->memberLogout->Size = System::Drawing::Size(75, 23);
			this->memberLogout->TabIndex = 12;
			this->memberLogout->Text = L"Logout";
			this->memberLogout->UseVisualStyleBackColor = true;
			this->memberLogout->Click += gcnew System::EventHandler(this, &MemberView::memberLogout_Click);
			// 
			// MakeBookingButton
			// 
			this->MakeBookingButton->Location = System::Drawing::Point(348, 197);
			this->MakeBookingButton->Name = L"MakeBookingButton";
			this->MakeBookingButton->Size = System::Drawing::Size(126, 23);
			this->MakeBookingButton->TabIndex = 13;
			this->MakeBookingButton->Text = L"Make Booking";
			this->MakeBookingButton->UseVisualStyleBackColor = true;
			this->MakeBookingButton->Click += gcnew System::EventHandler(this, &MemberView::MakeBookingButton_Click);
			// 
			// MemberRankingTitle
			// 
			this->MemberRankingTitle->AutoSize = true;
			this->MemberRankingTitle->Location = System::Drawing::Point(345, 118);
			this->MemberRankingTitle->Name = L"MemberRankingTitle";
			this->MemberRankingTitle->Size = System::Drawing::Size(50, 13);
			this->MemberRankingTitle->TabIndex = 14;
			this->MemberRankingTitle->Text = L"Ranking:";
			// 
			// MemberRankingLabel
			// 
			this->MemberRankingLabel->AutoSize = true;
			this->MemberRankingLabel->Location = System::Drawing::Point(422, 118);
			this->MemberRankingLabel->Name = L"MemberRankingLabel";
			this->MemberRankingLabel->Size = System::Drawing::Size(23, 13);
			this->MemberRankingLabel->TabIndex = 15;
			this->MemberRankingLabel->Text = L"null";
			// 
			// MemberView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 261);
			this->Controls->Add(this->MemberRankingLabel);
			this->Controls->Add(this->MemberRankingTitle);
			this->Controls->Add(this->MakeBookingButton);
			this->Controls->Add(this->memberLogout);
			this->Controls->Add(this->MemberIDLabel);
			this->Controls->Add(this->MemberIDTitle);
			this->Controls->Add(this->DOBLabel);
			this->Controls->Add(this->DOBTitle);
			this->Controls->Add(this->AddressLabel);
			this->Controls->Add(this->MemberAddressTitle);
			this->Controls->Add(this->NameLabel);
			this->Controls->Add(this->MemberNameTitle);
			this->Controls->Add(this->MemberPageTitle);
			this->Name = L"MemberView";
			this->Text = L"MemberView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	private: System::Void editMemberName_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void editMemberAddress_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void editMemberDOB_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	// Go back to the Login Screen
	private: System::Void memberLogout_Click(System::Object^  sender, System::EventArgs^  e) {
		
		// Return to Login View
		mainForm->Show();
		this->Close();
	}
	private: System::Void MakeBookingButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		// Declare strings for conversion
		std::string memberIDConvertToString;
		std::string memberUsernameConvertToString;
		std::string memberPasswordConvertToString;
		std::string memberRankingConvertToString;
		std::string memberNameConvertToString;
		std::string memberDOBConvertToString;
		std::string memberAddressConvertToString;

		// Convert System String to String
		MarshalString(MemberID, memberIDConvertToString);
		MarshalString(MemberUsername, memberUsernameConvertToString);
		MarshalString(MemberPassword, memberPasswordConvertToString);
		MarshalString(MemberRanking, memberRankingConvertToString);
		MarshalString(MemberName, memberNameConvertToString);
		MarshalString(MemberDOB, memberDOBConvertToString);
		MarshalString(MemberAddress, memberAddressConvertToString);
				
		// Go into booking system
		this->Hide();
		MemberBookingView^ memberBookingForm = gcnew MemberBookingView(this, memberIDConvertToString, memberUsernameConvertToString, memberPasswordConvertToString, memberRankingConvertToString, memberNameConvertToString, memberDOBConvertToString, memberAddressConvertToString);
		memberBookingForm->Show();
		memberBookingForm->MemberID = MemberID;
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
