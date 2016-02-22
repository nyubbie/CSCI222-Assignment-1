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
	/// Summary for SearchFacilityView
	/// </summary>
	public ref class SearchFacilityView : public System::Windows::Forms::Form
	{
	public:
		SearchFacilityView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		SearchFacilityView(System::Windows::Forms::Form^ searchFacilityView, std::string facilityID, std::string facilityName, std::string facilityPeakHour, std::string facilityOffPeakHour)
		{
			adminForm = searchFacilityView;

			InitializeComponent();

			String^ s_facilityID = gcnew String(facilityID.c_str());
			FacilityIDLabel->Text = s_facilityID;
			String^ s_facilityName = gcnew String(facilityName.c_str());
			FacilityNameLabel->Text = s_facilityName;
			String^ s_facilityPeakHour = gcnew String(facilityPeakHour.c_str());
			FacilityPeakHourRateLabel->Text = s_facilityPeakHour;
			String^ s_facilityOffPeakHour = gcnew String(facilityOffPeakHour.c_str());
			FacilityOffPeakHourRateLabel->Text = s_facilityOffPeakHour;
		}

	public:

	public:

	private: System::Windows::Forms::Button^  CancelButton;
	private: System::Windows::Forms::Label^  CreateFacilityTitle;

	private: System::Windows::Forms::Label^  FacilityIDTitle;








	private: System::Windows::Forms::Label^  RankingTitle;
	private: System::Windows::Forms::Label^  FacilityNameTitle;

















	private: System::Windows::Forms::Label^  PeakHourRateTitle;



	private: System::Windows::Forms::Form ^ adminForm;
	private: System::Windows::Forms::Label^  FacilityIDLabel;
	private: System::Windows::Forms::Label^  FacilityNameLabel;
	private: System::Windows::Forms::Label^  FacilityPeakHourRateLabel;
	private: System::Windows::Forms::Label^  FacilityOffPeakHourRateLabel;





	public: String^ FacilityID;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SearchFacilityView()
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
			this->CreateFacilityTitle = (gcnew System::Windows::Forms::Label());
			this->FacilityIDTitle = (gcnew System::Windows::Forms::Label());
			this->RankingTitle = (gcnew System::Windows::Forms::Label());
			this->FacilityNameTitle = (gcnew System::Windows::Forms::Label());
			this->PeakHourRateTitle = (gcnew System::Windows::Forms::Label());
			this->FacilityIDLabel = (gcnew System::Windows::Forms::Label());
			this->FacilityNameLabel = (gcnew System::Windows::Forms::Label());
			this->FacilityPeakHourRateLabel = (gcnew System::Windows::Forms::Label());
			this->FacilityOffPeakHourRateLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(142, 214);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(75, 23);
			this->CancelButton->TabIndex = 1;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &SearchFacilityView::CancelButton_Click);
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
			// PeakHourRateTitle
			// 
			this->PeakHourRateTitle->AutoSize = true;
			this->PeakHourRateTitle->Location = System::Drawing::Point(237, 73);
			this->PeakHourRateTitle->Name = L"PeakHourRateTitle";
			this->PeakHourRateTitle->Size = System::Drawing::Size(87, 13);
			this->PeakHourRateTitle->TabIndex = 12;
			this->PeakHourRateTitle->Text = L"Peak Hour Rate:";
			// 
			// FacilityIDLabel
			// 
			this->FacilityIDLabel->AutoSize = true;
			this->FacilityIDLabel->Location = System::Drawing::Point(97, 73);
			this->FacilityIDLabel->Name = L"FacilityIDLabel";
			this->FacilityIDLabel->Size = System::Drawing::Size(23, 13);
			this->FacilityIDLabel->TabIndex = 13;
			this->FacilityIDLabel->Text = L"null";
			// 
			// FacilityNameLabel
			// 
			this->FacilityNameLabel->AutoSize = true;
			this->FacilityNameLabel->Location = System::Drawing::Point(102, 104);
			this->FacilityNameLabel->Name = L"FacilityNameLabel";
			this->FacilityNameLabel->Size = System::Drawing::Size(23, 13);
			this->FacilityNameLabel->TabIndex = 14;
			this->FacilityNameLabel->Text = L"null";
			// 
			// FacilityPeakHourRateLabel
			// 
			this->FacilityPeakHourRateLabel->AutoSize = true;
			this->FacilityPeakHourRateLabel->Location = System::Drawing::Point(330, 73);
			this->FacilityPeakHourRateLabel->Name = L"FacilityPeakHourRateLabel";
			this->FacilityPeakHourRateLabel->Size = System::Drawing::Size(23, 13);
			this->FacilityPeakHourRateLabel->TabIndex = 15;
			this->FacilityPeakHourRateLabel->Text = L"null";
			// 
			// FacilityOffPeakHourRateLabel
			// 
			this->FacilityOffPeakHourRateLabel->AutoSize = true;
			this->FacilityOffPeakHourRateLabel->Location = System::Drawing::Point(347, 108);
			this->FacilityOffPeakHourRateLabel->Name = L"FacilityOffPeakHourRateLabel";
			this->FacilityOffPeakHourRateLabel->Size = System::Drawing::Size(23, 13);
			this->FacilityOffPeakHourRateLabel->TabIndex = 16;
			this->FacilityOffPeakHourRateLabel->Text = L"null";
			// 
			// SearchFacilityView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 261);
			this->Controls->Add(this->FacilityOffPeakHourRateLabel);
			this->Controls->Add(this->FacilityPeakHourRateLabel);
			this->Controls->Add(this->FacilityNameLabel);
			this->Controls->Add(this->FacilityIDLabel);
			this->Controls->Add(this->PeakHourRateTitle);
			this->Controls->Add(this->FacilityNameTitle);
			this->Controls->Add(this->RankingTitle);
			this->Controls->Add(this->FacilityIDTitle);
			this->Controls->Add(this->CreateFacilityTitle);
			this->Controls->Add(this->CancelButton);
			this->Name = L"SearchFacilityView";
			this->Text = L"SearchFacilityView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CancelButton_Click(System::Object^  sender, System::EventArgs^  e) {

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
