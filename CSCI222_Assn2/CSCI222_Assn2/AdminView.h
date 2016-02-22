#include <string>
#include <cstring>

#include "CreateMemberView.h"
#include "EditMemberView.h"
#include "SearchMemberView.h"
#include "CreateFacilityView.h"
#include "EditFacilityView.h"
#include "SearchFacilityView.h"

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

	private: System::Windows::Forms::Label^  FacilityIDLabel;
	private: System::Windows::Forms::Button^  SearchFacilityButton;

	private: System::Windows::Forms::Button^  DeleteFacilityButton;

	private: System::Windows::Forms::Button^  CreateFacilityButton;
	private: System::Windows::Forms::TextBox^  FacilityIDTextBox;


	private: System::Windows::Forms::Button^  EditFacilityButton;
	private: System::Windows::Forms::Label^  FacilityNotFoundLabel;

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
			this->FacilityIDLabel = (gcnew System::Windows::Forms::Label());
			this->SearchFacilityButton = (gcnew System::Windows::Forms::Button());
			this->DeleteFacilityButton = (gcnew System::Windows::Forms::Button());
			this->CreateFacilityButton = (gcnew System::Windows::Forms::Button());
			this->FacilityIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->EditFacilityButton = (gcnew System::Windows::Forms::Button());
			this->FacilityNotFoundLabel = (gcnew System::Windows::Forms::Label());
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
			this->EditMemberButton->Location = System::Drawing::Point(199, 145);
			this->EditMemberButton->Name = L"EditMemberButton";
			this->EditMemberButton->Size = System::Drawing::Size(75, 23);
			this->EditMemberButton->TabIndex = 4;
			this->EditMemberButton->Text = L"Edit Member";
			this->EditMemberButton->UseVisualStyleBackColor = true;
			this->EditMemberButton->Click += gcnew System::EventHandler(this, &AdminView::EditMemberButton_Click);
			// 
			// MemberIDTextBox
			// 
			this->MemberIDTextBox->Location = System::Drawing::Point(93, 147);
			this->MemberIDTextBox->Name = L"MemberIDTextBox";
			this->MemberIDTextBox->Size = System::Drawing::Size(100, 20);
			this->MemberIDTextBox->TabIndex = 5;
			// 
			// CreateMemberButton
			// 
			this->CreateMemberButton->Location = System::Drawing::Point(35, 118);
			this->CreateMemberButton->Name = L"CreateMemberButton";
			this->CreateMemberButton->Size = System::Drawing::Size(91, 23);
			this->CreateMemberButton->TabIndex = 7;
			this->CreateMemberButton->Text = L"Create Member";
			this->CreateMemberButton->UseVisualStyleBackColor = true;
			this->CreateMemberButton->Click += gcnew System::EventHandler(this, &AdminView::CreateMemberButton_Click);
			// 
			// DeleteMemberButton
			// 
			this->DeleteMemberButton->Location = System::Drawing::Point(376, 145);
			this->DeleteMemberButton->Name = L"DeleteMemberButton";
			this->DeleteMemberButton->Size = System::Drawing::Size(91, 23);
			this->DeleteMemberButton->TabIndex = 8;
			this->DeleteMemberButton->Text = L"Delete Member";
			this->DeleteMemberButton->UseVisualStyleBackColor = true;
			this->DeleteMemberButton->Click += gcnew System::EventHandler(this, &AdminView::DeleteMemberButton_Click);
			// 
			// SearchMemberButton
			// 
			this->SearchMemberButton->Location = System::Drawing::Point(280, 145);
			this->SearchMemberButton->Name = L"SearchMemberButton";
			this->SearchMemberButton->Size = System::Drawing::Size(90, 23);
			this->SearchMemberButton->TabIndex = 9;
			this->SearchMemberButton->Text = L"Search Member";
			this->SearchMemberButton->UseVisualStyleBackColor = true;
			this->SearchMemberButton->Click += gcnew System::EventHandler(this, &AdminView::SearchMemberButton_Click);
			// 
			// MemberIDTitle
			// 
			this->MemberIDTitle->AutoSize = true;
			this->MemberIDTitle->Location = System::Drawing::Point(32, 150);
			this->MemberIDTitle->Name = L"MemberIDTitle";
			this->MemberIDTitle->Size = System::Drawing::Size(59, 13);
			this->MemberIDTitle->TabIndex = 10;
			this->MemberIDTitle->Text = L"MemberID:";
			// 
			// LogoutButton
			// 
			this->LogoutButton->Location = System::Drawing::Point(477, 68);
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
			this->MemberNotFoundTitle->Location = System::Drawing::Point(141, 123);
			this->MemberNotFoundTitle->Name = L"MemberNotFoundTitle";
			this->MemberNotFoundTitle->Size = System::Drawing::Size(0, 13);
			this->MemberNotFoundTitle->TabIndex = 12;
			// 
			// FacilityIDLabel
			// 
			this->FacilityIDLabel->AutoSize = true;
			this->FacilityIDLabel->Location = System::Drawing::Point(32, 214);
			this->FacilityIDLabel->Name = L"FacilityIDLabel";
			this->FacilityIDLabel->Size = System::Drawing::Size(53, 13);
			this->FacilityIDLabel->TabIndex = 18;
			this->FacilityIDLabel->Text = L"FacilityID:";
			// 
			// SearchFacilityButton
			// 
			this->SearchFacilityButton->Location = System::Drawing::Point(280, 209);
			this->SearchFacilityButton->Name = L"SearchFacilityButton";
			this->SearchFacilityButton->Size = System::Drawing::Size(90, 23);
			this->SearchFacilityButton->TabIndex = 17;
			this->SearchFacilityButton->Text = L"Search Facility";
			this->SearchFacilityButton->UseVisualStyleBackColor = true;
			this->SearchFacilityButton->Click += gcnew System::EventHandler(this, &AdminView::SearchFacilityButton_Click);
			// 
			// DeleteFacilityButton
			// 
			this->DeleteFacilityButton->Location = System::Drawing::Point(376, 209);
			this->DeleteFacilityButton->Name = L"DeleteFacilityButton";
			this->DeleteFacilityButton->Size = System::Drawing::Size(91, 23);
			this->DeleteFacilityButton->TabIndex = 16;
			this->DeleteFacilityButton->Text = L"Delete Facility";
			this->DeleteFacilityButton->UseVisualStyleBackColor = true;
			this->DeleteFacilityButton->Click += gcnew System::EventHandler(this, &AdminView::DeleteFacilityButton_Click);
			// 
			// CreateFacilityButton
			// 
			this->CreateFacilityButton->Location = System::Drawing::Point(35, 182);
			this->CreateFacilityButton->Name = L"CreateFacilityButton";
			this->CreateFacilityButton->Size = System::Drawing::Size(91, 23);
			this->CreateFacilityButton->TabIndex = 15;
			this->CreateFacilityButton->Text = L"Create Facility";
			this->CreateFacilityButton->UseVisualStyleBackColor = true;
			this->CreateFacilityButton->Click += gcnew System::EventHandler(this, &AdminView::CreateFacilityButton_Click);
			// 
			// FacilityIDTextBox
			// 
			this->FacilityIDTextBox->Location = System::Drawing::Point(93, 211);
			this->FacilityIDTextBox->Name = L"FacilityIDTextBox";
			this->FacilityIDTextBox->Size = System::Drawing::Size(100, 20);
			this->FacilityIDTextBox->TabIndex = 14;
			// 
			// EditFacilityButton
			// 
			this->EditFacilityButton->Location = System::Drawing::Point(199, 209);
			this->EditFacilityButton->Name = L"EditFacilityButton";
			this->EditFacilityButton->Size = System::Drawing::Size(75, 23);
			this->EditFacilityButton->TabIndex = 13;
			this->EditFacilityButton->Text = L"Edit Facility";
			this->EditFacilityButton->UseVisualStyleBackColor = true;
			this->EditFacilityButton->Click += gcnew System::EventHandler(this, &AdminView::EditFacilityButton_Click);
			// 
			// FacilityNotFoundLabel
			// 
			this->FacilityNotFoundLabel->AutoSize = true;
			this->FacilityNotFoundLabel->Location = System::Drawing::Point(141, 187);
			this->FacilityNotFoundLabel->Name = L"FacilityNotFoundLabel";
			this->FacilityNotFoundLabel->Size = System::Drawing::Size(0, 13);
			this->FacilityNotFoundLabel->TabIndex = 19;
			// 
			// AdminView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 261);
			this->Controls->Add(this->FacilityNotFoundLabel);
			this->Controls->Add(this->FacilityIDLabel);
			this->Controls->Add(this->SearchFacilityButton);
			this->Controls->Add(this->DeleteFacilityButton);
			this->Controls->Add(this->CreateFacilityButton);
			this->Controls->Add(this->FacilityIDTextBox);
			this->Controls->Add(this->EditFacilityButton);
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

		std::string account[999][7];

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
					MemberNotFoundTitle->Text = "This is an invalid member ID!";
				}
			}
		}
	}

	
	private: System::Void SearchMemberButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
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

		std::string account[999][7];

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

					// Go into Search Member Form
					this->Hide();
					SearchMemberView^ searchMemberForm = gcnew SearchMemberView(this, account[accountCount][0], account[accountCount][1], account[accountCount][2], account[accountCount][3], account[accountCount][4], account[accountCount][5], account[accountCount][6]);
					searchMemberForm->Show();
				}
				else {

					// Tell user it's an invalid ID
					MemberNotFoundTitle->Text = "This is an invalid member ID!";
				}
			}
		}
	}
	private: System::Void DeleteMemberButton_Click(System::Object^  sender, System::EventArgs^  e) {
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

		std::string account[999][7];

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

					// Set Member to "invalid" for further handling
					account[accountCount][0] = "invalid";
					account[accountCount][1] = "invalid";
					account[accountCount][2] = "invalid";
					account[accountCount][3] = "invalid";
					account[accountCount][4] = "invalid";
					account[accountCount][5] = "invalid";
					account[accountCount][6] = "invalid";
				}
				else {
					// Tell user it's an invalid ID
					MemberNotFoundTitle->Text = "This is an invalid member ID!";
				}

				// Overwrite AccountDB.txt
				std::ofstream overwriteFile("AccountDB.txt");
				if (overwriteFile.is_open()) {
					// Loop through accounts for file output
					for (int accountCount = 0; accountCount < maxAccountCount; accountCount++) {
						// Loop through account columns as well
						for (int accountColumnCount = 0; accountColumnCount < 7; accountColumnCount++) {
							if (accountColumnCount <= 5 && account[accountCount][accountColumnCount] != "invalid") {
								overwriteFile << account[accountCount][accountColumnCount] << ":";
							}
							else if (accountColumnCount == 6 && account[accountCount][accountColumnCount] != "invalid") {
								overwriteFile << account[accountCount][accountColumnCount] << "\n";
							}
						}
					}
				}
				overwriteFile.close();

				// Alert user member removed
				MemberNotFoundTitle->Text = "Member removed!";
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
	private: System::Void CreateFacilityButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Go into Create Facility View
		this->Hide();
		CreateFacilityView^ createFacilityForm = gcnew CreateFacilityView(this);
		createFacilityForm->Show();
	}
	private: System::Void EditFacilityButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Declare strings for conversion
		std::string facilityIDConvertToString;

		// Get ID entered from FacilityIDTextBox
		String^ facilityIDTextBox = FacilityIDTextBox->Text;

		// Convert System String to String
		MarshalString(facilityIDTextBox, facilityIDConvertToString);

		// Read FacilityDB file
		std::ifstream myfile("FacilityDB.txt");

		std::string line;
		char charLine[256];
		char* facilityString;

		std::string facility[999][4];

		// For counting facilities
		int facilityCount = 0;
		int maxFacilityCount = 0;

		// For counting facility columns
		int facilityColumnCount = 0;

		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				// Change line to const char *, then use strcpy to use as charLine variable.
				strcpy(charLine, line.c_str());

				// Strtok charLine to separate the entire string with ':' as the delimiter
				facilityString = strtok(charLine, ":");
				while (facilityString != NULL)
				{
					// Save data as Facility Object
					facility[facilityCount][facilityColumnCount] = facilityString;

					// Only 4 columns
					if (facilityColumnCount >= 3) {
						// Reset count
						facilityColumnCount = 0;
					}
					else { facilityColumnCount++; }

					facilityString = strtok(NULL, ":");
				}

				facilityCount++;
			}
			myfile.close();

			// Store total facility counts into maxFacilityCount variable
			maxFacilityCount = facilityCount;

			// Loop through facilities
			for (int facilityCount = 0; facilityCount < maxFacilityCount; facilityCount++) {

				// Check for Facility via FacilityID
				if (facilityIDConvertToString == facility[facilityCount][0]) {

					// Go into Member Form
					this->Hide();
					EditFacilityView^ editFacilityForm = gcnew EditFacilityView(this, facility[facilityCount][0], facility[facilityCount][1], facility[facilityCount][2], facility[facilityCount][3]);
					editFacilityForm->Show();
					String^ retainFacilityID = gcnew String(facility[facilityCount][0].c_str());
					editFacilityForm->FacilityID = retainFacilityID;
				}
				else {

					// Tell user it's an invalid ID
					FacilityNotFoundLabel->Text = "This is an invalid facility ID!";
				}
			}
		}
	}
	private: System::Void SearchFacilityButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Declare strings for conversion
		std::string facilityIDConvertToString;

		// Get ID entered from FacilityIDTextBox
		String^ facilityIDTextBox = FacilityIDTextBox->Text;

		// Convert System String to String
		MarshalString(facilityIDTextBox, facilityIDConvertToString);

		// Read FacilityDB file
		std::ifstream myfile("FacilityDB.txt");

		std::string line;
		char charLine[256];
		char* facilityString;

		std::string facility[999][4];

		// For counting facilities
		int facilityCount = 0;
		int maxFacilityCount = 0;

		// For counting facility columns
		int facilityColumnCount = 0;

		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				// Change line to const char *, then use strcpy to use as charLine variable.
				strcpy(charLine, line.c_str());

				// Strtok charLine to separate the entire string with ':' as the delimiter
				facilityString = strtok(charLine, ":");
				while (facilityString != NULL)
				{
					// Save data as Facility Object
					facility[facilityCount][facilityColumnCount] = facilityString;

					// Only 4 columns
					if (facilityColumnCount >= 3) {
						// Reset count
						facilityColumnCount = 0;
					}
					else { facilityColumnCount++; }

					facilityString = strtok(NULL, ":");
				}

				facilityCount++;
			}
			myfile.close();

			// Store total facility counts into maxFacilityCount variable
			maxFacilityCount = facilityCount;

			// Loop through facilities
			for (int facilityCount = 0; facilityCount < maxFacilityCount; facilityCount++) {

				// Check for Facility via FacilityID
				if (facilityIDConvertToString == facility[facilityCount][0]) {

					// Go into Member Form
					this->Hide();
					SearchFacilityView^ searchFacilityForm = gcnew SearchFacilityView(this, facility[facilityCount][0], facility[facilityCount][1], facility[facilityCount][2], facility[facilityCount][3]);
					searchFacilityForm->Show();
					String^ retainFacilityID = gcnew String(facility[facilityCount][0].c_str());
					searchFacilityForm->FacilityID = retainFacilityID;
				}
				else {

					// Tell user it's an invalid ID
					FacilityNotFoundLabel->Text = "This is an invalid facility ID!";
				}
			}
		}
	}
	private: System::Void DeleteFacilityButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Declare strings for conversion
		std::string facilityIDConvertToString;

		// Get ID entered from MemberIDTextBox
		String^ facilityIDTextBox = FacilityIDTextBox->Text;

		// Convert System String to String
		MarshalString(facilityIDTextBox, facilityIDConvertToString);

		// Read FacilityDB file
		std::ifstream myfile("FacilityDB.txt");

		std::string line;
		char charLine[256];
		char* facilityString;

		std::string facility[999][4];

		// For counting facilities
		int facilityCount = 0;
		int maxFacilityCount = 0;

		// For counting facility columns
		int facilityColumnCount = 0;

		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				// Change line to const char *, then use strcpy to use as charLine variable.
				strcpy(charLine, line.c_str());

				// Strtok charLine to separate the entire string with ':' as the delimiter
				facilityString = strtok(charLine, ":");
				while (facilityString != NULL)
				{
					// Save data as Facility Object
					facility[facilityCount][facilityColumnCount] = facilityString;

					// Only 4 columns
					if (facilityColumnCount >= 3) {
						// Reset count
						facilityColumnCount = 0;
					}
					else { facilityColumnCount++; }

					facilityString = strtok(NULL, ":");
				}

				facilityCount++;
			}
			myfile.close();

			// Store total facility counts into maxFacilityCount variable
			maxFacilityCount = facilityCount;

			// Loop through facility
			for (int facilityCount = 0; facilityCount < maxFacilityCount; facilityCount++) {

				// Check for Facility via FacilityID
				if (facilityIDConvertToString == facility[facilityCount][0]) {

					// Set Facility to "invalid" for further handling
					facility[facilityCount][0] = "invalid";
					facility[facilityCount][1] = "invalid";
					facility[facilityCount][2] = "invalid";
					facility[facilityCount][3] = "invalid";
				}
				else {
					// Tell user it's an invalid ID
					FacilityNotFoundLabel->Text = "This is an invalid facility ID!";
				}
				
				// Overwrite FacilityDB.txt
				std::ofstream overwriteFile("FacilityDB.txt");
				if (overwriteFile.is_open()) {
					// Loop through facilities for file output
					for (int facilityCount = 0; facilityCount < maxFacilityCount; facilityCount++) {
						// Loop through facility columns as well
						for (int facilityColumnCount = 0; facilityColumnCount < 4; facilityColumnCount++) {
							if (facilityColumnCount <= 2 && facility[facilityCount][facilityColumnCount] != "invalid") {
								overwriteFile << facility[facilityCount][facilityColumnCount] << ":";
							}
							else if (facilityColumnCount == 3 && facility[facilityCount][facilityColumnCount] != "invalid") {
								overwriteFile << facility[facilityCount][facilityColumnCount] << "\n";
							}
						}
					}
				}
				overwriteFile.close();

				// Alert user member removed
				FacilityNotFoundLabel->Text = "Facility removed!";
			}
		}
	}
};
}
