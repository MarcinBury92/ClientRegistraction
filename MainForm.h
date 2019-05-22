#pragma once
#include "ApplicationForm.h"
namespace ClientRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BtnLogin;
	protected:
	private: System::Windows::Forms::Button^  BtnAnuluj;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  TxtUser;
	private: System::Windows::Forms::TextBox^  TxtPassword;



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
			this->BtnLogin = (gcnew System::Windows::Forms::Button());
			this->BtnAnuluj = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxtUser = (gcnew System::Windows::Forms::TextBox());
			this->TxtPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// BtnLogin
			// 
			this->BtnLogin->Location = System::Drawing::Point(172, 157);
			this->BtnLogin->Name = L"BtnLogin";
			this->BtnLogin->Size = System::Drawing::Size(75, 23);
			this->BtnLogin->TabIndex = 0;
			this->BtnLogin->Text = L"Log in";
			this->BtnLogin->UseVisualStyleBackColor = true;
			this->BtnLogin->Click += gcnew System::EventHandler(this, &MainForm::BtnLogin_Click);
			// 
			// BtnAnuluj
			// 
			this->BtnAnuluj->Location = System::Drawing::Point(57, 157);
			this->BtnAnuluj->Name = L"BtnAnuluj";
			this->BtnAnuluj->Size = System::Drawing::Size(75, 23);
			this->BtnAnuluj->TabIndex = 1;
			this->BtnAnuluj->Text = L"Anuluj";
			this->BtnAnuluj->UseVisualStyleBackColor = true;
			this->BtnAnuluj->Click += gcnew System::EventHandler(this, &MainForm::BtnAnuluj_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(21, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username:";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(26, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password:";
			// 
			// TxtUser
			// 
			this->TxtUser->Location = System::Drawing::Point(147, 46);
			this->TxtUser->Name = L"TxtUser";
			this->TxtUser->Size = System::Drawing::Size(100, 20);
			this->TxtUser->TabIndex = 4;
			this->TxtUser->Text = L"admin";
			// 
			// TxtPassword
			// 
			this->TxtPassword->Location = System::Drawing::Point(147, 90);
			this->TxtPassword->Name = L"TxtPassword";
			this->TxtPassword->PasswordChar = '*';
			this->TxtPassword->Size = System::Drawing::Size(100, 20);
			this->TxtPassword->TabIndex = 5;
			this->TxtPassword->Text = L"123";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(296, 225);
			this->Controls->Add(this->TxtPassword);
			this->Controls->Add(this->TxtUser);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnAnuluj);
			this->Controls->Add(this->BtnLogin);
			this->Name = L"MainForm";
			this->Text = L"                                Login";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void BtnAnuluj_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Close();


}
private: System::Void BtnLogin_Click(System::Object^  sender, System::EventArgs^  e) {


	String^ Configuration = L"datasource=localhost;port=3306;username=root;password=Marcin691;database=office";
	MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
	MySqlCommand^ question = gcnew MySqlCommand("select User_ID from users where User_Name ='"+TxtUser->Text+"' and Password ='"+TxtPassword->Text+"';", LinkBase);
	MySqlDataReader^ readBase;
	try{
		LinkBase->Open();
		readBase = question->ExecuteReader();
		if (readBase->Read()){
			int ID_User = readBase->GetInt32(0);
			this->Hide();
			ApplicationForm^ AppForm = gcnew ApplicationForm(ID_User);
			AppForm->ShowDialog();
			this->Close();
		}
		else
		{
			MessageBox::Show("Incorrect username or password. ");
		}

	}
	catch (Exception^ Statement){

		MessageBox::Show(Statement->Message);

	}
	LinkBase->Close();
	


}
};
}
