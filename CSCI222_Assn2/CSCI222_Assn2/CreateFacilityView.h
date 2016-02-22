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
	/// Summary for CreateFacilityView
	/// </summary>
	public ref class CreateFacilityView : public System::Windows::Forms::Form
	{
	public:
		CreateFacilityView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		CreateFacilityView(System::Windows::Forms::Form^ createFacilityView)
		{
			adminForm = createFacilityView;

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

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateFacilityView()
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
			// CreateButton
			// 
			this->CreateButton->Location = System::Drawing::Point(60, 214);
			this->CreateButton->Name = L"CreateButton";
			this->CreateButton->Size = System::Drawing::Size(75, 23);
			this->CreateButton->TabIndex = 0;
			this->CreateButton->Text = L"Create";
			this->CreateButton->UseVisualStyleBackColor = true;
			this->CreateButton->Click += gcnew System::EventHandler(this, &CreateFacilityView::CreateButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(142, 214);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(75, 23);
			this->CancelButton->TabIndex = 1;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &CreateFacilityView::CancelButton_Click);
			// 
			// CreateFacilityTitle
			// 
			this->CreateFacilityTitle->AutoSize = true;
			this->CreateFacilityTitle->Location = System::Drawing::Point(208, 29);
			this->CreateFacilityTitle->Name = L"CreateFacilityTitle";
			this->CreateFacilityTitle->Size = System::Drawing::Size(73, 13);
			this->CreateFacilityTitle->TabIndex = 2;
			this->CreateFacilityTitle->Text = L"Create Facility";
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
			// CreateFacilityView
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
			this->Controls->Add(this->CreateButton);
			this->Name = L"CreateFacilityView";
			this->Text = L"CreateFacilityView";
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

		std::ofstream afile;
		afile.open("FacilityDB.txt", std::ios::app);

		afile << "\n" << facilityIDConvertToString << ":" << facilityNameConvertToString << ":" << peakHourConvertToString << ":" << offPeakHourConvertToString;

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
