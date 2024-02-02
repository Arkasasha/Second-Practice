#include "Administrator_page.h"
#include "Student_page.h"
#include "Lector_page.h"
#include <iostream>

namespace SecondPractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tb_username;
	protected:

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ tb_password;

	private: System::Windows::Forms::Label^ lbl_username;
	private: System::Windows::Forms::Label^ lbl_password;




	private: System::Windows::Forms::Button^ btn_login;
	private: System::Windows::Forms::Label^ lb_title;



	private: System::Windows::Forms::RadioButton^ rb_lector;

	private: System::Windows::Forms::RadioButton^ rb_student;
	private: System::Windows::Forms::Label^ lb_subtitle;



	private:
		int option = -1;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->tb_username = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->tb_password = (gcnew System::Windows::Forms::TextBox());
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->lbl_password = (gcnew System::Windows::Forms::Label());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->lb_title = (gcnew System::Windows::Forms::Label());
			this->rb_lector = (gcnew System::Windows::Forms::RadioButton());
			this->rb_student = (gcnew System::Windows::Forms::RadioButton());
			this->lb_subtitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tb_username
			// 
			this->tb_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->tb_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_username->ForeColor = System::Drawing::Color::White;
			this->tb_username->Location = System::Drawing::Point(845, 281);
			this->tb_username->MaxLength = 15;
			this->tb_username->Name = L"tb_username";
			this->tb_username->Size = System::Drawing::Size(327, 34);
			this->tb_username->TabIndex = 0;
			this->tb_username->TextChanged += gcnew System::EventHandler(this, &Login::tb_username_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// tb_password
			// 
			this->tb_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->tb_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_password->ForeColor = System::Drawing::Color::White;
			this->tb_password->Location = System::Drawing::Point(845, 376);
			this->tb_password->MaxLength = 25;
			this->tb_password->Name = L"tb_password";
			this->tb_password->Size = System::Drawing::Size(327, 34);
			this->tb_password->TabIndex = 2;
			this->tb_password->TextChanged += gcnew System::EventHandler(this, &Login::tb_password_TextChanged);
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->BackColor = System::Drawing::Color::Transparent;
			this->lbl_username->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_username->ForeColor = System::Drawing::Color::Snow;
			this->lbl_username->Location = System::Drawing::Point(852, 232);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(150, 36);
			this->lbl_username->TabIndex = 3;
			this->lbl_username->Text = L"Username";
			// 
			// lbl_password
			// 
			this->lbl_password->AutoSize = true;
			this->lbl_password->BackColor = System::Drawing::Color::Transparent;
			this->lbl_password->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_password->ForeColor = System::Drawing::Color::Snow;
			this->lbl_password->Location = System::Drawing::Point(852, 331);
			this->lbl_password->Name = L"lbl_password";
			this->lbl_password->Size = System::Drawing::Size(147, 36);
			this->lbl_password->TabIndex = 4;
			this->lbl_password->Text = L"Password";
			// 
			// btn_login
			// 
			this->btn_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->btn_login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_login->Location = System::Drawing::Point(869, 438);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(274, 59);
			this->btn_login->TabIndex = 5;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = false;
			this->btn_login->Click += gcnew System::EventHandler(this, &Login::btn_login_Click);
			// 
			// lb_title
			// 
			this->lb_title->AutoSize = true;
			this->lb_title->BackColor = System::Drawing::Color::Transparent;
			this->lb_title->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_title->ForeColor = System::Drawing::Color::White;
			this->lb_title->Location = System::Drawing::Point(998, 22);
			this->lb_title->Name = L"lb_title";
			this->lb_title->Size = System::Drawing::Size(64, 36);
			this->lb_title->TabIndex = 6;
			this->lb_title->Text = L"AIS";
			// 
			// rb_lector
			// 
			this->rb_lector->AutoSize = true;
			this->rb_lector->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_lector->ForeColor = System::Drawing::Color::White;
			this->rb_lector->Location = System::Drawing::Point(906, 128);
			this->rb_lector->Name = L"rb_lector";
			this->rb_lector->Size = System::Drawing::Size(77, 22);
			this->rb_lector->TabIndex = 8;
			this->rb_lector->TabStop = true;
			this->rb_lector->Text = L"Lector";
			this->rb_lector->UseVisualStyleBackColor = true;
			this->rb_lector->CheckedChanged += gcnew System::EventHandler(this, &Login::user_CheckedChanged);
			// 
			// rb_student
			// 
			this->rb_student->AutoSize = true;
			this->rb_student->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_student->ForeColor = System::Drawing::Color::Transparent;
			this->rb_student->Location = System::Drawing::Point(906, 182);
			this->rb_student->Name = L"rb_student";
			this->rb_student->Size = System::Drawing::Size(86, 22);
			this->rb_student->TabIndex = 9;
			this->rb_student->TabStop = true;
			this->rb_student->Text = L"Student";
			this->rb_student->UseVisualStyleBackColor = true;
			this->rb_student->CheckedChanged += gcnew System::EventHandler(this, &Login::user_CheckedChanged);
			// 
			// lb_subtitle
			// 
			this->lb_subtitle->AutoSize = true;
			this->lb_subtitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_subtitle->ForeColor = System::Drawing::Color::Transparent;
			this->lb_subtitle->Location = System::Drawing::Point(940, 78);
			this->lb_subtitle->Name = L"lb_subtitle";
			this->lb_subtitle->Size = System::Drawing::Size(170, 24);
			this->lb_subtitle->TabIndex = 10;
			this->lb_subtitle->Text = L"Choose the user:";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1330, 653);
			this->Controls->Add(this->lb_subtitle);
			this->Controls->Add(this->rb_student);
			this->Controls->Add(this->rb_lector);
			this->Controls->Add(this->lb_title);
			this->Controls->Add(this->btn_login);
			this->Controls->Add(this->lbl_password);
			this->Controls->Add(this->lbl_username);
			this->Controls->Add(this->tb_password);
			this->Controls->Add(this->tb_username);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"Login";
			this->Text = L" Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//public: System::Void checkLogin() {
		//try {
		//StreamReader^ file = File::OpenText("C:\\Users\\Serhii\\Desktop\\university works\\III cemester\\Final_pactice\\database\\Administrator.txt");
		//int n = file->Read();
		//String^ username = file->Read();

		//}
		//catch(Exception^ e){
		//	MessageBox::Show(this, "File hasn't been opened", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//}


	//}
	private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
		if (option == 1) {
			if (this->tb_username->Text == "lector" && this->tb_password->Text == "lector") {
				Lector_page^ lector = gcnew Lector_page;
				lector->Show();
			}
			else {
				MessageBox::Show(this, "Wrong username or password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else if(option == 2){
			if (this->tb_username->Text == "student" && this->tb_password->Text == "student") {
				Student_page^ student = gcnew Student_page;
				student->Show();
			}
			else {
				MessageBox::Show(this, "Wrong username or password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show(this, "Wrong username or password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void tb_username_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void tb_password_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void user_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->rb_lector->Checked) option = 1;
		else if (this->rb_student->Checked) option = 2;
	}
};
};
