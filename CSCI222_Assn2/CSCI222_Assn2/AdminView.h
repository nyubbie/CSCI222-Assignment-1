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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  AdminTitle;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  EditMemberButton;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Button^  CreateMemberButton;
	private: System::Windows::Forms::Button^  DeleteMemberButton;
	private: System::Windows::Forms::Button^  SearchMemberButton;
	private: System::Windows::Forms::Label^  label3;




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
			this->AdminTitle = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->EditMemberButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->CreateMemberButton = (gcnew System::Windows::Forms::Button());
			this->DeleteMemberButton = (gcnew System::Windows::Forms::Button());
			this->SearchMemberButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(168, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Country Club Facilities Booking System (Admin Page) ";
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(93, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// EditMemberButton
			// 
			this->EditMemberButton->Location = System::Drawing::Point(389, 189);
			this->EditMemberButton->Name = L"EditMemberButton";
			this->EditMemberButton->Size = System::Drawing::Size(75, 23);
			this->EditMemberButton->TabIndex = 4;
			this->EditMemberButton->Text = L"Edit Member";
			this->EditMemberButton->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(89, 191);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// CreateMemberButton
			// 
			this->CreateMemberButton->Location = System::Drawing::Point(195, 189);
			this->CreateMemberButton->Name = L"CreateMemberButton";
			this->CreateMemberButton->Size = System::Drawing::Size(91, 23);
			this->CreateMemberButton->TabIndex = 7;
			this->CreateMemberButton->Text = L"Create Member";
			this->CreateMemberButton->UseVisualStyleBackColor = true;
			// 
			// DeleteMemberButton
			// 
			this->DeleteMemberButton->Location = System::Drawing::Point(292, 189);
			this->DeleteMemberButton->Name = L"DeleteMemberButton";
			this->DeleteMemberButton->Size = System::Drawing::Size(91, 23);
			this->DeleteMemberButton->TabIndex = 8;
			this->DeleteMemberButton->Text = L"Delete Member";
			this->DeleteMemberButton->UseVisualStyleBackColor = true;
			// 
			// SearchMemberButton
			// 
			this->SearchMemberButton->Location = System::Drawing::Point(470, 189);
			this->SearchMemberButton->Name = L"SearchMemberButton";
			this->SearchMemberButton->Size = System::Drawing::Size(90, 23);
			this->SearchMemberButton->TabIndex = 9;
			this->SearchMemberButton->Text = L"Search Member";
			this->SearchMemberButton->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"MemberID:";
			// 
			// AdminView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 261);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->SearchMemberButton);
			this->Controls->Add(this->DeleteMemberButton);
			this->Controls->Add(this->CreateMemberButton);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->EditMemberButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->AdminTitle);
			this->Controls->Add(this->label1);
			this->Name = L"AdminView";
			this->Text = L"AdminView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	};
}
