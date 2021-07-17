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
#include "Form4.h"
#include "Form5.h"
#include "string"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace Runtime::InteropServices;

	/// <summary>
	/// Summary for Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{
	public:
		Form6(void)
		{
			InitializeComponent();
			panel1->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Panel^ panel3;
	public:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	public:
		   Form^ obj;
		Form6(Form^ obj4)
		{
			obj = obj4;
			InitializeComponent();
			panel1->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
		void MarshalString(String^ s, std::string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	public:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



		   

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ emailsearchbox;
	protected:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ exitX;
	private: System::Windows::Forms::Label^ label1;

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
			this->emailsearchbox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->exitX = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(184, 259);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 57);
			this->button1->TabIndex = 40;
			this->button1->Text = L"SEARCH";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form6::button1_Click);
			// 
			// emailsearchbox
			// 
			this->emailsearchbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailsearchbox->Location = System::Drawing::Point(273, 190);
			this->emailsearchbox->Name = L"emailsearchbox";
			this->emailsearchbox->Size = System::Drawing::Size(208, 20);
			this->emailsearchbox->TabIndex = 39;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(222, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 25);
			this->label4->TabIndex = 38;
			this->label4->Text = L"TO AN E-MAIL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(148, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 37;
			this->label2->Text = L"E-MAIL ID";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(1, 16);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(75, 13);
			this->linkLabel1->TabIndex = 36;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"<-- Go Back";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form6::linkLabel1_LinkClicked_1);
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
			this->exitX->Location = System::Drawing::Point(564, 3);
			this->exitX->Name = L"exitX";
			this->exitX->Size = System::Drawing::Size(34, 32);
			this->exitX->TabIndex = 35;
			this->exitX->Text = L"X";
			this->exitX->UseVisualStyleBackColor = false;
			this->exitX->Click += gcnew System::EventHandler(this, &Form6::exitX_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(159, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 25);
			this->label1->TabIndex = 34;
			this->label1->Text = L"FIND ACCOUNTS LINKED";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->linkLabel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(598, 399);
			this->panel1->TabIndex = 41;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(353, 383);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(242, 1);
			this->panel3->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(352, 358);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(243, 19);
			this->textBox2->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(9, 383);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(227, 1);
			this->panel2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(8, 358);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 19);
			this->textBox1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Blue;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(242, 349);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 38);
			this->button2->TabIndex = 6;
			this->button2->Text = L">>DECRYPT>>";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form6::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(35, 59);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(535, 276);
			this->dataGridView1->TabIndex = 1;
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(2, 7);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(71, 13);
			this->linkLabel2->TabIndex = 0;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"<--Go Back";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form6::linkLabel2_LinkClicked);
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(598, 399);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->emailsearchbox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->exitX);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form6";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitX_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void linkLabel1_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();
	obj->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->emailsearchbox->Text != "") {
		panel1->Show();


		String^ connstring = L"datasource=localhost;port=3306;username=root;password=""";
		MySqlConnection^ connDataBase = gcnew MySqlConnection(connstring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from password_manager.locker where emailid = '" + this->emailsearchbox->Text + "' ", connDataBase);

		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);

			if (dataGridView1->Rows->Count == 0) {
				panel1->Hide();
				MessageBox::Show("No Results Found!!", "0 Records!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}
	else {
		MessageBox::Show("Search box cannot be Empty.", "oops!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	panel1->Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string str; //Declaring null std::string 

		//converting system string to std::string
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(this->textBox1->Text)).ToPointer();
	str = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	// XOR decryption for user entered password
	char key[6] = { 'A', 'S', 'D' , 'F' , 'G' , 'H' }; //Secert key for Encryption.
	std::string strpass = str;

	for (int i = 0; i < str.size(); i++)
		strpass[i] = str[i] ^ key[i % (sizeof(key) / sizeof(char))];

	//converting std::string to system string
	String^ output = gcnew String(strpass.c_str());

	this->textBox2->Text = output;
}
};
}
