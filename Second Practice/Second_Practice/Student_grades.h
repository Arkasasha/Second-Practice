#pragma once
#include "Law.h"
#include "Management.h"
#include "Mathematics.h"
#include "DatabaseDesign.h"
#include "InformationSystem.h"


namespace SecondPractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student_grades
	/// </summary>
	public ref class Student_grades : public System::Windows::Forms::Form
	{
	public:
		Student_grades(void)
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
		~Student_grades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_log_out;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Label^ id_1;
	private: System::Windows::Forms::Label^ id_2;
	private: System::Windows::Forms::Label^ id_3;
	private: System::Windows::Forms::Label^ id_4;
	private: System::Windows::Forms::Label^ id_5;
	private: System::Windows::Forms::Label^ subject_1;
	private: System::Windows::Forms::Label^ subject_2;
	private: System::Windows::Forms::Label^ subject_3;
	private: System::Windows::Forms::Label^ subject_4;
	private: System::Windows::Forms::Label^ subject_5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
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
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->id_1 = (gcnew System::Windows::Forms::Label());
			this->id_2 = (gcnew System::Windows::Forms::Label());
			this->id_3 = (gcnew System::Windows::Forms::Label());
			this->id_4 = (gcnew System::Windows::Forms::Label());
			this->id_5 = (gcnew System::Windows::Forms::Label());
			this->subject_1 = (gcnew System::Windows::Forms::Label());
			this->subject_2 = (gcnew System::Windows::Forms::Label());
			this->subject_3 = (gcnew System::Windows::Forms::Label());
			this->subject_4 = (gcnew System::Windows::Forms::Label());
			this->subject_5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_log_out
			// 
			this->btn_log_out->Location = System::Drawing::Point(859, 5);
			this->btn_log_out->Name = L"btn_log_out";
			this->btn_log_out->Size = System::Drawing::Size(108, 57);
			this->btn_log_out->TabIndex = 2;
			this->btn_log_out->Text = L"Log out";
			this->btn_log_out->UseVisualStyleBackColor = true;
			this->btn_log_out->Click += gcnew System::EventHandler(this, &Student_grades::btn_log_out_Click);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Location = System::Drawing::Point(12, 25);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(110, 16);
			this->lbl_title->TabIndex = 3;
			this->lbl_title->Text = L"Autumn semester";
			// 
			// id_1
			// 
			this->id_1->AutoSize = true;
			this->id_1->Location = System::Drawing::Point(26, 125);
			this->id_1->Name = L"id_1";
			this->id_1->Size = System::Drawing::Size(67, 16);
			this->id_1->TabIndex = 4;
			this->id_1->Text = L"S110B049";
			// 
			// id_2
			// 
			this->id_2->AutoSize = true;
			this->id_2->Location = System::Drawing::Point(26, 161);
			this->id_2->Name = L"id_2";
			this->id_2->Size = System::Drawing::Size(67, 16);
			this->id_2->TabIndex = 5;
			this->id_2->Text = L"S190B225";
			// 
			// id_3
			// 
			this->id_3->AutoSize = true;
			this->id_3->Location = System::Drawing::Point(26, 201);
			this->id_3->Name = L"id_3";
			this->id_3->Size = System::Drawing::Size(67, 16);
			this->id_3->TabIndex = 6;
			this->id_3->Text = L"P000B001\t";
			// 
			// id_4
			// 
			this->id_4->AutoSize = true;
			this->id_4->Location = System::Drawing::Point(26, 241);
			this->id_4->Name = L"id_4";
			this->id_4->Size = System::Drawing::Size(67, 16);
			this->id_4->TabIndex = 7;
			this->id_4->Text = L"P000B017\t";
			// 
			// id_5
			// 
			this->id_5->AutoSize = true;
			this->id_5->Location = System::Drawing::Point(26, 281);
			this->id_5->Name = L"id_5";
			this->id_5->Size = System::Drawing::Size(67, 16);
			this->id_5->TabIndex = 8;
			this->id_5->Text = L"P175B113";
			// 
			// subject_1
			// 
			this->subject_1->AutoSize = true;
			this->subject_1->Location = System::Drawing::Point(121, 125);
			this->subject_1->Name = L"subject_1";
			this->subject_1->Size = System::Drawing::Size(31, 16);
			this->subject_1->TabIndex = 9;
			this->subject_1->Text = L"Law";
			// 
			// subject_2
			// 
			this->subject_2->AutoSize = true;
			this->subject_2->Location = System::Drawing::Point(121, 161);
			this->subject_2->Name = L"subject_2";
			this->subject_2->Size = System::Drawing::Size(86, 16);
			this->subject_2->TabIndex = 10;
			this->subject_2->Text = L"Management";
			// 
			// subject_3
			// 
			this->subject_3->AutoSize = true;
			this->subject_3->Location = System::Drawing::Point(121, 201);
			this->subject_3->Name = L"subject_3";
			this->subject_3->Size = System::Drawing::Size(230, 16);
			this->subject_3->TabIndex = 11;
			this->subject_3->Text = L"Calculating and Optimization Methods";
			// 
			// subject_4
			// 
			this->subject_4->AutoSize = true;
			this->subject_4->Location = System::Drawing::Point(121, 241);
			this->subject_4->Name = L"subject_4";
			this->subject_4->Size = System::Drawing::Size(113, 16);
			this->subject_4->TabIndex = 12;
			this->subject_4->Text = L"Database Design";
			// 
			// subject_5
			// 
			this->subject_5->AutoSize = true;
			this->subject_5->Location = System::Drawing::Point(121, 281);
			this->subject_5->Name = L"subject_5";
			this->subject_5->Size = System::Drawing::Size(131, 16);
			this->subject_5->TabIndex = 13;
			this->subject_5->Text = L"Infrormation Systems";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(718, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"details";
			this->label1->Click += gcnew System::EventHandler(this, &Student_grades::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(718, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"details";
			this->label2->Click += gcnew System::EventHandler(this, &Student_grades::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(718, 201);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 16);
			this->label3->TabIndex = 16;
			this->label3->Text = L"details";
			this->label3->Click += gcnew System::EventHandler(this, &Student_grades::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(718, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 16);
			this->label4->TabIndex = 17;
			this->label4->Text = L"details";
			this->label4->Click += gcnew System::EventHandler(this, &Student_grades::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(718, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 16);
			this->label5->TabIndex = 18;
			this->label5->Text = L"details";
			this->label5->Click += gcnew System::EventHandler(this, &Student_grades::label5_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::LightSalmon;
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				23.16384F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				76.83616F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				117)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				224)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				73)));
			this->tableLayoutPanel1->Controls->Add(this->label6, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label8, 4, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(16, 75);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(763, 50);
			this->tableLayoutPanel1->TabIndex = 19;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Student_grades::tableLayoutPanel1_Paint);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(139, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Module code and name";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(701, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 16);
			this->label8->TabIndex = 2;
			this->label8->Text = L"grades";
			// 
			// Student_grades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(970, 451);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->subject_5);
			this->Controls->Add(this->subject_4);
			this->Controls->Add(this->subject_3);
			this->Controls->Add(this->subject_2);
			this->Controls->Add(this->subject_1);
			this->Controls->Add(this->id_5);
			this->Controls->Add(this->id_4);
			this->Controls->Add(this->id_3);
			this->Controls->Add(this->id_2);
			this->Controls->Add(this->id_1);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->btn_log_out);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Student_grades";
			this->Text = L"Student_grades";
			this->Load += gcnew System::EventHandler(this, &Student_grades::Student_grades_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_log_out_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Student_grades_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		Law^ law = gcnew Law;
		law->Show();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		Management^ management = gcnew Management;
		management->Show();
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
		Mathematics^ math = gcnew Mathematics;
		math->Show();
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		DatabaseDesign^ db = gcnew DatabaseDesign;
		db->Show();
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		InformationSystem^ is = gcnew InformationSystem;
		is->Show();
	}
};
}
