#pragma once
#define FORM1_H
#define FORM2_H
#define FORM3_H
#define FORM4_H
#define FORM5_H
#define FORM6_H
#include "Form1.h"
#include "Form2.h"
#include "Form3.h"
#include "Form5.h"
#include "Form6.h"
#include "sha256.h"
#include <time.h>


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	public:
		Form^ obj;
		Form4(Form^ obj2)
		{
			obj = obj2;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ loginid;
	private: System::Windows::Forms::TextBox^ emailid;
	private: System::Windows::Forms::TextBox^ websiteurl;
	private: System::Windows::Forms::TextBox^ applicationname;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ exitX;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->loginid = (gcnew System::Windows::Forms::TextBox());
			this->emailid = (gcnew System::Windows::Forms::TextBox());
			this->websiteurl = (gcnew System::Windows::Forms::TextBox());
			this->applicationname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->exitX = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(122, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(278, 65);
			this->button1->TabIndex = 24;
			this->button1->Text = L"CREATE PASSWORD AND ADD ACCOUNT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// loginid
			// 
			this->loginid->Location = System::Drawing::Point(286, 318);
			this->loginid->Name = L"loginid";
			this->loginid->Size = System::Drawing::Size(191, 20);
			this->loginid->TabIndex = 22;
			// 
			// emailid
			// 
			this->emailid->Location = System::Drawing::Point(286, 258);
			this->emailid->Name = L"emailid";
			this->emailid->Size = System::Drawing::Size(191, 20);
			this->emailid->TabIndex = 21;
			// 
			// websiteurl
			// 
			this->websiteurl->Location = System::Drawing::Point(286, 196);
			this->websiteurl->Name = L"websiteurl";
			this->websiteurl->Size = System::Drawing::Size(191, 20);
			this->websiteurl->TabIndex = 20;
			// 
			// applicationname
			// 
			this->applicationname->Location = System::Drawing::Point(286, 137);
			this->applicationname->Name = L"applicationname";
			this->applicationname->Size = System::Drawing::Size(191, 20);
			this->applicationname->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(37, 322);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 16);
			this->label5->TabIndex = 17;
			this->label5->Text = L"LOGIN ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(37, 262);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 16);
			this->label4->TabIndex = 16;
			this->label4->Text = L"E-MAIL ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(37, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"WEBSITE URL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(37, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 16);
			this->label2->TabIndex = 14;
			this->label2->Text = L"APPLICATION NAME";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(99, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(321, 25);
			this->label1->TabIndex = 13;
			this->label1->Text = L"CREATE A NEW PASSWORD";
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
			this->exitX->Location = System::Drawing::Point(481, 1);
			this->exitX->Name = L"exitX";
			this->exitX->Size = System::Drawing::Size(34, 32);
			this->exitX->TabIndex = 25;
			this->exitX->Text = L"X";
			this->exitX->UseVisualStyleBackColor = false;
			this->exitX->Click += gcnew System::EventHandler(this, &Form4::exitX_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(12, 14);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(75, 13);
			this->linkLabel1->TabIndex = 26;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"<-- Go Back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form4::linkLabel1_LinkClicked);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(515, 490);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->exitX);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->loginid);
			this->Controls->Add(this->emailid);
			this->Controls->Add(this->websiteurl);
			this->Controls->Add(this->applicationname);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->applicationname->Text != "" && this->websiteurl->Text != "" && this->emailid->Text != "" && this->loginid->Text != "") {

			static const char alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz" "`~!@#$^&*()-_?+={}[]|':.,></" "%" "\'";
			srand(time(0));
			int n = 16;
			std::string strpass;
			for (int z = 0; z < n; z++) { //generate string of length n
				strpass = strpass + alphanum[rand() % sizeof(alphanum) - 1]; //get random character from the given list
			}

			// XOR encryption of generated random password
			char key[6] = { 'A', 'S', 'D' , 'F' , 'G' , 'H'}; //Secert key for Encryption.
			std::string str = strpass;

			for (int i = 0; i < strpass.size(); i++)
				str[i] = strpass[i] ^ key[i % (sizeof(key) / sizeof(char))];

			//std::string to System::String conversion
			String^ output = gcnew String(str.c_str());

			//Insert in database using mysql 
			String^ connstring = L"datasource=localhost;port=3306;username=root;password=""";
			MySqlConnection^ connDataBase = gcnew MySqlConnection(connstring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into password_manager.locker (applicationname,url,loginid,emailid,password) values ('" + this->applicationname->Text + "','" + this->websiteurl->Text + "','" + this->emailid->Text + "','" + this->loginid->Text + "','" + output + "');", connDataBase);
			MySqlDataReader^ myReader;
			connDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			MessageBox::Show("Account added Sucessfully!!", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Hide();
			obj->Show();
		}
		else {
			MessageBox::Show("Please fill all the fields", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   //back button
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();
	obj->Show();
}
	   //exit button
private: System::Void exitX_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
