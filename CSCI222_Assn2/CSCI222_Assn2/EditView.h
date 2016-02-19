#pragma once

namespace CSCI222_Assn2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditView
	/// </summary>
	public ref class EditView : public System::Windows::Forms::Form
	{
	public:
		EditView(void)
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
		~EditView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  editLabel1;
	private: System::Windows::Forms::Label^  editTypeLabel;
	protected:


	private: System::Windows::Forms::TextBox^  editChangeTextBox;


	private: System::Windows::Forms::Button^  editSubmitButton;

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
			this->editLabel1 = (gcnew System::Windows::Forms::Label());
			this->editTypeLabel = (gcnew System::Windows::Forms::Label());
			this->editChangeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->editSubmitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// editLabel1
			// 
			this->editLabel1->AutoSize = true;
			this->editLabel1->Location = System::Drawing::Point(111, 53);
			this->editLabel1->Name = L"editLabel1";
			this->editLabel1->Size = System::Drawing::Size(48, 13);
			this->editLabel1->TabIndex = 0;
			this->editLabel1->Text = L"Edit Item";
			// 
			// editTypeLabel
			// 
			this->editTypeLabel->AutoSize = true;
			this->editTypeLabel->Location = System::Drawing::Point(32, 105);
			this->editTypeLabel->Name = L"editTypeLabel";
			this->editTypeLabel->Size = System::Drawing::Size(26, 13);
			this->editTypeLabel->TabIndex = 1;
			this->editTypeLabel->Text = L"null:";
			// 
			// editChangeTextBox
			// 
			this->editChangeTextBox->Location = System::Drawing::Point(95, 102);
			this->editChangeTextBox->Name = L"editChangeTextBox";
			this->editChangeTextBox->Size = System::Drawing::Size(144, 20);
			this->editChangeTextBox->TabIndex = 2;
			// 
			// editSubmitButton
			// 
			this->editSubmitButton->Location = System::Drawing::Point(95, 183);
			this->editSubmitButton->Name = L"editSubmitButton";
			this->editSubmitButton->Size = System::Drawing::Size(75, 23);
			this->editSubmitButton->TabIndex = 3;
			this->editSubmitButton->Text = L"Submit";
			this->editSubmitButton->UseVisualStyleBackColor = true;
			// 
			// EditView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->editSubmitButton);
			this->Controls->Add(this->editChangeTextBox);
			this->Controls->Add(this->editTypeLabel);
			this->Controls->Add(this->editLabel1);
			this->Name = L"EditView";
			this->Text = L"EditView";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
