#pragma once
#define FORM1_H
#define FORM2_H
#define FORM3_H
#define FORM4_H
#define FORM5_H
#define FORM6_H
#include "Form1.h"
#include "Form3.h"
#include "Form4.h"
#include "Form5.h"
#include "Form6.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			panelmyaccount->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Panel^ panelmyaccount;
	public:
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::TextBox^ newpassword2;

	private: System::Windows::Forms::TextBox^ newpassword1;

	private: System::Windows::Forms::TextBox^ currentpassword;

	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	public:

	public:
		System::String^ str1 = gcnew String("");
		Form2(String^data)
		{
			InitializeComponent();
			panelmyaccount->Hide();
			username->Text = data;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exitX;
	protected:

	private: System::Windows::Forms::Button^ myaccount;
	private: System::Windows::Forms::Button^ createpassword;
	private: System::Windows::Forms::Button^ addpassword;
	private: System::Windows::Forms::Button^ findaccountsapps;
	private: System::Windows::Forms::Button^ findaccountsemail;




















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
			this->exitX = (gcnew System::Windows::Forms::Button());
			this->myaccount = (gcnew System::Windows::Forms::Button());
			this->createpassword = (gcnew System::Windows::Forms::Button());
			this->addpassword = (gcnew System::Windows::Forms::Button());
			this->findaccountsapps = (gcnew System::Windows::Forms::Button());
			this->findaccountsemail = (gcnew System::Windows::Forms::Button());
			this->panelmyaccount = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->newpassword2 = (gcnew System::Windows::Forms::TextBox());
			this->newpassword1 = (gcnew System::Windows::Forms::TextBox());
			this->currentpassword = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelmyaccount->SuspendLayout();
			this->SuspendLayout();
			// 
			// exitX
			// 
			this->exitX->BackColor = System::Drawing::Color::Red;
			this->exitX->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->exitX->FlatAppearance->BorderSize = 0;
			this->exitX->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->exitX->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->exitX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitX->ForeColor = System::Drawing::Color::Black;
			this->exitX->Location = System::Drawing::Point(771, 0);
			this->exitX->Name = L"exitX";
			this->exitX->Size = System::Drawing::Size(34, 32);
			this->exitX->TabIndex = 0;
			this->exitX->Text = L"X";
			this->exitX->UseVisualStyleBackColor = false;
			this->exitX->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// myaccount
			// 
			this->myaccount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->myaccount->FlatAppearance->BorderSize = 0;
			this->myaccount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->myaccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->myaccount->ForeColor = System::Drawing::Color::White;
			this->myaccount->Location = System::Drawing::Point(296, 0);
			this->myaccount->Name = L"myaccount";
			this->myaccount->Size = System::Drawing::Size(188, 28);
			this->myaccount->TabIndex = 1;
			this->myaccount->Text = L"My Account";
			this->myaccount->UseVisualStyleBackColor = false;
			this->myaccount->Click += gcnew System::EventHandler(this, &Form2::myaccount_Click);
			// 
			// createpassword
			// 
			this->createpassword->BackColor = System::Drawing::Color::Blue;
			this->createpassword->FlatAppearance->BorderSize = 0;
			this->createpassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->createpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createpassword->ForeColor = System::Drawing::Color::White;
			this->createpassword->Location = System::Drawing::Point(57, 115);
			this->createpassword->Name = L"createpassword";
			this->createpassword->Size = System::Drawing::Size(239, 70);
			this->createpassword->TabIndex = 2;
			this->createpassword->Text = L"CREATE A NEW PASSWORD";
			this->createpassword->UseVisualStyleBackColor = false;
			this->createpassword->Click += gcnew System::EventHandler(this, &Form2::createpassword_Click);
			// 
			// addpassword
			// 
			this->addpassword->BackColor = System::Drawing::Color::Blue;
			this->addpassword->FlatAppearance->BorderSize = 0;
			this->addpassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addpassword->ForeColor = System::Drawing::Color::White;
			this->addpassword->Location = System::Drawing::Point(489, 115);
			this->addpassword->Name = L"addpassword";
			this->addpassword->Size = System::Drawing::Size(239, 70);
			this->addpassword->TabIndex = 3;
			this->addpassword->Text = L"ADD A NEW PASSWORD";
			this->addpassword->UseVisualStyleBackColor = false;
			this->addpassword->Click += gcnew System::EventHandler(this, &Form2::addpassword_Click);
			// 
			// findaccountsapps
			// 
			this->findaccountsapps->BackColor = System::Drawing::Color::Blue;
			this->findaccountsapps->FlatAppearance->BorderSize = 0;
			this->findaccountsapps->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->findaccountsapps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->findaccountsapps->ForeColor = System::Drawing::Color::White;
			this->findaccountsapps->Location = System::Drawing::Point(57, 292);
			this->findaccountsapps->Name = L"findaccountsapps";
			this->findaccountsapps->Size = System::Drawing::Size(239, 70);
			this->findaccountsapps->TabIndex = 4;
			this->findaccountsapps->Text = L"FIND ACCOUNTS LINKED TO AN APPLICATON";
			this->findaccountsapps->UseVisualStyleBackColor = false;
			this->findaccountsapps->Click += gcnew System::EventHandler(this, &Form2::findaccountsapps_Click);
			// 
			// findaccountsemail
			// 
			this->findaccountsemail->BackColor = System::Drawing::Color::Blue;
			this->findaccountsemail->FlatAppearance->BorderSize = 0;
			this->findaccountsemail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->findaccountsemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->findaccountsemail->ForeColor = System::Drawing::Color::White;
			this->findaccountsemail->Location = System::Drawing::Point(489, 292);
			this->findaccountsemail->Name = L"findaccountsemail";
			this->findaccountsemail->Size = System::Drawing::Size(239, 70);
			this->findaccountsemail->TabIndex = 5;
			this->findaccountsemail->Text = L"FIND ACCOUNTS LINKED TO A E-MAIL";
			this->findaccountsemail->UseVisualStyleBackColor = false;
			this->findaccountsemail->Click += gcnew System::EventHandler(this, &Form2::findaccountsemail_Click);
			// 
			// panelmyaccount
			// 
			this->panelmyaccount->BackColor = System::Drawing::Color::Black;
			this->panelmyaccount->Controls->Add(this->linkLabel1);
			this->panelmyaccount->Controls->Add(this->newpassword2);
			this->panelmyaccount->Controls->Add(this->newpassword1);
			this->panelmyaccount->Controls->Add(this->currentpassword);
			this->panelmyaccount->Controls->Add(this->username);
			this->panelmyaccount->Controls->Add(this->button1);
			this->panelmyaccount->Controls->Add(this->checkBox1);
			this->panelmyaccount->Controls->Add(this->label5);
			this->panelmyaccount->Controls->Add(this->label4);
			this->panelmyaccount->Controls->Add(this->label3);
			this->panelmyaccount->Controls->Add(this->label2);
			this->panelmyaccount->Controls->Add(this->label1);
			this->panelmyaccount->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelmyaccount->Location = System::Drawing::Point(0, 0);
			this->panelmyaccount->Name = L"panelmyaccount";
			this->panelmyaccount->Size = System::Drawing::Size(804, 484);
			this->panelmyaccount->TabIndex = 6;
			this->panelmyaccount->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form2::panelmyaccount_Paint);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(7, 10);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(64, 13);
			this->linkLabel1->TabIndex = 11;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"<-- Go Back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form2::linkLabel1_LinkClicked);
			// 
			// newpassword2
			// 
			this->newpassword2->Location = System::Drawing::Point(433, 290);
			this->newpassword2->Name = L"newpassword2";
			this->newpassword2->Size = System::Drawing::Size(207, 20);
			this->newpassword2->TabIndex = 10;
			this->newpassword2->UseSystemPasswordChar = true;
			// 
			// newpassword1
			// 
			this->newpassword1->Location = System::Drawing::Point(433, 226);
			this->newpassword1->Name = L"newpassword1";
			this->newpassword1->Size = System::Drawing::Size(207, 20);
			this->newpassword1->TabIndex = 9;
			this->newpassword1->UseSystemPasswordChar = true;
			// 
			// currentpassword
			// 
			this->currentpassword->Location = System::Drawing::Point(433, 165);
			this->currentpassword->Name = L"currentpassword";
			this->currentpassword->Size = System::Drawing::Size(207, 20);
			this->currentpassword->TabIndex = 8;
			this->currentpassword->UseSystemPasswordChar = true;
			// 
			// username
			// 
			this->username->Location = System::Drawing::Point(433, 113);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(207, 20);
			this->username->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(305, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 47);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Change Username and Password";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click_1);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::Blue;
			this->checkBox1->Location = System::Drawing::Point(296, 345);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(184, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"I am Changing my Password";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form2::checkBox1_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(131, 292);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Re-Enter New Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(131, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"New Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(131, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Current Password";
			this->label3->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(131, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(300, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MY ACCOUNT";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(804, 484);
			this->Controls->Add(this->panelmyaccount);
			this->Controls->Add(this->findaccountsemail);
			this->Controls->Add(this->findaccountsapps);
			this->Controls->Add(this->addpassword);
			this->Controls->Add(this->createpassword);
			this->Controls->Add(this->myaccount);
			this->Controls->Add(this->exitX);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form2";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form2::Form2_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form2::Form2_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form2::Form2_MouseUp);
			this->panelmyaccount->ResumeLayout(false);
			this->panelmyaccount->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool dragging;
		Point offset;
	private: System::Void Form2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void Form2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}
	private: System::Void Form2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (dragging) {
			Point currentScreenPosistion = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPosistion.X - offset.X, currentScreenPosistion.Y - offset.Y);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void myaccount_Click(System::Object^ sender, System::EventArgs^ e) {
		panelmyaccount->Show();
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	panelmyaccount->Hide();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		button1->Enabled = true;
	}
	else {
		button1->Enabled = false;
	}
}

private: System::Void addpassword_Click(System::Object^ sender, System::EventArgs^ e) {
	Form3^ obj1 = gcnew Form3(this);
	this->Hide();
	obj1->Show();
}
private: System::Void panelmyaccount_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void createpassword_Click(System::Object^ sender, System::EventArgs^ e) {
	Form4^ obj2 = gcnew Form4(this);
	this->Hide();
	obj2->Show();
}
private: System::Void findaccountsapps_Click(System::Object^ sender, System::EventArgs^ e) {
	Form5^ obj3 = gcnew Form5(this);
	this->Hide();
	obj3->Show();
}
private: System::Void findaccountsemail_Click(System::Object^ sender, System::EventArgs^ e) {
	Form6^ obj4 = gcnew Form6(this);
	this->Hide();
	obj4->Show();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->username->Text !="" && this->currentpassword->Text != "" && this->newpassword1->Text != "" && this->newpassword2->Text != "") {
		


		/*/String^ connstring = L"datasource=localhost;port=3306;username=root;password=""";
		MySqlConnection^ connDataBase = gcnew MySqlConnection(connstring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from password_manager.login where loginid='" + this->username->Text + "';", connDataBase);
		MySqlDataReader^ myReader;
		connDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();/*/





		if (this->newpassword1->Text == this->newpassword2->Text) {
		
			//saving in mysql database
			String^ connstring = L"datasource=localhost;port=3306;username=root;password=""";
			MySqlConnection^ connDataBase = gcnew MySqlConnection(connstring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update password_manager.login set password='" + this->newpassword1->Text + "' where loginid = '" + this->username->Text + "' and password = '" + this->currentpassword->Text + "' ;", connDataBase);
			MySqlDataReader^ myReader;
			try {
				connDataBase->Open();
				myReader = cmdDataBase->ExecuteReader();
				MessageBox::Show("Password updated Sucessfully!!", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch(Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

		}
		else {
			MessageBox::Show("Password Mismatched.", "Oops!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	else {
		MessageBox::Show("Please fill all the fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
