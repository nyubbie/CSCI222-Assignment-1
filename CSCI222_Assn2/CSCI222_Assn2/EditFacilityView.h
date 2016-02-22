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
	/// Summary for EditFacilityView
	/// </summary>
	public ref class EditFacilityView : public System::Windows::Forms::Form
	{
	public:
		EditFacilityView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		EditFacilityView(System::Windows::Forms::Form^ editFacilityView, std::string facilityID, std::string facilityName, std::string facilityPeakHour, std::string facilityOffPeakHour)
		{
			adminForm = editFacilityView;

			InitializeComponent();

			String^ s_facilityID = gcnew String(facilityID.c_str());
			FacilityIDTextBox->Text = s_facilityID;
			String^ s_facilityName = gcnew String(facilityName.c_str());
			FacilityNameTextBox->Text = s_facilityName;
			String^ s_facilityPeakHour = gcnew String(facilityPeakHour.c_str());
			PeakHourTextBox->Text = s_facilityPeakHour;
			String^ s_facilityOffPeakHour = gcnew String(facilityOffPeakHour.c_str());
			OffPeakHourTextBox->Text = s_facilityOffPeakHour;
		}
	private: System::Windows::Forms::Button^  EditButton;
	public:

	public:

	private: System::Windows::Forms::Button^  CancelButton;
	private: System::Windows::Forms::Label^  CreateFacilityTitle;

	private: System::Windows::Forms::Label^  FacilityIDTitle;
	private: System::Windows::Forms::TextBox^  FacilityIDTextBox;
	private: System::Windows::Forms::TextBox^  FacilityNameTextBox;






	private: System::Windows::Forms::Label^  RankingTitle;
	private: System::Windows::Forms::Label^  FacilityNameTitle;
	private: System::Windows::Forms::TextBox^  PeakHourTextBox;
	private: System::Windows::Forms::TextBox^  OffPeakHourTextBox;















	private: System::Windows::Forms::Label^  PeakHourRateTitle;



	private: System::Windows::Forms::Form ^ adminForm;

	public: String^ FacilityID;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditFacilityView()
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
			this->CreateFacilityTitle = (gcnew System::Windows::Forms::Label());
			this->FacilityIDTitle = (gcnew System::Windows::Forms::Label());
			this->FacilityIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FacilityNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->RankingTitle = (gcnew System::Windows::Forms::Label());
			this->FacilityNameTitle = (gcnew System::Windows::Forms::Label());
			this->PeakHourTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OffPeakHourTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PeakHourRateTitle = (gcnew System::Windows::Forms::Label());
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
			this->EditButton->Click += gcnew System::EventHandler(this, &EditFacilityView::CreateButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(142, 214);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(75, 23);
			this->CancelButton->TabIndex = 1;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &EditFacilityView::CancelButton_Click);
			// 
			// CreateFacilityTitle
			// 
			this->CreateFacilityTitle->AutoSize = true;
			this->CreateFacilityTitle->Location = System::Drawing::Point(208, 29);
			this->CreateFacilityTitle->Name = L"CreateFacilityTitle";
			this->CreateFacilityTitle->Size = System::Drawing::Size(60, 13);
			this->CreateFacilityTitle->TabIndex = 2;
			this->CreateFacilityTitle->Text = L"Edit Facility";
			// 
			// FacilityIDTitle
			// 
			this->FacilityIDTitle->AutoSize = true;
			this->FacilityIDTitle->Location = System::Drawing::Point(37, 73);
			this->FacilityIDTitle->Name = L"FacilityIDTitle";
			this->FacilityIDTitle->Size = System::Drawing::Size(53, 13);
			this->FacilityIDTitle->TabIndex = 4;
			this->FacilityIDTitle->Text = L"FacilityID:";
			// 
			// FacilityIDTextBox
			// 
			this->FacilityIDTextBox->Location = System::Drawing::Point(102, 70);
			this->FacilityIDTextBox->Name = L"FacilityIDTextBox";
			this->FacilityIDTextBox->Size = System::Drawing::Size(100, 20);
			this->FacilityIDTextBox->TabIndex = 7;
			// 
			// FacilityNameTextBox
			// 
			this->FacilityNameTextBox->Location = System::Drawing::Point(102, 101);
			this->FacilityNameTextBox->Name = L"FacilityNameTextBox";
			this->FacilityNameTextBox->Size = System::Drawing::Size(100, 20);
			this->FacilityNameTextBox->TabIndex = 8;
			// 
			// RankingTitle
			// 
			this->RankingTitle->AutoSize = true;
			this->RankingTitle->Location = System::Drawing::Point(237, 108);
			this->RankingTitle->Name = L"RankingTitle";
			this->RankingTitle->Size = System::Drawing::Size(104, 13);
			this->RankingTitle->TabIndex = 9;
			this->RankingTitle->Text = L"Off Peak Hour Rate:";
			// 
			// FacilityNameTitle
			// 
			this->FacilityNameTitle->AutoSize = true;
			this->FacilityNameTitle->Location = System::Drawing::Point(23, 104);
			this->FacilityNameTitle->Name = L"FacilityNameTitle";
			this->FacilityNameTitle->Size = System::Drawing::Size(73, 13);
			this->FacilityNameTitle->TabIndex = 10;
			this->FacilityNameTitle->Text = L"Facility Name:";
			// 
			// PeakHourTextBox
			// 
			this->PeakHourTextBox->Location = System::Drawing::Point(330, 70);
			this->PeakHourTextBox->Name = L"PeakHourTextBox";
			this->PeakHourTextBox->Size = System::Drawing::Size(100, 20);
			this->PeakHourTextBox->TabIndex = 14;
			// 
			// OffPeakHourTextBox
			// 
			this->OffPeakHourTextBox->Location = System::Drawing::Point(347, 104);
			this->OffPeakHourTextBox->Name = L"OffPeakHourTextBox";
			this->OffPeakHourTextBox->Size = System::Drawing::Size(100, 20);
			this->OffPeakHourTextBox->TabIndex = 15;
			// 
			// PeakHourRateTitle
			// 
			this->PeakHourRateTitle->AutoSize = true;
			this->PeakHourRateTitle->Location = System::Drawing::Point(237, 73);
			this->PeakHourRateTitle->Name = L"PeakHourRateTitle";
			this->PeakHourRateTitle->Size = System::Drawing::Size(87, 13);
			this->PeakHourRateTitle->TabIndex = 12;
			this->PeakHourRateTitle->Text = L"Peak Hour Rate:";
			// 
			// EditFacilityView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 261);
			this->Controls->Add(this->OffPeakHourTextBox);
			this->Controls->Add(this->PeakHourTextBox);
			this->Controls->Add(this->PeakHourRateTitle);
			this->Controls->Add(this->FacilityNameTitle);
			this->Controls->Add(this->RankingTitle);
			this->Controls->Add(this->FacilityNameTextBox);
			this->Controls->Add(this->FacilityIDTextBox);
			this->Controls->Add(this->FacilityIDTitle);
			this->Controls->Add(this->CreateFacilityTitle);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->EditButton);
			this->Name = L"EditFacilityView";
			this->Text = L"EditFacilityView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		// Go back to Admin View
		adminForm->Show();
		this->Close();
	}
	private: System::Void CreateButton_Click(System::Object^  sender, System::EventArgs^  e) {

		// Delete original string first
		// Read AccountDB file
		std::ifstream myfile("FacilityDB.txt");
		std::string line;

		// Declare strings for conversion
		std::string facilityIDConvertToString;
		std::string facilityNameConvertToString;
		std::string peakHourConvertToString;
		std::string offPeakHourConvertToString;

		// Get the information in all TextBoxes
		// member, username, password, name, ranking, DOB, address
		String^ facilityIDTextBox = FacilityIDTextBox->Text;
		String^ facilityNameTextBox = FacilityNameTextBox->Text;
		String^ peakHourTextBox = PeakHourTextBox->Text;
		String^ offPeakHourTextBox = OffPeakHourTextBox->Text;

		// Convert System String to String
		MarshalString(facilityIDTextBox, facilityIDConvertToString);
		MarshalString(facilityNameTextBox, facilityNameConvertToString);
		MarshalString(peakHourTextBox, peakHourConvertToString);
		MarshalString(offPeakHourTextBox, offPeakHourConvertToString);

		/*EditingFacilityLabel->Text = FacilityID;*/
		std::string retainFacilityID;
		MarshalString(FacilityID, retainFacilityID);

		char charLine[256];
		char* facilityString;

		std::string facility[999][4];

		// For counting accounts
		int facilityCount = 0;
		int maxFacilityCount = 0;

		// For counting account columns
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
					// Save data as Member / Admin Object
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

			// Store total account counts into maxAccountCount variable
			maxFacilityCount = facilityCount;

			// Loop through accounts
			for (int facilityCount = 0; facilityCount < maxFacilityCount; facilityCount++) {

				// Check for Facility
				if (retainFacilityID == facility[facilityCount][0]) {

					// Insert new values into account
					facility[facilityCount][0] = facilityIDConvertToString;
					facility[facilityCount][1] = facilityNameConvertToString;
					facility[facilityCount][2] = peakHourConvertToString;
					facility[facilityCount][3] = offPeakHourConvertToString;
				}
				else {
					// Do Nothing
				}
			}

			// Overwrite AccountDB.txt
			std::ofstream overwriteFile("FacilityDB.txt");
			if (overwriteFile.is_open()) {
				// Loop through accounts for file output
				for (int facilityCount = 0; facilityCount < maxFacilityCount; facilityCount++) {
					// Loop through account columns as well
					for (int facilityColumnCount = 0; facilityColumnCount < 4; facilityColumnCount++) {
						if (facilityColumnCount <= 2) {
							overwriteFile << facility[facilityCount][facilityColumnCount] << ":";
						}
						else if (facilityColumnCount == 3) {
							overwriteFile << facility[facilityCount][facilityColumnCount] << "\n";
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
