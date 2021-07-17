#pragma once
#define FORM1_H
#define FORM2_H
#define FORM3_H
#define FORM4_H
#define FORM5_H
#define FORM6_H
#include "Form2.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ loginusername;
	private: System::Windows::Forms::TextBox^ loginpassword;
	private: System::Windows::Forms::Button^ login;
	private: System::Windows::Forms::Label^ designedbypranav;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ exit;


	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->username = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->loginusername = (gcnew System::Windows::Forms::TextBox());
			this->loginpassword = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->designedbypranav = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->BackColor = System::Drawing::Color::Transparent;
			this->username->Cursor = System::Windows::Forms::Cursors::Default;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->ForeColor = System::Drawing::SystemColors::Window;
			this->username->Location = System::Drawing::Point(57, 65);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(59, 13);
			this->username->TabIndex = 0;
			this->username->Text = L"Usename";
			this->username->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->BackColor = System::Drawing::Color::Transparent;
			this->password->Cursor = System::Windows::Forms::Cursors::Default;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::Color::White;
			this->password->Location = System::Drawing::Point(57, 101);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(61, 13);
			this->password->TabIndex = 1;
			this->password->Text = L"Password";
			// 
			// loginusername
			// 
			this->loginusername->Cursor = System::Windows::Forms::Cursors::Default;
			this->loginusername->Location = System::Drawing::Point(163, 62);
			this->loginusername->Name = L"loginusername";
			this->loginusername->Size = System::Drawing::Size(156, 20);
			this->loginusername->TabIndex = 2;
			this->loginusername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::loginusername_KeyDown);
			// 
			// loginpassword
			// 
			this->loginpassword->Cursor = System::Windows::Forms::Cursors::Default;
			this->loginpassword->Location = System::Drawing::Point(163, 101);
			this->loginpassword->Name = L"loginpassword";
			this->loginpassword->Size = System::Drawing::Size(156, 20);
			this->loginpassword->TabIndex = 3;
			this->loginpassword->UseSystemPasswordChar = true;
			this->loginpassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::loginpassword_KeyDown);
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::Color::Blue;
			this->login->Cursor = System::Windows::Forms::Cursors::Default;
			this->login->FlatAppearance->BorderSize = 0;
			this->login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login->ForeColor = System::Drawing::Color::White;
			this->login->Location = System::Drawing::Point(60, 149);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(93, 39);
			this->login->TabIndex = 4;
			this->login->Text = L"login";
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &Form1::login_Click);
			// 
			// designedbypranav
			// 
			this->designedbypranav->AutoSize = true;
			this->designedbypranav->BackColor = System::Drawing::Color::Transparent;
			this->designedbypranav->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->designedbypranav->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->designedbypranav->Location = System::Drawing::Point(272, 211);
			this->designedbypranav->Name = L"designedbypranav";
			this->designedbypranav->Size = System::Drawing::Size(121, 13);
			this->designedbypranav->TabIndex = 5;
			this->designedbypranav->Text = L"Designed by Pranav";
			this->designedbypranav->UseWaitCursor = true;
			this->designedbypranav->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(55, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(278, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Password Manager Login";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_2);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::Blue;
			this->exit->Cursor = System::Windows::Forms::Cursors::Default;
			this->exit->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->exit->FlatAppearance->BorderSize = 0;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->ForeColor = System::Drawing::Color::White;
			this->exit->Location = System::Drawing::Point(222, 149);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(97, 39);
			this->exit->TabIndex = 7;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Form1::exit_Click);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(405, 233);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->designedbypranav);
			this->Controls->Add(this->login);
			this->Controls->Add(this->loginpassword);
			this->Controls->Add(this->loginusername);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PASSWORD MANAGER";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connstring = L"datasource=localhost;port=3306;username=root;password=""";
		MySqlConnection^ connDataBase = gcnew MySqlConnection(connstring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from password_manager.login where loginid='" + this->loginusername->Text + "' and password='" + this->loginpassword->Text + "';", connDataBase);
		MySqlDataReader^ myReader;
		try {
			connDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int count = 0;
			while (myReader->Read()) {
				count = count + 1;
			}
			if (count == 1) {
				System::String^ str = gcnew String("");
				str = loginusername->Text;
				MessageBox::Show("Access Granted!", "sign in sucessfull", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Hide();
				Form2^ f2 = gcnew Form2(str);
				f2->Show();
			}
			else if (count == 0) {
				MessageBox::Show("Incorrect Username or Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (loginusername->Text == "" || loginpassword->Text == "") {
				MessageBox::Show("Username or Password Cannot be Empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	   bool dragging;
	   Point offset;
	   // Disable Dragging
private: System::Void Form1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}
	   // Enable Dragging and getting mouse position
private: System::Void Form1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}
	   // Actual Application Movement Upon Dragging
private: System::Void Form1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (dragging) {
		Point currentScreenPosistion = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosistion.X - offset.X, currentScreenPosistion.Y - offset.Y);
	}
}
private: System::Void loginusername_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		loginpassword->Focus();
	}
}
private: System::Void loginpassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		login->PerformClick();
	}
}

};
}
