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

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::Windows::Forms::Label^  label2;
		System::Windows::Forms::TextBox^  TxtUser;
	    System::Windows::Forms::TextBox^  TxtPassword;
        System::Windows::Forms::Label^  label1;
	    System::Windows::Forms::PictureBox^  pictureBox1;

			 System::Windows::Forms::PictureBox^  pictureBox2;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxtUser = (gcnew System::Windows::Forms::TextBox());
			this->TxtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoEllipsis = true;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(26, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 27);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password:";
			this->label2->UseCompatibleTextRendering = true;
			// 
			// TxtUser
			// 
			this->TxtUser->BackColor = System::Drawing::Color::White;
			this->TxtUser->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TxtUser->Location = System::Drawing::Point(147, 41);
			this->TxtUser->Name = L"TxtUser";
			this->TxtUser->ShortcutsEnabled = false;
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
			this->TxtPassword->TabIndex = 4;
			this->TxtPassword->Text = L"123";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(17, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Username:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 151);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(72, 72);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(175, 151);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(72, 72);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MainForm::pictureBox2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(343, 262);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TxtPassword);
			this->Controls->Add(this->TxtUser);
			this->Controls->Add(this->label2);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"                                Login";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		label1->BackColor = Color::Transparent;
		label2->BackColor = Color::Transparent;
}
private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ Configuration = L"datasource=localhost;port=3306;username=root;password=Marcin691;database=office";
	MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
	MySqlCommand^ question = gcnew MySqlCommand("select User_ID from users where User_Name ='" + TxtUser->Text + "' and Password ='" + TxtPassword->Text + "';", LinkBase);
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
