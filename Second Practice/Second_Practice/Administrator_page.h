#pragma once

namespace SecondPractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Administrator_page
	/// </summary>
	public ref class Administrator_page : public System::Windows::Forms::Form
	{
	public:
		Administrator_page(void)
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
		~Administrator_page()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_log_out;
	private: System::Windows::Forms::Label^ lbl_user;
	private: System::Windows::Forms::Button^ btn_groups;
	private: System::Windows::Forms::Button^ btn_cources;
	private: System::Windows::Forms::Button^ btn_lectors;
	private: System::Windows::Forms::Button^ btn_student;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_log_out = (gcnew System::Windows::Forms::Button());
			this->lbl_user = (gcnew System::Windows::Forms::Label());
			this->btn_groups = (gcnew System::Windows::Forms::Button());
			this->btn_cources = (gcnew System::Windows::Forms::Button());
			this->btn_lectors = (gcnew System::Windows::Forms::Button());
			this->btn_student = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_log_out
			// 
			this->btn_log_out->Location = System::Drawing::Point(398, 12);
			this->btn_log_out->Name = L"btn_log_out";
			this->btn_log_out->Size = System::Drawing::Size(116, 42);
			this->btn_log_out->TabIndex = 0;
			this->btn_log_out->Text = L"Log out";
			this->btn_log_out->UseVisualStyleBackColor = true;
			this->btn_log_out->Click += gcnew System::EventHandler(this, &Administrator_page::btn_log_out_Click);
			// 
			// lbl_user
			// 
			this->lbl_user->AutoSize = true;
			this->lbl_user->Location = System::Drawing::Point(12, 12);
			this->lbl_user->Name = L"lbl_user";
			this->lbl_user->Size = System::Drawing::Size(187, 16);
			this->lbl_user->TabIndex = 1;
			this->lbl_user->Text = L"ADMISTRATOR: Alex Kermen";
			// 
			// btn_groups
			// 
			this->btn_groups->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_groups->Location = System::Drawing::Point(28, 63);
			this->btn_groups->Name = L"btn_groups";
			this->btn_groups->Size = System::Drawing::Size(171, 55);
			this->btn_groups->TabIndex = 2;
			this->btn_groups->Text = L"Manage groups";
			this->btn_groups->UseVisualStyleBackColor = true;
			this->btn_groups->Click += gcnew System::EventHandler(this, &Administrator_page::btn_groups_Click);
			// 
			// btn_cources
			// 
			this->btn_cources->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cources->Location = System::Drawing::Point(28, 141);
			this->btn_cources->Name = L"btn_cources";
			this->btn_cources->Size = System::Drawing::Size(171, 55);
			this->btn_cources->TabIndex = 3;
			this->btn_cources->Text = L"Manage cources";
			this->btn_cources->UseVisualStyleBackColor = true;
			this->btn_cources->Click += gcnew System::EventHandler(this, &Administrator_page::btn_cources_Click);
			// 
			// btn_lectors
			// 
			this->btn_lectors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_lectors->Location = System::Drawing::Point(28, 221);
			this->btn_lectors->Name = L"btn_lectors";
			this->btn_lectors->Size = System::Drawing::Size(171, 55);
			this->btn_lectors->TabIndex = 4;
			this->btn_lectors->Text = L"Manage lectors";
			this->btn_lectors->UseVisualStyleBackColor = true;
			this->btn_lectors->Click += gcnew System::EventHandler(this, &Administrator_page::btn_lectors_Click);
			// 
			// btn_student
			// 
			this->btn_student->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_student->Location = System::Drawing::Point(28, 300);
			this->btn_student->Name = L"btn_student";
			this->btn_student->Size = System::Drawing::Size(171, 55);
			this->btn_student->TabIndex = 5;
			this->btn_student->Text = L"Manage students";
			this->btn_student->UseVisualStyleBackColor = true;
			this->btn_student->Click += gcnew System::EventHandler(this, &Administrator_page::btn_student_Click);
			// 
			// Administrator_page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(570, 498);
			this->Controls->Add(this->btn_student);
			this->Controls->Add(this->btn_lectors);
			this->Controls->Add(this->btn_cources);
			this->Controls->Add(this->btn_groups);
			this->Controls->Add(this->lbl_user);
			this->Controls->Add(this->btn_log_out);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Administrator_page";
			this->Text = L"Administrator_page";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_log_out_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_groups_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btn_cources_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btn_lectors_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btn_student_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
};
