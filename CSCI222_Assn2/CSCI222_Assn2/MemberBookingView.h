#include <ctime>
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
	/// Summary for MemberBookingView
	/// </summary>
	public ref class MemberBookingView : public System::Windows::Forms::Form
	{
	public:
		MemberBookingView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		MemberBookingView(System::Windows::Forms::Form^ memberBookingView, std::string memberID, std::string memberUsername, std::string memberPassword, std::string memberRanking, std::string memberName, std::string memberDOB, std::string memberAddress)
		{
			memberForm = memberBookingView;

			InitializeComponent();

			String^ s_memberID = gcnew String(memberID.c_str());
			BookingMemberIDLabel->Text = s_memberID;

			//////////////////////////////////
			// Populate FacilityComboBox
			//////////////////////////////////

			// Read FacilityDB file
			std::ifstream myfile("FacilityDB.txt");

			std::string line;
			char charLine[256];
			char* facilityString;

			std::string facility[999][4];

			// For counting facilities
			int facilityCount = 0;

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
						// Add to Combo Box (should only add Facility names)
						if (facilityColumnCount == 1) {
							// Save data to Combo Box, convert from char* to System String^
							String^ s_facilityString = gcnew String(facilityString);
							BookingFacilityComboBox->Items->Add(s_facilityString);
						}

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
			}

			//////////////////////////////////
			// End of Populate FacilityComboBox
			//////////////////////////////////

			//////////////////////////////////
			// Populate DateComboBox
			//////////////////////////////////

			time_t t = time(0);   // get time now
			struct tm * now = localtime(&t);

			// Get Year, Month, Day
			int year = now->tm_year + 1900;
			int month = now->tm_mon + 1;
			int day = now->tm_mday;

			for (int dateLimitCount = 0; dateLimitCount < 8; dateLimitCount++) {

				// Convert from int to string
				std::string currentYear = std::to_string(year);
				std::string currentMonth = std::to_string(month);
				std::string currentDay = std::to_string(day + dateLimitCount) ;

				std::string currentDate = currentDay + "-" + currentMonth + "-" + currentYear;
				String^ s_currentDate = gcnew String(currentDate.c_str());
				DateComboBox->Items->Add(s_currentDate);
			}

			//////////////////////////////////
			// End of Populate DateComboBox
			//////////////////////////////////

			//////////////////////////////////
			// Populate TimeComboBox
			//////////////////////////////////

			// booking starts from 0800 hrs to 2200 hrs
			// 0800 1000 1200 1400 1600 1800 2000 2200

			// Just add Time
			TimeComboBox->Items->Add("8:00AM");
			TimeComboBox->Items->Add("10:00AM");
			TimeComboBox->Items->Add("12:00PM");
			TimeComboBox->Items->Add("2:00PM");
			TimeComboBox->Items->Add("4:00PM");
			TimeComboBox->Items->Add("6:00PM");
			TimeComboBox->Items->Add("8:00PM");
			TimeComboBox->Items->Add("10:00PM");

			//////////////////////////////////
			// End of Populate TimeComboBox
			//////////////////////////////////

			/*String^ s_memberName = gcnew String(memberName.c_str());
			NameLabel->Text = s_memberName;
			String^ s_memberAddress = gcnew String(memberAddress.c_str());
			AddressLabel->Text = s_memberAddress;
			String^ s_memberDOB = gcnew String(memberDOB.c_str());
			DOBLabel->Text = s_memberDOB;*/
		}
	private: System::Windows::Forms::Button^  MakeBookingButton;
	private: System::Windows::Forms::Label^  DateTitle;
	private: System::Windows::Forms::ComboBox^  DateComboBox;
	private: System::Windows::Forms::ComboBox^  TimeComboBox;


	private: System::Windows::Forms::Label^  PriceTitle;
	private: System::Windows::Forms::Label^  PriceLabel;

	public:

	public:
	private: System::Windows::Forms::Form ^ memberForm;
	private: System::Windows::Forms::Label^  BookingMemberIDTitle;
	private: System::Windows::Forms::Label^  BookingMemberIDLabel;
	private: System::Windows::Forms::Button^  CancelButton;
private: System::Windows::Forms::Label^  BookingAvailableTitle;
private: System::Windows::Forms::Label^  BookingAvailableLabel;





	public: String^ MemberID;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MemberBookingView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  MemberBookingTitle;
	private: System::Windows::Forms::Label^  BookForTitle;
	private: System::Windows::Forms::ComboBox^  BookingFacilityComboBox;
	private: System::Windows::Forms::Label^  TimeTitle;



	protected:

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
			this->MemberBookingTitle = (gcnew System::Windows::Forms::Label());
			this->BookForTitle = (gcnew System::Windows::Forms::Label());
			this->BookingFacilityComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->TimeTitle = (gcnew System::Windows::Forms::Label());
			this->MakeBookingButton = (gcnew System::Windows::Forms::Button());
			this->DateTitle = (gcnew System::Windows::Forms::Label());
			this->DateComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->TimeComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->PriceTitle = (gcnew System::Windows::Forms::Label());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->BookingMemberIDTitle = (gcnew System::Windows::Forms::Label());
			this->BookingMemberIDLabel = (gcnew System::Windows::Forms::Label());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->BookingAvailableTitle = (gcnew System::Windows::Forms::Label());
			this->BookingAvailableLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// MemberBookingTitle
			// 
			this->MemberBookingTitle->AutoSize = true;
			this->MemberBookingTitle->Location = System::Drawing::Point(202, 29);
			this->MemberBookingTitle->Name = L"MemberBookingTitle";
			this->MemberBookingTitle->Size = System::Drawing::Size(113, 13);
			this->MemberBookingTitle->TabIndex = 0;
			this->MemberBookingTitle->Text = L"Member Booking View";
			// 
			// BookForTitle
			// 
			this->BookForTitle->AutoSize = true;
			this->BookForTitle->Location = System::Drawing::Point(36, 99);
			this->BookForTitle->Name = L"BookForTitle";
			this->BookForTitle->Size = System::Drawing::Size(53, 13);
			this->BookForTitle->TabIndex = 1;
			this->BookForTitle->Text = L"Book For:";
			// 
			// BookingFacilityComboBox
			// 
			this->BookingFacilityComboBox->FormattingEnabled = true;
			this->BookingFacilityComboBox->Location = System::Drawing::Point(95, 96);
			this->BookingFacilityComboBox->Name = L"BookingFacilityComboBox";
			this->BookingFacilityComboBox->Size = System::Drawing::Size(121, 21);
			this->BookingFacilityComboBox->TabIndex = 2;
			this->BookingFacilityComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MemberBookingView::BookingFacilityComboBox_SelectedIndexChanged);
			// 
			// TimeTitle
			// 
			this->TimeTitle->AutoSize = true;
			this->TimeTitle->Location = System::Drawing::Point(36, 175);
			this->TimeTitle->Name = L"TimeTitle";
			this->TimeTitle->Size = System::Drawing::Size(33, 13);
			this->TimeTitle->TabIndex = 4;
			this->TimeTitle->Text = L"Time:";
			// 
			// MakeBookingButton
			// 
			this->MakeBookingButton->Location = System::Drawing::Point(318, 211);
			this->MakeBookingButton->Name = L"MakeBookingButton";
			this->MakeBookingButton->Size = System::Drawing::Size(97, 23);
			this->MakeBookingButton->TabIndex = 5;
			this->MakeBookingButton->Text = L"Make Booking";
			this->MakeBookingButton->UseVisualStyleBackColor = true;
			this->MakeBookingButton->Click += gcnew System::EventHandler(this, &MemberBookingView::MakeBookingButton_Click);
			// 
			// DateTitle
			// 
			this->DateTitle->AutoSize = true;
			this->DateTitle->Location = System::Drawing::Point(36, 140);
			this->DateTitle->Name = L"DateTitle";
			this->DateTitle->Size = System::Drawing::Size(33, 13);
			this->DateTitle->TabIndex = 6;
			this->DateTitle->Text = L"Date:";
			// 
			// DateComboBox
			// 
			this->DateComboBox->FormattingEnabled = true;
			this->DateComboBox->Location = System::Drawing::Point(95, 137);
			this->DateComboBox->Name = L"DateComboBox";
			this->DateComboBox->Size = System::Drawing::Size(121, 21);
			this->DateComboBox->TabIndex = 7;
			this->DateComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MemberBookingView::DateComboBox_SelectedIndexChanged);
			// 
			// TimeComboBox
			// 
			this->TimeComboBox->FormattingEnabled = true;
			this->TimeComboBox->Location = System::Drawing::Point(95, 175);
			this->TimeComboBox->Name = L"TimeComboBox";
			this->TimeComboBox->Size = System::Drawing::Size(121, 21);
			this->TimeComboBox->TabIndex = 8;
			this->TimeComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MemberBookingView::TimeComboBox_SelectedIndexChanged);
			// 
			// PriceTitle
			// 
			this->PriceTitle->AutoSize = true;
			this->PriceTitle->Location = System::Drawing::Point(290, 99);
			this->PriceTitle->Name = L"PriceTitle";
			this->PriceTitle->Size = System::Drawing::Size(34, 13);
			this->PriceTitle->TabIndex = 9;
			this->PriceTitle->Text = L"Price:";
			// 
			// PriceLabel
			// 
			this->PriceLabel->AutoSize = true;
			this->PriceLabel->Location = System::Drawing::Point(331, 99);
			this->PriceLabel->Name = L"PriceLabel";
			this->PriceLabel->Size = System::Drawing::Size(23, 13);
			this->PriceLabel->TabIndex = 10;
			this->PriceLabel->Text = L"null";
			// 
			// BookingMemberIDTitle
			// 
			this->BookingMemberIDTitle->AutoSize = true;
			this->BookingMemberIDTitle->Location = System::Drawing::Point(39, 60);
			this->BookingMemberIDTitle->Name = L"BookingMemberIDTitle";
			this->BookingMemberIDTitle->Size = System::Drawing::Size(104, 13);
			this->BookingMemberIDTitle->TabIndex = 11;
			this->BookingMemberIDTitle->Text = L"Booking Member ID:";
			// 
			// BookingMemberIDLabel
			// 
			this->BookingMemberIDLabel->AutoSize = true;
			this->BookingMemberIDLabel->Location = System::Drawing::Point(150, 60);
			this->BookingMemberIDLabel->Name = L"BookingMemberIDLabel";
			this->BookingMemberIDLabel->Size = System::Drawing::Size(23, 13);
			this->BookingMemberIDLabel->TabIndex = 12;
			this->BookingMemberIDLabel->Text = L"null";
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(421, 211);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(97, 23);
			this->CancelButton->TabIndex = 13;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &MemberBookingView::CancelButton_Click);
			// 
			// BookingAvailableTitle
			// 
			this->BookingAvailableTitle->AutoSize = true;
			this->BookingAvailableTitle->Location = System::Drawing::Point(290, 137);
			this->BookingAvailableTitle->Name = L"BookingAvailableTitle";
			this->BookingAvailableTitle->Size = System::Drawing::Size(95, 13);
			this->BookingAvailableTitle->TabIndex = 14;
			this->BookingAvailableTitle->Text = L"Booking Available:";
			// 
			// BookingAvailableLabel
			// 
			this->BookingAvailableLabel->AutoSize = true;
			this->BookingAvailableLabel->Location = System::Drawing::Point(391, 137);
			this->BookingAvailableLabel->Name = L"BookingAvailableLabel";
			this->BookingAvailableLabel->Size = System::Drawing::Size(23, 13);
			this->BookingAvailableLabel->TabIndex = 15;
			this->BookingAvailableLabel->Text = L"null";
			// 
			// MemberBookingView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 261);
			this->Controls->Add(this->BookingAvailableLabel);
			this->Controls->Add(this->BookingAvailableTitle);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->BookingMemberIDLabel);
			this->Controls->Add(this->BookingMemberIDTitle);
			this->Controls->Add(this->PriceLabel);
			this->Controls->Add(this->PriceTitle);
			this->Controls->Add(this->TimeComboBox);
			this->Controls->Add(this->DateComboBox);
			this->Controls->Add(this->DateTitle);
			this->Controls->Add(this->MakeBookingButton);
			this->Controls->Add(this->TimeTitle);
			this->Controls->Add(this->BookingFacilityComboBox);
			this->Controls->Add(this->BookForTitle);
			this->Controls->Add(this->MemberBookingTitle);
			this->Name = L"MemberBookingView";
			this->Text = L"MemberBookingView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MakeBookingButton_Click(System::Object^  sender, System::EventArgs^  e) {

		// MemberID must be passed from previous form
		std::string retainMemberID;
		MarshalString(MemberID, retainMemberID);
		
		// Clicking on booking button will generate booking in BookingDB
		//s_dateSelected;
		//s_timeSelected;
	}

	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// Return to Member View
		memberForm->Show();
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
	private: System::Void BookingFacilityComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void DateComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//BookingAvailableLabel->Text = DateComboBox->SelectedItem->ToString();

		// Get user selected option for Date
		String^ s_dateSelected = DateComboBox->SelectedItem->ToString();
	}
	private: System::Void TimeComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		//BookingAvailableLabel->Text = TimeComboBox->SelectedItem->ToString();
		
		// Get user selected option for Time
		String^ s_timeSelected = TimeComboBox->SelectedItem->ToString();
	}
};
}
