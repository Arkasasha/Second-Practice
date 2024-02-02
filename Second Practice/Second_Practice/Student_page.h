#pragma once
#include "Student_grades.h"

namespace SecondPractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student_page
	/// </summary>
	public ref class Student_page : public System::Windows::Forms::Form
	{
	public:
		Student_page(void)
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
		~Student_page()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_log_out;
	private: System::Windows::Forms::Label^ lbl_user;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Button^ btn_course;





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
			this->btn_log_out = (gcnew System::Windows::Forms::Button());
			this->lbl_user = (gcnew System::Windows::Forms::Label());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->btn_course = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_log_out
			// 
			this->btn_log_out->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_log_out->Location = System::Drawing::Point(818, 12);
			this->btn_log_out->Name = L"btn_log_out";
			this->btn_log_out->Size = System::Drawing::Size(126, 56);
			this->btn_log_out->TabIndex = 1;
			this->btn_log_out->Text = L"Log out";
			this->btn_log_out->UseVisualStyleBackColor = true;
			this->btn_log_out->Click += gcnew System::EventHandler(this, &Student_page::btn_log_out_Click);
			// 
			// lbl_user
			// 
			this->lbl_user->AutoSize = true;
			this->lbl_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_user->Location = System::Drawing::Point(28, 22);
			this->lbl_user->Name = L"lbl_user";
			this->lbl_user->Size = System::Drawing::Size(254, 20);
			this->lbl_user->TabIndex = 2;
			this->lbl_user->Text = L"Student: Buhrii Oleksandr, PI22E";
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(28, 48);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(225, 20);
			this->lbl_title->TabIndex = 3;
			this->lbl_title->Text = L"Student Individual evaluation:";
			// 
			// btn_course
			// 
			this->btn_course->BackColor = System::Drawing::Color::LemonChiffon;
			this->btn_course->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_course->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_course->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_course->Location = System::Drawing::Point(31, 110);
			this->btn_course->Name = L"btn_course";
			this->btn_course->Size = System::Drawing::Size(442, 82);
			this->btn_course->TabIndex = 4;
			this->btn_course->Text = L"2023/2024 Faculty of Electronix and iformatics";
			this->btn_course->UseVisualStyleBackColor = false;
			this->btn_course->Click += gcnew System::EventHandler(this, &Student_page::btn_course_Click);
			// 
			// Student_page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(956, 546);
			this->Controls->Add(this->btn_course);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->lbl_user);
			this->Controls->Add(this->btn_log_out);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Student_page";
			this->Text = L"Student_page";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_log_out_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_course_Click(System::Object^ sender, System::EventArgs^ e) {
		Student_grades^ grades = gcnew Student_grades();
		grades->Show();
	}
};
}
