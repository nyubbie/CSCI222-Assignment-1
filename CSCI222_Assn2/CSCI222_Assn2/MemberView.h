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
			//
			//TODO: Add the constructor code here
			//
		}
	// This retains the previous menu (LoginView)
	public:
		MemberView(System::Windows::Forms::Form^ loginView)
		{
			mainForm = loginView;
			InitializeComponent();
		}

	private: System::Windows::Forms::Form ^ mainForm;

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  editMemberName;
	private: System::Windows::Forms::Button^  editMemberAddress;
	private: System::Windows::Forms::Button^  editMemberDOB;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->editMemberName = (gcnew System::Windows::Forms::Button());
			this->editMemberAddress = (gcnew System::Windows::Forms::Button());
			this->editMemberDOB = (gcnew System::Windows::Forms::Button());
			this->memberLogout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(190, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(267, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Country Club Facilities Booking System (Member Page) ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(345, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(422, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 123);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Address:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(136, 123);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Date of Birth:";
			this->label6->UseMnemonic = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(136, 161);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"MemberID:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(136, 85);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"label9";
			// 
			// editMemberName
			// 
			this->editMemberName->Location = System::Drawing::Point(514, 80);
			this->editMemberName->Name = L"editMemberName";
			this->editMemberName->Size = System::Drawing::Size(75, 23);
			this->editMemberName->TabIndex = 9;
			this->editMemberName->Text = L"Edit Name";
			this->editMemberName->UseVisualStyleBackColor = true;
			this->editMemberName->Click += gcnew System::EventHandler(this, &MemberView::editMemberName_Click);
			// 
			// editMemberAddress
			// 
			this->editMemberAddress->Location = System::Drawing::Point(514, 118);
			this->editMemberAddress->Name = L"editMemberAddress";
			this->editMemberAddress->Size = System::Drawing::Size(75, 23);
			this->editMemberAddress->TabIndex = 10;
			this->editMemberAddress->Text = L"Edit Address";
			this->editMemberAddress->UseVisualStyleBackColor = true;
			this->editMemberAddress->Click += gcnew System::EventHandler(this, &MemberView::editMemberAddress_Click);
			// 
			// editMemberDOB
			// 
			this->editMemberDOB->Location = System::Drawing::Point(514, 156);
			this->editMemberDOB->Name = L"editMemberDOB";
			this->editMemberDOB->Size = System::Drawing::Size(75, 23);
			this->editMemberDOB->TabIndex = 11;
			this->editMemberDOB->Text = L"Edit DOB";
			this->editMemberDOB->UseVisualStyleBackColor = true;
			this->editMemberDOB->Click += gcnew System::EventHandler(this, &MemberView::editMemberDOB_Click);
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
			// MemberView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 261);
			this->Controls->Add(this->memberLogout);
			this->Controls->Add(this->editMemberDOB);
			this->Controls->Add(this->editMemberAddress);
			this->Controls->Add(this->editMemberName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
		mainForm->Show();
		this->Close();
	}
};
}
