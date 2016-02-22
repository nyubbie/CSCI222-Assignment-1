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

			//////////////////////////
			// Populate ComboBox
			//////////////////////////

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

			//////////////////////////
			// End of Populate ComboBox
			//////////////////////////



			/*String^ s_memberName = gcnew String(memberName.c_str());
			NameLabel->Text = s_memberName;
			String^ s_memberAddress = gcnew String(memberAddress.c_str());
			AddressLabel->Text = s_memberAddress;
			String^ s_memberDOB = gcnew String(memberDOB.c_str());
			DOBLabel->Text = s_memberDOB;*/
		}
	private: System::Windows::Forms::Button^  MakeBookingButton;
	private: System::Windows::Forms::Label^  DateTitle;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  PriceTitle;
	private: System::Windows::Forms::Label^  PriceLabel;

	public:

	public:
	private: System::Windows::Forms::Form ^ memberForm;
	private: System::Windows::Forms::Label^  BookingMemberIDTitle;
	private: System::Windows::Forms::Label^  BookingMemberIDLabel;
	private: System::Windows::Forms::Button^  CancelButton;




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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->PriceTitle = (gcnew System::Windows::Forms::Label());
			this->PriceLabel = (gcnew System::Windows::Forms::Label());
			this->BookingMemberIDTitle = (gcnew System::Windows::Forms::Label());
			this->BookingMemberIDLabel = (gcnew System::Windows::Forms::Label());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(95, 137);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(95, 175);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 8;
			// 
			// PriceTitle
			// 
			this->PriceTitle->AutoSize = true;
			this->PriceTitle->Location = System::Drawing::Point(351, 99);
			this->PriceTitle->Name = L"PriceTitle";
			this->PriceTitle->Size = System::Drawing::Size(34, 13);
			this->PriceTitle->TabIndex = 9;
			this->PriceTitle->Text = L"Price:";
			// 
			// PriceLabel
			// 
			this->PriceLabel->AutoSize = true;
			this->PriceLabel->Location = System::Drawing::Point(392, 99);
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
			// MemberBookingView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 261);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->BookingMemberIDLabel);
			this->Controls->Add(this->BookingMemberIDTitle);
			this->Controls->Add(this->PriceLabel);
			this->Controls->Add(this->PriceTitle);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
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

		

		

		// Time / Date planning
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
};
}
