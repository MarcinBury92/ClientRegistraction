#pragma once

namespace ClientRegistration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ApplicationForm
	/// </summary>
	public ref class ApplicationForm : public System::Windows::Forms::Form
	{
	public:
		int ID_User;
private: System::Windows::Forms::GroupBox^  GroupBox1;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  TxtE6End;
private: System::Windows::Forms::TextBox^  TxtE6Start;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TextBox^  TxtE5End;
private: System::Windows::Forms::TextBox^  TxtE5Start;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::TextBox^  TxtE4End;
private: System::Windows::Forms::TextBox^  TxtE4Start;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  TxtE3End;
private: System::Windows::Forms::TextBox^  TxtE3Start;
private: System::Windows::Forms::TextBox^  TxtE2End;
private: System::Windows::Forms::TextBox^  TxtE2Start;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::TextBox^  TxtE1End;
private: System::Windows::Forms::TextBox^  TxtE1Start;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::DataGridView^  DG_Service;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::TextBox^  TxtS_Search;
private: System::Windows::Forms::Label^  Event;
private: System::Windows::Forms::Button^  BtnS_Add;
private: System::Windows::Forms::Button^  BtnS_Modify;
private: System::Windows::Forms::Button^  BtnS_Delete;
private: System::Windows::Forms::TextBox^  TxtS_Description;
private: System::Windows::Forms::TextBox^  TxtS_Time;
private: System::Windows::Forms::TextBox^  TxtS_Price;
private: System::Windows::Forms::TextBox^  TxtS_Name;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::TextBox^  TxtES_Surname;
private: System::Windows::Forms::TextBox^  TxtES_Name;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::DataGridView^  DGES_AddService;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::DataGridView^  DGES_Services;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::DataGridView^  DGES_Employees;
private: System::Windows::Forms::Button^  BtnES_Search;
private: System::Windows::Forms::TextBox^  TxtES_Search;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::Button^  BtnC_Delete;
private: System::Windows::Forms::GroupBox^  GB_Clients;
private: System::Windows::Forms::MaskedTextBox^  TxtC_Zipcode;
private: System::Windows::Forms::TextBox^  TxtC_City;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  TxtC_Number;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  TxtC_Street;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::TextBox^  TxtC_Phone;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  TxtC_Email;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::TextBox^  TxtC_Surname;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  TxtC_Name;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Button^  BtnC_Modify;
private: System::Windows::Forms::Button^  BtnC_Add;
private: System::Windows::Forms::DataGridView^  DGClients;
private: System::Windows::Forms::Button^  BtnC_Search;
private: System::Windows::Forms::TextBox^  TxtC_Search;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::Button^  BtnR_Add;
private: System::Windows::Forms::Button^  BtnR_Modify;
private: System::Windows::Forms::Button^  BtnR_Delete;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::TextBox^  TxtRL_Termin;
private: System::Windows::Forms::TextBox^  TxtRL_Service;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::TextBox^  TxtRL_Client;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::MonthCalendar^  Calendar;
private: System::Windows::Forms::GroupBox^  GBox_Hours;
private: System::Windows::Forms::DataGridView^  DGR_Employee;
private: System::Windows::Forms::Button^  BtnRE_Search;
private: System::Windows::Forms::TextBox^  TxtR_Employee;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::DataGridView^  DGR_Client;
private: System::Windows::Forms::Button^  BtnRC_Search;
private: System::Windows::Forms::TextBox^  TxtR_Client;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::DataGridView^  DGR_Service;
private: System::Windows::Forms::Button^  BtnRS_Search;
private: System::Windows::Forms::TextBox^  TxtR_Service;
private: System::Windows::Forms::Label^  label33;

	public:
		String^ Configuration = L"datasource=localhost;port=3306;username=root;password=Marcin691;database=office";
		ApplicationForm(int User)
		{
			InitializeComponent();
			ID_User = User;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ApplicationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  GroupBox;
	protected:

	private: System::Windows::Forms::TextBox^  TxtE_Login;
	private: System::Windows::Forms::Button^  BtnE_Add;
	private: System::Windows::Forms::Button^  BtnE_Delete;
	private: System::Windows::Forms::Button^  BtnE_Modify;
	private: System::Windows::Forms::TextBox^  TxtE_Name;
	private: System::Windows::Forms::TextBox^  TxtE_Surname;
	private: System::Windows::Forms::CheckBox^  ChbEEmployee;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  BtnE_Search;
	private: System::Windows::Forms::TextBox^  TxtE_Search;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  DG_Users;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  BtnP_Change;
	private: System::Windows::Forms::TextBox^  TxtP_RepearPassword;
	private: System::Windows::Forms::TextBox^  TxtP_NewPassword;
	private: System::Windows::Forms::TextBox^  TxtP_OldPassword;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage3;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->BtnR_Add = (gcnew System::Windows::Forms::Button());
			this->BtnR_Modify = (gcnew System::Windows::Forms::Button());
			this->BtnR_Delete = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->TxtRL_Termin = (gcnew System::Windows::Forms::TextBox());
			this->TxtRL_Service = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->TxtRL_Client = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->Calendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->GBox_Hours = (gcnew System::Windows::Forms::GroupBox());
			this->DGR_Employee = (gcnew System::Windows::Forms::DataGridView());
			this->BtnRE_Search = (gcnew System::Windows::Forms::Button());
			this->TxtR_Employee = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->DGR_Client = (gcnew System::Windows::Forms::DataGridView());
			this->BtnRC_Search = (gcnew System::Windows::Forms::Button());
			this->TxtR_Client = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->DGR_Service = (gcnew System::Windows::Forms::DataGridView());
			this->BtnRS_Search = (gcnew System::Windows::Forms::Button());
			this->TxtR_Service = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->BtnC_Delete = (gcnew System::Windows::Forms::Button());
			this->GB_Clients = (gcnew System::Windows::Forms::GroupBox());
			this->TxtC_Zipcode = (gcnew System::Windows::Forms::MaskedTextBox());
			this->TxtC_City = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->TxtC_Number = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->TxtC_Street = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->TxtC_Phone = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->TxtC_Email = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->TxtC_Surname = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->TxtC_Name = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->BtnC_Modify = (gcnew System::Windows::Forms::Button());
			this->BtnC_Add = (gcnew System::Windows::Forms::Button());
			this->DGClients = (gcnew System::Windows::Forms::DataGridView());
			this->BtnC_Search = (gcnew System::Windows::Forms::Button());
			this->TxtC_Search = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->TxtES_Surname = (gcnew System::Windows::Forms::TextBox());
			this->TxtES_Name = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->DGES_AddService = (gcnew System::Windows::Forms::DataGridView());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->DGES_Services = (gcnew System::Windows::Forms::DataGridView());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->DGES_Employees = (gcnew System::Windows::Forms::DataGridView());
			this->BtnES_Search = (gcnew System::Windows::Forms::Button());
			this->TxtES_Search = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->BtnS_Add = (gcnew System::Windows::Forms::Button());
			this->BtnS_Modify = (gcnew System::Windows::Forms::Button());
			this->BtnS_Delete = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->TxtS_Description = (gcnew System::Windows::Forms::TextBox());
			this->TxtS_Time = (gcnew System::Windows::Forms::TextBox());
			this->TxtS_Price = (gcnew System::Windows::Forms::TextBox());
			this->TxtS_Name = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->DG_Service = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->TxtS_Search = (gcnew System::Windows::Forms::TextBox());
			this->Event = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->GroupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TxtE6End = (gcnew System::Windows::Forms::TextBox());
			this->TxtE6Start = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->TxtE5End = (gcnew System::Windows::Forms::TextBox());
			this->TxtE5Start = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->TxtE4End = (gcnew System::Windows::Forms::TextBox());
			this->TxtE4Start = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->TxtE3End = (gcnew System::Windows::Forms::TextBox());
			this->TxtE3Start = (gcnew System::Windows::Forms::TextBox());
			this->TxtE2End = (gcnew System::Windows::Forms::TextBox());
			this->TxtE2Start = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TxtE1End = (gcnew System::Windows::Forms::TextBox());
			this->TxtE1Start = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->BtnE_Add = (gcnew System::Windows::Forms::Button());
			this->BtnE_Delete = (gcnew System::Windows::Forms::Button());
			this->BtnE_Modify = (gcnew System::Windows::Forms::Button());
			this->GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->TxtE_Login = (gcnew System::Windows::Forms::TextBox());
			this->TxtE_Name = (gcnew System::Windows::Forms::TextBox());
			this->TxtE_Surname = (gcnew System::Windows::Forms::TextBox());
			this->ChbEEmployee = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->BtnE_Search = (gcnew System::Windows::Forms::Button());
			this->TxtE_Search = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->DG_Users = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->BtnP_Change = (gcnew System::Windows::Forms::Button());
			this->TxtP_RepearPassword = (gcnew System::Windows::Forms::TextBox());
			this->TxtP_NewPassword = (gcnew System::Windows::Forms::TextBox());
			this->TxtP_OldPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGR_Employee))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGR_Client))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGR_Service))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->GB_Clients->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGClients))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGES_AddService))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGES_Services))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGES_Employees))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Service))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->GroupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->GroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Users))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-3, -3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(779, 419);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->BtnR_Add);
			this->tabPage6->Controls->Add(this->BtnR_Modify);
			this->tabPage6->Controls->Add(this->BtnR_Delete);
			this->tabPage6->Controls->Add(this->label38);
			this->tabPage6->Controls->Add(this->TxtRL_Termin);
			this->tabPage6->Controls->Add(this->TxtRL_Service);
			this->tabPage6->Controls->Add(this->label37);
			this->tabPage6->Controls->Add(this->TxtRL_Client);
			this->tabPage6->Controls->Add(this->label36);
			this->tabPage6->Controls->Add(this->Calendar);
			this->tabPage6->Controls->Add(this->GBox_Hours);
			this->tabPage6->Controls->Add(this->DGR_Employee);
			this->tabPage6->Controls->Add(this->BtnRE_Search);
			this->tabPage6->Controls->Add(this->TxtR_Employee);
			this->tabPage6->Controls->Add(this->label35);
			this->tabPage6->Controls->Add(this->DGR_Client);
			this->tabPage6->Controls->Add(this->BtnRC_Search);
			this->tabPage6->Controls->Add(this->TxtR_Client);
			this->tabPage6->Controls->Add(this->label34);
			this->tabPage6->Controls->Add(this->DGR_Service);
			this->tabPage6->Controls->Add(this->BtnRS_Search);
			this->tabPage6->Controls->Add(this->TxtR_Service);
			this->tabPage6->Controls->Add(this->label33);
			this->tabPage6->Location = System::Drawing::Point(4, 4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(771, 393);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Reservation";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// BtnR_Add
			// 
			this->BtnR_Add->Location = System::Drawing::Point(10, 349);
			this->BtnR_Add->Name = L"BtnR_Add";
			this->BtnR_Add->Size = System::Drawing::Size(152, 36);
			this->BtnR_Add->TabIndex = 22;
			this->BtnR_Add->Text = L"Add";
			this->BtnR_Add->UseVisualStyleBackColor = true;
			this->BtnR_Add->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnR_Add_Click);
			// 
			// BtnR_Modify
			// 
			this->BtnR_Modify->Location = System::Drawing::Point(88, 309);
			this->BtnR_Modify->Name = L"BtnR_Modify";
			this->BtnR_Modify->Size = System::Drawing::Size(75, 34);
			this->BtnR_Modify->TabIndex = 21;
			this->BtnR_Modify->Text = L"Modify";
			this->BtnR_Modify->UseVisualStyleBackColor = true;
			// 
			// BtnR_Delete
			// 
			this->BtnR_Delete->Location = System::Drawing::Point(9, 309);
			this->BtnR_Delete->Name = L"BtnR_Delete";
			this->BtnR_Delete->Size = System::Drawing::Size(75, 34);
			this->BtnR_Delete->TabIndex = 20;
			this->BtnR_Delete->Text = L"Delete";
			this->BtnR_Delete->UseVisualStyleBackColor = true;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(5, 265);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(45, 13);
			this->label38->TabIndex = 19;
			this->label38->Text = L"Termin :";
			// 
			// TxtRL_Termin
			// 
			this->TxtRL_Termin->Location = System::Drawing::Point(9, 283);
			this->TxtRL_Termin->Name = L"TxtRL_Termin";
			this->TxtRL_Termin->Size = System::Drawing::Size(154, 20);
			this->TxtRL_Termin->TabIndex = 18;
			// 
			// TxtRL_Service
			// 
			this->TxtRL_Service->Location = System::Drawing::Point(6, 232);
			this->TxtRL_Service->Name = L"TxtRL_Service";
			this->TxtRL_Service->Size = System::Drawing::Size(157, 20);
			this->TxtRL_Service->TabIndex = 17;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(7, 216);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(49, 13);
			this->label37->TabIndex = 16;
			this->label37->Text = L"Service :";
			// 
			// TxtRL_Client
			// 
			this->TxtRL_Client->Location = System::Drawing::Point(9, 193);
			this->TxtRL_Client->Name = L"TxtRL_Client";
			this->TxtRL_Client->Size = System::Drawing::Size(154, 20);
			this->TxtRL_Client->TabIndex = 15;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(11, 177);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(39, 13);
			this->label36->TabIndex = 14;
			this->label36->Text = L"Client :";
			// 
			// Calendar
			// 
			this->Calendar->Enabled = false;
			this->Calendar->Location = System::Drawing::Point(9, 6);
			this->Calendar->Name = L"Calendar";
			this->Calendar->TabIndex = 13;
			this->Calendar->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &ApplicationForm::Calendar_DateSelected);
			// 
			// GBox_Hours
			// 
			this->GBox_Hours->Location = System::Drawing::Point(169, 8);
			this->GBox_Hours->Name = L"GBox_Hours";
			this->GBox_Hours->Size = System::Drawing::Size(199, 365);
			this->GBox_Hours->TabIndex = 12;
			this->GBox_Hours->TabStop = false;
			this->GBox_Hours->Text = L"  Hours  ";
			// 
			// DGR_Employee
			// 
			this->DGR_Employee->AllowUserToAddRows = false;
			this->DGR_Employee->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGR_Employee->Location = System::Drawing::Point(374, 283);
			this->DGR_Employee->Name = L"DGR_Employee";
			this->DGR_Employee->Size = System::Drawing::Size(391, 93);
			this->DGR_Employee->TabIndex = 11;
			this->DGR_Employee->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApplicationForm::DGR_Employee_CellClick);
			// 
			// BtnRE_Search
			// 
			this->BtnRE_Search->Location = System::Drawing::Point(607, 255);
			this->BtnRE_Search->Name = L"BtnRE_Search";
			this->BtnRE_Search->Size = System::Drawing::Size(75, 23);
			this->BtnRE_Search->TabIndex = 10;
			this->BtnRE_Search->Text = L"Search";
			this->BtnRE_Search->UseVisualStyleBackColor = true;
			this->BtnRE_Search->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnRE_Search_Click);
			// 
			// TxtR_Employee
			// 
			this->TxtR_Employee->Location = System::Drawing::Point(474, 257);
			this->TxtR_Employee->Name = L"TxtR_Employee";
			this->TxtR_Employee->Size = System::Drawing::Size(100, 20);
			this->TxtR_Employee->TabIndex = 9;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(409, 260);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(59, 13);
			this->label35->TabIndex = 8;
			this->label35->Text = L"Employee :";
			// 
			// DGR_Client
			// 
			this->DGR_Client->AllowUserToAddRows = false;
			this->DGR_Client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGR_Client->Location = System::Drawing::Point(374, 158);
			this->DGR_Client->Name = L"DGR_Client";
			this->DGR_Client->Size = System::Drawing::Size(391, 93);
			this->DGR_Client->TabIndex = 7;
			this->DGR_Client->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApplicationForm::DGR_Client_CellClick);
			// 
			// BtnRC_Search
			// 
			this->BtnRC_Search->Location = System::Drawing::Point(607, 130);
			this->BtnRC_Search->Name = L"BtnRC_Search";
			this->BtnRC_Search->Size = System::Drawing::Size(75, 23);
			this->BtnRC_Search->TabIndex = 6;
			this->BtnRC_Search->Text = L"Search";
			this->BtnRC_Search->UseVisualStyleBackColor = true;
			this->BtnRC_Search->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnRC_Search_Click);
			// 
			// TxtR_Client
			// 
			this->TxtR_Client->Location = System::Drawing::Point(474, 132);
			this->TxtR_Client->Name = L"TxtR_Client";
			this->TxtR_Client->Size = System::Drawing::Size(100, 20);
			this->TxtR_Client->TabIndex = 5;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(419, 135);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(39, 13);
			this->label34->TabIndex = 4;
			this->label34->Text = L"Client :";
			// 
			// DGR_Service
			// 
			this->DGR_Service->AllowUserToAddRows = false;
			this->DGR_Service->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGR_Service->Location = System::Drawing::Point(374, 34);
			this->DGR_Service->Name = L"DGR_Service";
			this->DGR_Service->Size = System::Drawing::Size(391, 93);
			this->DGR_Service->TabIndex = 3;
			this->DGR_Service->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApplicationForm::DGR_Service_CellClick);
			// 
			// BtnRS_Search
			// 
			this->BtnRS_Search->Location = System::Drawing::Point(607, 6);
			this->BtnRS_Search->Name = L"BtnRS_Search";
			this->BtnRS_Search->Size = System::Drawing::Size(75, 23);
			this->BtnRS_Search->TabIndex = 2;
			this->BtnRS_Search->Text = L"Search";
			this->BtnRS_Search->UseVisualStyleBackColor = true;
			this->BtnRS_Search->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnRS_Search_Click);
			// 
			// TxtR_Service
			// 
			this->TxtR_Service->Location = System::Drawing::Point(474, 8);
			this->TxtR_Service->Name = L"TxtR_Service";
			this->TxtR_Service->Size = System::Drawing::Size(100, 20);
			this->TxtR_Service->TabIndex = 1;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(419, 11);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(49, 13);
			this->label33->TabIndex = 0;
			this->label33->Text = L"Service :";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->BtnC_Delete);
			this->tabPage5->Controls->Add(this->GB_Clients);
			this->tabPage5->Controls->Add(this->BtnC_Modify);
			this->tabPage5->Controls->Add(this->BtnC_Add);
			this->tabPage5->Controls->Add(this->DGClients);
			this->tabPage5->Controls->Add(this->BtnC_Search);
			this->tabPage5->Controls->Add(this->TxtC_Search);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Location = System::Drawing::Point(4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(771, 393);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Clients";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// BtnC_Delete
			// 
			this->BtnC_Delete->Location = System::Drawing::Point(493, 325);
			this->BtnC_Delete->Name = L"BtnC_Delete";
			this->BtnC_Delete->Size = System::Drawing::Size(75, 23);
			this->BtnC_Delete->TabIndex = 18;
			this->BtnC_Delete->Text = L"Delete";
			this->BtnC_Delete->UseVisualStyleBackColor = true;
			this->BtnC_Delete->Visible = false;
			this->BtnC_Delete->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnC_Delete_Click);
			// 
			// GB_Clients
			// 
			this->GB_Clients->Controls->Add(this->TxtC_Zipcode);
			this->GB_Clients->Controls->Add(this->TxtC_City);
			this->GB_Clients->Controls->Add(this->label29);
			this->GB_Clients->Controls->Add(this->label30);
			this->GB_Clients->Controls->Add(this->TxtC_Number);
			this->GB_Clients->Controls->Add(this->label31);
			this->GB_Clients->Controls->Add(this->TxtC_Street);
			this->GB_Clients->Controls->Add(this->label32);
			this->GB_Clients->Controls->Add(this->TxtC_Phone);
			this->GB_Clients->Controls->Add(this->label28);
			this->GB_Clients->Controls->Add(this->TxtC_Email);
			this->GB_Clients->Controls->Add(this->label27);
			this->GB_Clients->Controls->Add(this->TxtC_Surname);
			this->GB_Clients->Controls->Add(this->label26);
			this->GB_Clients->Controls->Add(this->TxtC_Name);
			this->GB_Clients->Controls->Add(this->label25);
			this->GB_Clients->Location = System::Drawing::Point(14, 232);
			this->GB_Clients->Name = L"GB_Clients";
			this->GB_Clients->Size = System::Drawing::Size(431, 127);
			this->GB_Clients->TabIndex = 4;
			this->GB_Clients->TabStop = false;
			this->GB_Clients->Text = L"Client data edition";
			// 
			// TxtC_Zipcode
			// 
			this->TxtC_Zipcode->Location = System::Drawing::Point(302, 70);
			this->TxtC_Zipcode->Mask = L"00-999";
			this->TxtC_Zipcode->Name = L"TxtC_Zipcode";
			this->TxtC_Zipcode->Size = System::Drawing::Size(41, 20);
			this->TxtC_Zipcode->TabIndex = 16;
			// 
			// TxtC_City
			// 
			this->TxtC_City->Location = System::Drawing::Point(302, 96);
			this->TxtC_City->Name = L"TxtC_City";
			this->TxtC_City->Size = System::Drawing::Size(100, 20);
			this->TxtC_City->TabIndex = 15;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(255, 99);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(30, 13);
			this->label29->TabIndex = 14;
			this->label29->Text = L"City :";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(227, 73);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(58, 13);
			this->label30->TabIndex = 12;
			this->label30->Text = L"ZIP Code :";
			// 
			// TxtC_Number
			// 
			this->TxtC_Number->Location = System::Drawing::Point(302, 44);
			this->TxtC_Number->Name = L"TxtC_Number";
			this->TxtC_Number->Size = System::Drawing::Size(100, 20);
			this->TxtC_Number->TabIndex = 11;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(235, 51);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(50, 13);
			this->label31->TabIndex = 10;
			this->label31->Text = L"Number :";
			// 
			// TxtC_Street
			// 
			this->TxtC_Street->Location = System::Drawing::Point(302, 18);
			this->TxtC_Street->Name = L"TxtC_Street";
			this->TxtC_Street->Size = System::Drawing::Size(100, 20);
			this->TxtC_Street->TabIndex = 9;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(244, 21);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(41, 13);
			this->label32->TabIndex = 8;
			this->label32->Text = L"Street :";
			// 
			// TxtC_Phone
			// 
			this->TxtC_Phone->Location = System::Drawing::Point(96, 99);
			this->TxtC_Phone->Name = L"TxtC_Phone";
			this->TxtC_Phone->Size = System::Drawing::Size(100, 20);
			this->TxtC_Phone->TabIndex = 7;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(46, 103);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(44, 13);
			this->label28->TabIndex = 6;
			this->label28->Text = L"Phone :";
			// 
			// TxtC_Email
			// 
			this->TxtC_Email->Location = System::Drawing::Point(96, 73);
			this->TxtC_Email->Name = L"TxtC_Email";
			this->TxtC_Email->Size = System::Drawing::Size(100, 20);
			this->TxtC_Email->TabIndex = 5;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(53, 77);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(37, 13);
			this->label27->TabIndex = 4;
			this->label27->Text = L"email :";
			// 
			// TxtC_Surname
			// 
			this->TxtC_Surname->Location = System::Drawing::Point(96, 47);
			this->TxtC_Surname->Name = L"TxtC_Surname";
			this->TxtC_Surname->Size = System::Drawing::Size(100, 20);
			this->TxtC_Surname->TabIndex = 3;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(38, 50);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(55, 13);
			this->label26->TabIndex = 2;
			this->label26->Text = L"Surname :";
			// 
			// TxtC_Name
			// 
			this->TxtC_Name->Location = System::Drawing::Point(96, 21);
			this->TxtC_Name->Name = L"TxtC_Name";
			this->TxtC_Name->Size = System::Drawing::Size(100, 20);
			this->TxtC_Name->TabIndex = 1;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(49, 24);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(41, 13);
			this->label25->TabIndex = 0;
			this->label25->Text = L"Name :";
			// 
			// BtnC_Modify
			// 
			this->BtnC_Modify->Location = System::Drawing::Point(493, 287);
			this->BtnC_Modify->Name = L"BtnC_Modify";
			this->BtnC_Modify->Size = System::Drawing::Size(75, 23);
			this->BtnC_Modify->TabIndex = 17;
			this->BtnC_Modify->Text = L"Modify";
			this->BtnC_Modify->UseVisualStyleBackColor = true;
			this->BtnC_Modify->Visible = false;
			this->BtnC_Modify->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnC_Modify_Click);
			// 
			// BtnC_Add
			// 
			this->BtnC_Add->Location = System::Drawing::Point(493, 251);
			this->BtnC_Add->Name = L"BtnC_Add";
			this->BtnC_Add->Size = System::Drawing::Size(75, 23);
			this->BtnC_Add->TabIndex = 16;
			this->BtnC_Add->Text = L"Add";
			this->BtnC_Add->UseVisualStyleBackColor = true;
			this->BtnC_Add->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnC_Add_Click);
			// 
			// DGClients
			// 
			this->DGClients->AllowUserToAddRows = false;
			this->DGClients->AllowUserToOrderColumns = true;
			this->DGClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGClients->Location = System::Drawing::Point(6, 35);
			this->DGClients->Name = L"DGClients";
			this->DGClients->Size = System::Drawing::Size(754, 168);
			this->DGClients->TabIndex = 3;
			this->DGClients->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApplicationForm::DGClients_CellClick);
			// 
			// BtnC_Search
			// 
			this->BtnC_Search->Location = System::Drawing::Point(159, 6);
			this->BtnC_Search->Name = L"BtnC_Search";
			this->BtnC_Search->Size = System::Drawing::Size(75, 23);
			this->BtnC_Search->TabIndex = 2;
			this->BtnC_Search->Text = L"Search";
			this->BtnC_Search->UseVisualStyleBackColor = true;
			this->BtnC_Search->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnC_Search_Click);
			// 
			// TxtC_Search
			// 
			this->TxtC_Search->Location = System::Drawing::Point(53, 6);
			this->TxtC_Search->Name = L"TxtC_Search";
			this->TxtC_Search->Size = System::Drawing::Size(100, 20);
			this->TxtC_Search->TabIndex = 1;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(11, 8);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(36, 13);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Client:";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->TxtES_Surname);
			this->tabPage4->Controls->Add(this->TxtES_Name);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->DGES_AddService);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->DGES_Services);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->DGES_Employees);
			this->tabPage4->Controls->Add(this->BtnES_Search);
			this->tabPage4->Controls->Add(this->TxtES_Search);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Location = System::Drawing::Point(4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(771, 393);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Employee-Services";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// TxtES_Surname
			// 
			this->TxtES_Surname->Location = System::Drawing::Point(109, 100);
			this->TxtES_Surname->Name = L"TxtES_Surname";
			this->TxtES_Surname->Size = System::Drawing::Size(119, 20);
			this->TxtES_Surname->TabIndex = 12;
			// 
			// TxtES_Name
			// 
			this->TxtES_Name->Location = System::Drawing::Point(109, 69);
			this->TxtES_Name->Name = L"TxtES_Name";
			this->TxtES_Name->Size = System::Drawing::Size(119, 20);
			this->TxtES_Name->TabIndex = 11;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(24, 103);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(55, 13);
			this->label23->TabIndex = 10;
			this->label23->Text = L"Surname :";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(38, 72);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 13);
			this->label22->TabIndex = 9;
			this->label22->Text = L"Name :";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(8, 149);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(71, 13);
			this->label21->TabIndex = 8;
			this->label21->Text = L"Add Service :";
			// 
			// DGES_AddService
			// 
			this->DGES_AddService->AllowUserToAddRows = false;
			this->DGES_AddService->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGES_AddService->Location = System::Drawing::Point(11, 165);
			this->DGES_AddService->Name = L"DGES_AddService";
			this->DGES_AddService->Size = System::Drawing::Size(304, 107);
			this->DGES_AddService->TabIndex = 7;
			this->DGES_AddService->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApplicationForm::DGES_AddService_CellClick);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(452, 149);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(48, 13);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Services";
			// 
			// DGES_Services
			// 
			this->DGES_Services->AllowUserToAddRows = false;
			this->DGES_Services->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGES_Services->Location = System::Drawing::Point(455, 165);
			this->DGES_Services->Name = L"DGES_Services";
			this->DGES_Services->Size = System::Drawing::Size(304, 107);
			this->DGES_Services->TabIndex = 5;
			this->DGES_Services->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApplicationForm::DGES_Services_CellClick);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(309, 12);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(58, 13);
			this->label19->TabIndex = 4;
			this->label19->Text = L"Employees";
			// 
			// DGES_Employees
			// 
			this->DGES_Employees->AllowUserToAddRows = false;
			this->DGES_Employees->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGES_Employees->Location = System::Drawing::Point(299, 27);
			this->DGES_Employees->Name = L"DGES_Employees";
			this->DGES_Employees->Size = System::Drawing::Size(460, 107);
			this->DGES_Employees->TabIndex = 3;
			this->DGES_Employees->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApplicationForm::DGES_Employees_CellClick);
			// 
			// BtnES_Search
			// 
			this->BtnES_Search->Location = System::Drawing::Point(193, 21);
			this->BtnES_Search->Name = L"BtnES_Search";
			this->BtnES_Search->Size = System::Drawing::Size(75, 23);
			this->BtnES_Search->TabIndex = 2;
			this->BtnES_Search->Text = L"Search";
			this->BtnES_Search->UseVisualStyleBackColor = true;
			this->BtnES_Search->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnES_Search_Click);
			// 
			// TxtES_Search
			// 
			this->TxtES_Search->Location = System::Drawing::Point(87, 24);
			this->TxtES_Search->Name = L"TxtES_Search";
			this->TxtES_Search->Size = System::Drawing::Size(100, 20);
			this->TxtES_Search->TabIndex = 1;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(28, 27);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(53, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Employee";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->BtnS_Add);
			this->tabPage1->Controls->Add(this->BtnS_Modify);
			this->tabPage1->Controls->Add(this->BtnS_Delete);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->DG_Service);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->TxtS_Search);
			this->tabPage1->Controls->Add(this->Event);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(771, 393);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Services";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// BtnS_Add
			// 
			this->BtnS_Add->Location = System::Drawing::Point(203, 362);
			this->BtnS_Add->Name = L"BtnS_Add";
			this->BtnS_Add->Size = System::Drawing::Size(75, 23);
			this->BtnS_Add->TabIndex = 7;
			this->BtnS_Add->Text = L"Add";
			this->BtnS_Add->UseVisualStyleBackColor = true;
			this->BtnS_Add->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnS_Add_Click);
			// 
			// BtnS_Modify
			// 
			this->BtnS_Modify->Enabled = false;
			this->BtnS_Modify->Location = System::Drawing::Point(113, 362);
			this->BtnS_Modify->Name = L"BtnS_Modify";
			this->BtnS_Modify->Size = System::Drawing::Size(75, 23);
			this->BtnS_Modify->TabIndex = 6;
			this->BtnS_Modify->Text = L"Modify";
			this->BtnS_Modify->UseVisualStyleBackColor = true;
			this->BtnS_Modify->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnS_Modify_Click);
			// 
			// BtnS_Delete
			// 
			this->BtnS_Delete->Enabled = false;
			this->BtnS_Delete->Location = System::Drawing::Point(23, 362);
			this->BtnS_Delete->Name = L"BtnS_Delete";
			this->BtnS_Delete->Size = System::Drawing::Size(75, 23);
			this->BtnS_Delete->TabIndex = 5;
			this->BtnS_Delete->Text = L"Delete";
			this->BtnS_Delete->UseVisualStyleBackColor = true;
			this->BtnS_Delete->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnS_Delete_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->TxtS_Description);
			this->groupBox3->Controls->Add(this->TxtS_Time);
			this->groupBox3->Controls->Add(this->TxtS_Price);
			this->groupBox3->Controls->Add(this->TxtS_Name);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Location = System::Drawing::Point(14, 45);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(284, 311);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Events";
			// 
			// TxtS_Description
			// 
			this->TxtS_Description->Location = System::Drawing::Point(8, 144);
			this->TxtS_Description->Multiline = true;
			this->TxtS_Description->Name = L"TxtS_Description";
			this->TxtS_Description->Size = System::Drawing::Size(270, 161);
			this->TxtS_Description->TabIndex = 7;
			// 
			// TxtS_Time
			// 
			this->TxtS_Time->Location = System::Drawing::Point(99, 99);
			this->TxtS_Time->Name = L"TxtS_Time";
			this->TxtS_Time->Size = System::Drawing::Size(100, 20);
			this->TxtS_Time->TabIndex = 6;
			// 
			// TxtS_Price
			// 
			this->TxtS_Price->Location = System::Drawing::Point(99, 61);
			this->TxtS_Price->Name = L"TxtS_Price";
			this->TxtS_Price->Size = System::Drawing::Size(100, 20);
			this->TxtS_Price->TabIndex = 5;
			// 
			// TxtS_Name
			// 
			this->TxtS_Name->Location = System::Drawing::Point(99, 30);
			this->TxtS_Name->Name = L"TxtS_Name";
			this->TxtS_Name->Size = System::Drawing::Size(100, 20);
			this->TxtS_Name->TabIndex = 4;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 128);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(63, 13);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Description:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(26, 99);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(33, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Time:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(26, 61);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Price:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(26, 30);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Name:";
			// 
			// DG_Service
			// 
			this->DG_Service->AllowUserToAddRows = false;
			this->DG_Service->AllowUserToOrderColumns = true;
			this->DG_Service->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DG_Service->Location = System::Drawing::Point(304, 4);
			this->DG_Service->Name = L"DG_Service";
			this->DG_Service->Size = System::Drawing::Size(456, 352);
			this->DG_Service->TabIndex = 3;
			this->DG_Service->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApplicationForm::DG_Service_CellClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(185, 17);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Search";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ApplicationForm::button5_Click);
			// 
			// TxtS_Search
			// 
			this->TxtS_Search->Location = System::Drawing::Point(79, 19);
			this->TxtS_Search->Name = L"TxtS_Search";
			this->TxtS_Search->Size = System::Drawing::Size(100, 20);
			this->TxtS_Search->TabIndex = 1;
			// 
			// Event
			// 
			this->Event->AutoSize = true;
			this->Event->Location = System::Drawing::Point(19, 16);
			this->Event->Name = L"Event";
			this->Event->Size = System::Drawing::Size(35, 13);
			this->Event->TabIndex = 0;
			this->Event->Text = L"Event";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->GroupBox1);
			this->tabPage3->Controls->Add(this->BtnE_Add);
			this->tabPage3->Controls->Add(this->BtnE_Delete);
			this->tabPage3->Controls->Add(this->BtnE_Modify);
			this->tabPage3->Controls->Add(this->GroupBox);
			this->tabPage3->Controls->Add(this->BtnE_Search);
			this->tabPage3->Controls->Add(this->TxtE_Search);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->DG_Users);
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(771, 393);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Employees";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// GroupBox1
			// 
			this->GroupBox1->Controls->Add(this->label10);
			this->GroupBox1->Controls->Add(this->groupBox2);
			this->GroupBox1->Controls->Add(this->TxtE6End);
			this->GroupBox1->Controls->Add(this->TxtE6Start);
			this->GroupBox1->Controls->Add(this->label13);
			this->GroupBox1->Controls->Add(this->TxtE5End);
			this->GroupBox1->Controls->Add(this->TxtE5Start);
			this->GroupBox1->Controls->Add(this->label12);
			this->GroupBox1->Controls->Add(this->TxtE4End);
			this->GroupBox1->Controls->Add(this->TxtE4Start);
			this->GroupBox1->Controls->Add(this->label11);
			this->GroupBox1->Controls->Add(this->TxtE3End);
			this->GroupBox1->Controls->Add(this->TxtE3Start);
			this->GroupBox1->Controls->Add(this->TxtE2End);
			this->GroupBox1->Controls->Add(this->TxtE2Start);
			this->GroupBox1->Controls->Add(this->label9);
			this->GroupBox1->Controls->Add(this->TxtE1End);
			this->GroupBox1->Controls->Add(this->TxtE1Start);
			this->GroupBox1->Controls->Add(this->label8);
			this->GroupBox1->Location = System::Drawing::Point(6, 168);
			this->GroupBox1->Name = L"GroupBox1";
			this->GroupBox1->Size = System::Drawing::Size(317, 188);
			this->GroupBox1->TabIndex = 9;
			this->GroupBox1->TabStop = false;
			this->GroupBox1->Text = L"Work Hours";
			this->GroupBox1->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label10->Location = System::Drawing::Point(26, 78);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Wednesday";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(235, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(79, 148);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Templates";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 109);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"10-18";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ApplicationForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9-17";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ApplicationForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(7, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8-16";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ApplicationForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7-15";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ApplicationForm::button1_Click);
			// 
			// TxtE6End
			// 
			this->TxtE6End->Location = System::Drawing::Point(165, 153);
			this->TxtE6End->Name = L"TxtE6End";
			this->TxtE6End->Size = System::Drawing::Size(64, 20);
			this->TxtE6End->TabIndex = 17;
			// 
			// TxtE6Start
			// 
			this->TxtE6Start->Location = System::Drawing::Point(96, 153);
			this->TxtE6Start->Name = L"TxtE6Start";
			this->TxtE6Start->Size = System::Drawing::Size(63, 20);
			this->TxtE6Start->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label13->Location = System::Drawing::Point(39, 156);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Saturday";
			// 
			// TxtE5End
			// 
			this->TxtE5End->Location = System::Drawing::Point(165, 127);
			this->TxtE5End->Name = L"TxtE5End";
			this->TxtE5End->Size = System::Drawing::Size(64, 20);
			this->TxtE5End->TabIndex = 14;
			// 
			// TxtE5Start
			// 
			this->TxtE5Start->Location = System::Drawing::Point(96, 127);
			this->TxtE5Start->Name = L"TxtE5Start";
			this->TxtE5Start->Size = System::Drawing::Size(63, 20);
			this->TxtE5Start->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label12->Location = System::Drawing::Point(53, 128);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Friday";
			// 
			// TxtE4End
			// 
			this->TxtE4End->Location = System::Drawing::Point(165, 101);
			this->TxtE4End->Name = L"TxtE4End";
			this->TxtE4End->Size = System::Drawing::Size(64, 20);
			this->TxtE4End->TabIndex = 11;
			// 
			// TxtE4Start
			// 
			this->TxtE4Start->Location = System::Drawing::Point(96, 101);
			this->TxtE4Start->Name = L"TxtE4Start";
			this->TxtE4Start->Size = System::Drawing::Size(63, 20);
			this->TxtE4Start->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label11->Location = System::Drawing::Point(37, 104);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Thursday";
			// 
			// TxtE3End
			// 
			this->TxtE3End->Location = System::Drawing::Point(165, 75);
			this->TxtE3End->Name = L"TxtE3End";
			this->TxtE3End->Size = System::Drawing::Size(64, 20);
			this->TxtE3End->TabIndex = 8;
			// 
			// TxtE3Start
			// 
			this->TxtE3Start->Location = System::Drawing::Point(96, 75);
			this->TxtE3Start->Name = L"TxtE3Start";
			this->TxtE3Start->Size = System::Drawing::Size(63, 20);
			this->TxtE3Start->TabIndex = 7;
			// 
			// TxtE2End
			// 
			this->TxtE2End->Location = System::Drawing::Point(165, 49);
			this->TxtE2End->Name = L"TxtE2End";
			this->TxtE2End->Size = System::Drawing::Size(64, 20);
			this->TxtE2End->TabIndex = 5;
			// 
			// TxtE2Start
			// 
			this->TxtE2Start->Location = System::Drawing::Point(96, 49);
			this->TxtE2Start->Name = L"TxtE2Start";
			this->TxtE2Start->Size = System::Drawing::Size(63, 20);
			this->TxtE2Start->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label9->Location = System::Drawing::Point(40, 52);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Tuesday";
			// 
			// TxtE1End
			// 
			this->TxtE1End->Location = System::Drawing::Point(165, 23);
			this->TxtE1End->Name = L"TxtE1End";
			this->TxtE1End->Size = System::Drawing::Size(64, 20);
			this->TxtE1End->TabIndex = 2;
			// 
			// TxtE1Start
			// 
			this->TxtE1Start->Location = System::Drawing::Point(96, 23);
			this->TxtE1Start->Name = L"TxtE1Start";
			this->TxtE1Start->Size = System::Drawing::Size(63, 20);
			this->TxtE1Start->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label8->Location = System::Drawing::Point(43, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Monday";
			// 
			// BtnE_Add
			// 
			this->BtnE_Add->Location = System::Drawing::Point(243, 362);
			this->BtnE_Add->Name = L"BtnE_Add";
			this->BtnE_Add->Size = System::Drawing::Size(75, 23);
			this->BtnE_Add->TabIndex = 8;
			this->BtnE_Add->Text = L"Add";
			this->BtnE_Add->UseVisualStyleBackColor = true;
			this->BtnE_Add->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnE_Add_Click);
			// 
			// BtnE_Delete
			// 
			this->BtnE_Delete->Enabled = false;
			this->BtnE_Delete->Location = System::Drawing::Point(12, 362);
			this->BtnE_Delete->Name = L"BtnE_Delete";
			this->BtnE_Delete->Size = System::Drawing::Size(75, 23);
			this->BtnE_Delete->TabIndex = 5;
			this->BtnE_Delete->Text = L"Delete";
			this->BtnE_Delete->UseVisualStyleBackColor = true;
			this->BtnE_Delete->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnE_Delete_Click);
			// 
			// BtnE_Modify
			// 
			this->BtnE_Modify->Enabled = false;
			this->BtnE_Modify->Location = System::Drawing::Point(129, 362);
			this->BtnE_Modify->Name = L"BtnE_Modify";
			this->BtnE_Modify->Size = System::Drawing::Size(75, 23);
			this->BtnE_Modify->TabIndex = 7;
			this->BtnE_Modify->Text = L"Modify";
			this->BtnE_Modify->UseVisualStyleBackColor = true;
			this->BtnE_Modify->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnE_Modify_Click);
			// 
			// GroupBox
			// 
			this->GroupBox->Controls->Add(this->TxtE_Login);
			this->GroupBox->Controls->Add(this->TxtE_Name);
			this->GroupBox->Controls->Add(this->TxtE_Surname);
			this->GroupBox->Controls->Add(this->ChbEEmployee);
			this->GroupBox->Controls->Add(this->label7);
			this->GroupBox->Controls->Add(this->label6);
			this->GroupBox->Controls->Add(this->label5);
			this->GroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->GroupBox->Location = System::Drawing::Point(6, 32);
			this->GroupBox->Name = L"GroupBox";
			this->GroupBox->Size = System::Drawing::Size(317, 130);
			this->GroupBox->TabIndex = 4;
			this->GroupBox->TabStop = false;
			this->GroupBox->Text = L"Editing user data";
			// 
			// TxtE_Login
			// 
			this->TxtE_Login->Location = System::Drawing::Point(123, 74);
			this->TxtE_Login->Name = L"TxtE_Login";
			this->TxtE_Login->Size = System::Drawing::Size(163, 22);
			this->TxtE_Login->TabIndex = 6;
			// 
			// TxtE_Name
			// 
			this->TxtE_Name->Location = System::Drawing::Point(123, 49);
			this->TxtE_Name->Name = L"TxtE_Name";
			this->TxtE_Name->Size = System::Drawing::Size(163, 22);
			this->TxtE_Name->TabIndex = 5;
			// 
			// TxtE_Surname
			// 
			this->TxtE_Surname->Location = System::Drawing::Point(123, 22);
			this->TxtE_Surname->Name = L"TxtE_Surname";
			this->TxtE_Surname->Size = System::Drawing::Size(163, 22);
			this->TxtE_Surname->TabIndex = 4;
			// 
			// ChbEEmployee
			// 
			this->ChbEEmployee->AutoSize = true;
			this->ChbEEmployee->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ChbEEmployee->Location = System::Drawing::Point(51, 98);
			this->ChbEEmployee->Name = L"ChbEEmployee";
			this->ChbEEmployee->Size = System::Drawing::Size(89, 20);
			this->ChbEEmployee->TabIndex = 3;
			this->ChbEEmployee->Text = L"Employee";
			this->ChbEEmployee->UseVisualStyleBackColor = true;
			this->ChbEEmployee->CheckedChanged += gcnew System::EventHandler(this, &ApplicationForm::ChbEEmployee_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(63, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(44, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Login:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(63, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(48, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Surname:";
			// 
			// BtnE_Search
			// 
			this->BtnE_Search->Location = System::Drawing::Point(217, 3);
			this->BtnE_Search->Name = L"BtnE_Search";
			this->BtnE_Search->Size = System::Drawing::Size(75, 23);
			this->BtnE_Search->TabIndex = 3;
			this->BtnE_Search->Text = L"Search";
			this->BtnE_Search->UseVisualStyleBackColor = true;
			this->BtnE_Search->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnE_Search_Click);
			// 
			// TxtE_Search
			// 
			this->TxtE_Search->Location = System::Drawing::Point(57, 3);
			this->TxtE_Search->Name = L"TxtE_Search";
			this->TxtE_Search->Size = System::Drawing::Size(154, 20);
			this->TxtE_Search->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 6);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Employee:";
			// 
			// DG_Users
			// 
			this->DG_Users->AllowUserToAddRows = false;
			this->DG_Users->AllowUserToOrderColumns = true;
			this->DG_Users->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DG_Users->Location = System::Drawing::Point(326, 0);
			this->DG_Users->Name = L"DG_Users";
			this->DG_Users->Size = System::Drawing::Size(445, 312);
			this->DG_Users->TabIndex = 0;
			this->DG_Users->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApplicationForm::DG_Users_CellClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->BtnP_Change);
			this->tabPage2->Controls->Add(this->TxtP_RepearPassword);
			this->tabPage2->Controls->Add(this->TxtP_NewPassword);
			this->tabPage2->Controls->Add(this->TxtP_OldPassword);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(771, 393);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Password";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// BtnP_Change
			// 
			this->BtnP_Change->Enabled = false;
			this->BtnP_Change->Location = System::Drawing::Point(244, 186);
			this->BtnP_Change->Name = L"BtnP_Change";
			this->BtnP_Change->Size = System::Drawing::Size(121, 42);
			this->BtnP_Change->TabIndex = 6;
			this->BtnP_Change->Text = L"Change";
			this->BtnP_Change->UseVisualStyleBackColor = true;
			this->BtnP_Change->Click += gcnew System::EventHandler(this, &ApplicationForm::BtnP_Change_Click);
			// 
			// TxtP_RepearPassword
			// 
			this->TxtP_RepearPassword->Location = System::Drawing::Point(303, 142);
			this->TxtP_RepearPassword->Name = L"TxtP_RepearPassword";
			this->TxtP_RepearPassword->Size = System::Drawing::Size(100, 20);
			this->TxtP_RepearPassword->TabIndex = 5;
			this->TxtP_RepearPassword->TextChanged += gcnew System::EventHandler(this, &ApplicationForm::TxtP_RepearPassword_TextChanged);
			// 
			// TxtP_NewPassword
			// 
			this->TxtP_NewPassword->Location = System::Drawing::Point(303, 99);
			this->TxtP_NewPassword->Name = L"TxtP_NewPassword";
			this->TxtP_NewPassword->Size = System::Drawing::Size(100, 20);
			this->TxtP_NewPassword->TabIndex = 4;
			this->TxtP_NewPassword->TextChanged += gcnew System::EventHandler(this, &ApplicationForm::TxtP_NewPassword_TextChanged);
			// 
			// TxtP_OldPassword
			// 
			this->TxtP_OldPassword->Location = System::Drawing::Point(303, 50);
			this->TxtP_OldPassword->Name = L"TxtP_OldPassword";
			this->TxtP_OldPassword->Size = System::Drawing::Size(100, 20);
			this->TxtP_OldPassword->TabIndex = 3;
			this->TxtP_OldPassword->TextChanged += gcnew System::EventHandler(this, &ApplicationForm::TxtP_OldPassword_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(186, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Repeat Password:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(199, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"New Password:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(205, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Old Password:";
			// 
			// ApplicationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 415);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ApplicationForm";
			this->Text = L"ApplicationForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGR_Employee))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGR_Client))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGR_Service))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->GB_Clients->ResumeLayout(false);
			this->GB_Clients->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGClients))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGES_AddService))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGES_Services))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGES_Employees))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Service))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->GroupBox1->ResumeLayout(false);
			this->GroupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->GroupBox->ResumeLayout(false);
			this->GroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DG_Users))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		//Variable Declaration
		int id_Record;//choosing the record on which he works -- variable for all nets
		int EmployeeType;
		int id_Service, id_Employee, id_Client; //id after click in DataGried View
		String^ DateSelect;
		String^ HourSelect;
	private: void Employee_Type(){
		if (ChbEEmployee->Checked)
		{
			EmployeeType = 1;
		}
		else
		{
			EmployeeType = 0;
		}
	}
	private: void BtnChange_Show(){
		if (TxtP_OldPassword->Text != "" && TxtP_NewPassword->Text != ""&&TxtP_NewPassword->Text == TxtP_RepearPassword->Text){
			BtnP_Change->Enabled = true;
		}
		else
		{
			BtnP_Change->Enabled = false;
		}
	}
	private: void Clean_TxtBox(Control^ Box){
		for each (Control^ element in Box->Controls){

if (element->GetType() == TextBox::typeid || element->GetType() == MaskedTextBox::typeid){
				element->Text = "";
			}
		}


	}
private: void Show_Service(System::Windows::Forms::TextBox^ Field, System::Windows::Forms::DataGridView^ Net ){

	MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
	MySqlCommand^ question = gcnew MySqlCommand("SELECT * FROM services WHERE Name LIKE '%" + Field->Text + "%'order by Name;", LinkBase);
	try{
		LinkBase->Open();
		MySqlDataAdapter^ MyData = gcnew MySqlDataAdapter();
		MyData->SelectCommand = question;
		DataTable^ Tabel = gcnew DataTable();
		MyData->Fill(Tabel);
		BindingSource^ Source = gcnew BindingSource();
		Source->DataSource = Tabel;
		Net->DataSource = Source;
		LinkBase->Close();
	}
	catch (Exception^ Statement){
		MessageBox::Show(Statement->Message);
	}
	Net->Columns[0]->Visible = false;
}
	private: void Show_Net(){
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ question = gcnew MySqlCommand("select User_ID,Surname,Name,User_Name as Login," +
			"Employee from users order by Surname;", LinkBase);
		try{
			LinkBase->Open();
			MySqlDataAdapter^ MyData = gcnew MySqlDataAdapter();
			MyData->SelectCommand = question;
			DataTable^ Tabel = gcnew DataTable();
			MyData->Fill(Tabel);
			BindingSource^ Source = gcnew BindingSource();
			Source->DataSource = Tabel;
			DG_Users->DataSource = Source;
			LinkBase->Close();
		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
		}
	}
	private: void Template_TimeWork(int TimeStart){
		//Funkcja wype³niaj¹ca pole w godzinach pracy.
		array<TextBox^> ^T_start = { TxtE1Start, TxtE2Start, TxtE3Start, TxtE4Start, TxtE5Start, TxtE6Start };
		array<TextBox^> ^T_End = { TxtE1End, TxtE2End, TxtE3End, TxtE4End, TxtE5End, TxtE6End };
		
		for (int i = 0; i < 6; i++){
			T_start[i]->Text = TimeStart+":00";
			T_End[i]->Text = TimeStart+8+":00";
		}
	}
			 //funkcja szukania i pokazywania w Data gried
	private: void search_employees(System::Windows::Forms::TextBox^ Field, System::Windows::Forms::DataGridView^ Net){
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ question = gcnew MySqlCommand("select User_ID,Surname,Name,User_Name as Login,Employee from users where concat(Surname,' ', Name, User_Name) like'%" + Field->Text + "%'order by Surname;", LinkBase);
		try{
			LinkBase->Open();
			MySqlDataAdapter^ MyData = gcnew MySqlDataAdapter();
			MyData->SelectCommand = question;
			DataTable^ Tabel = gcnew DataTable();
			MyData->Fill(Tabel);
			BindingSource^ Source = gcnew BindingSource();
			Source->DataSource = Tabel;
			Net->DataSource = Source;
			LinkBase->Close();
		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
		}
		}
	private: void search_clients(System::Windows::Forms::TextBox^ Field, System::Windows::Forms::DataGridView^ Net){
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ question = gcnew MySqlCommand("select * From clients where concat(Surname,' ', Name,' ',City) like'%" + Field->Text + "%'order by Surname;", LinkBase);
		try{
			LinkBase->Open();
			MySqlDataAdapter^ MyData = gcnew MySqlDataAdapter();
			MyData->SelectCommand = question;
			DataTable^ Tabel = gcnew DataTable();
			MyData->Fill(Tabel);
			BindingSource^ Source = gcnew BindingSource();
			Source->DataSource = Tabel;
			Net->DataSource = Source;
			LinkBase->Close();
		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
		}
	}
	private: Void ShowServices(){
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ question = gcnew MySqlCommand("SELECT services.services_id, services.Name, services.Price, services.S_Time FROM services, user_service WHERE services.services_id = user_service.services_id AND user_service.user_id=" + id_Record + " ORDER BY  Name ;", LinkBase);
		try{
			LinkBase->Open();
			MySqlDataAdapter^ MyData = gcnew MySqlDataAdapter();
			MyData->SelectCommand = question;
			DataTable^ Tabel = gcnew DataTable();
			MyData->Fill(Tabel);
			BindingSource^ Source = gcnew BindingSource();
			Source->DataSource = Tabel;
			DGES_Services->DataSource = Source;
			LinkBase->Close();
		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
		}
		DGES_Services->Columns[0]->Visible = false;
		
	}
	private: System::Void TxtP_OldPassword_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		BtnChange_Show();

	}
	private: System::Void TxtP_NewPassword_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		BtnChange_Show();
	}
	private: System::Void TxtP_RepearPassword_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		BtnChange_Show();
	}
	private: System::Void BtnP_Change_Click(System::Object^  sender, System::EventArgs^  e) {
		//Change Password
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ question = gcnew MySqlCommand("Update users SET Password = '" + TxtP_RepearPassword->Text + "' where User_ID =" + ID_User + " and Password ='" + TxtP_OldPassword->Text + "';", LinkBase);
		try{
			LinkBase->Open();
			if (question->ExecuteNonQuery()){

				MessageBox::Show("Password has been changed correctly");

			}
			else{
				MessageBox::Show("Password provided is incorrect");
			}
			LinkBase->Close();

		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
		}

	}
//Szukanie pracownikow w zakladce pracownicy po kliknieciu w przycisk Search
	private: System::Void BtnE_Search_Click(System::Object^  sender, System::EventArgs^  e) {
		search_employees(TxtE_Search, DG_Users);
		DG_Users->Columns[0]->Visible = false;
	}
	private: System::Void DG_Users_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->RowIndex >= 0){
			id_Record = Convert::ToInt32(DG_Users->Rows[e->RowIndex]->Cells[0]->Value);
			TxtE_Surname->Text = DG_Users->Rows[e->RowIndex]->Cells["Surname"]->Value->ToString();
			TxtE_Name->Text = DG_Users->Rows[e->RowIndex]->Cells["Name"]->Value->ToString();
			TxtE_Login->Text = DG_Users->Rows[e->RowIndex]->Cells["Login"]->Value->ToString();
			ChbEEmployee->Checked = Convert::ToBoolean(DG_Users->Rows[e->RowIndex]->Cells["Employee"]->Value);

			BtnE_Delete->Enabled = true;
			BtnE_Modify->Enabled = true;
			if (ChbEEmployee->Checked){
				MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
				MySqlCommand^ question = gcnew MySqlCommand("SELECT * FROM hours WHERE User_id=" + id_Record + " ;", LinkBase);
				MySqlDataReader^ DataB;
				try{
					LinkBase->Open();
					DataB = question->ExecuteReader();
					while (DataB->Read()){
						TxtE1Start->Text = DataB->GetString("Mon_from");
						TxtE1End->Text = DataB->GetString("Mon_to");
						TxtE2Start->Text = DataB->GetString("Tue_from");
						TxtE2End->Text = DataB->GetString("Tue_to");
						TxtE3Start->Text = DataB->GetString("Wed_from");
						TxtE3End->Text = DataB->GetString("Wed_to");
						TxtE4Start->Text = DataB->GetString("Thu_from");
						TxtE4End->Text = DataB->GetString("Thu_to");
						TxtE5Start->Text = DataB->GetString("Fri_from");
						TxtE5End->Text = DataB->GetString("Fri_to");
						TxtE6Start->Text = DataB->GetString("Sat_from");
						TxtE6End->Text = DataB->GetString("Sat_to");
					}
					LinkBase->Close();
				}
				catch (Exception^ Statement){
					MessageBox::Show(Statement->Message);
				}
			}
		}
	}
	private: System::Void ChbEEmployee_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (ChbEEmployee->Checked){
			GroupBox1->Visible = true;
		}
		else
		{
			GroupBox1->Visible = false;
		}
		Clean_TxtBox(GroupBox1);
	}
	private: System::Void BtnE_Add_Click(System::Object^  sender, System::EventArgs^  e) {
		//Add Users to the base
		if (TxtE_Name->Text->Length < 3 || TxtE_Surname->Text->Length < 3 || TxtE_Login->Text->Length < 5){

			MessageBox::Show("Data is not complete");

		}
		else
		{
			Employee_Type();
			MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
			MySqlCommand^ Order = LinkBase->CreateCommand();
			MySqlTransaction^ transaction;
			LinkBase->Open();
			transaction = LinkBase->BeginTransaction(IsolationLevel::ReadCommitted);
			Order->Connection = LinkBase;
			Order->Transaction = transaction;
			try{

				Order->CommandText = "insert into users set Name ='" + TxtE_Name->Text + "', Surname ='" + TxtE_Surname->Text + "', User_Name='" +
					TxtE_Login->Text + "',Password ='" + TxtE_Login->Text + "',Employee =" + EmployeeType + ";";
				Order->ExecuteNonQuery();
				if (ChbEEmployee->Checked){
				Order->CommandText = "insert into hours set User_id=last_insert_id(), Mon_from = '" + TxtE1Start->Text + "', Mon_to = '" + TxtE1End->Text + "', Tue_from = '" +
					TxtE2Start->Text + "', Tue_to = '" + TxtE2End->Text + "', Wed_from = '" + TxtE3Start->Text + "', Wed_to = '" + TxtE3End->Text + "', Thu_from = '" +
					TxtE4Start->Text + "', Thu_to = '" + TxtE4End->Text + "', Fri_from = '" + TxtE5Start->Text + "', Fri_to = '" + TxtE5End->Text + "', Sat_from = '" +
					TxtE6Start->Text + "', Sat_to = '" + TxtE6End->Text + "' ; ";
				Order->ExecuteNonQuery();
				}
				transaction->Commit();
				MessageBox::Show("User has been successfully add  to database :)");
			}
			catch (Exception^ Statement){
				MessageBox::Show(Statement->Message);
				transaction->Rollback();
			}
			LinkBase->Close();
		}
		Show_Net();
	}
	private: System::Void BtnE_Modify_Click(System::Object^  sender, System::EventArgs^  e) {
		//Modyfication Users Data
		if (TxtE_Name->Text->Length < 3 || TxtE_Surname->Text->Length < 4 || TxtE_Login->Text->Length < 5){
			MessageBox::Show("uzupe³nij dane!");
		}
		else{
			Employee_Type();
			MySqlConnection^ laczBaze = gcnew MySqlConnection(Configuration);
			MySqlCommand^ polecenie = laczBaze->CreateCommand();
			MySqlTransaction^ transakcja;
			laczBaze->Open();
			transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
			polecenie->Connection = laczBaze;
			polecenie->Transaction = transakcja;

			try{
				//polecenie->CommandText = "UPDATE users SET Name='" + TxtE_Name->Text + "', Surname='" + TxtE_Surname->Text + "', User_Name='" + TxtE_Login->Text + "', Employee = " + EmployeeType + " WHERE User_ID =" + id_Record + "; ";
				polecenie->CommandText = "SELECT * FROM hours WHERE user_id = " + id_Record + " ; ";
				MySqlDataReader^ wynik = polecenie->ExecuteReader();
				bool Result2 = wynik->HasRows;
				wynik->Close();

				polecenie->CommandText = "UPDATE users SET Name='" + TxtE_Name->Text + "', Surname='" + TxtE_Surname->Text + "', User_Name='" + TxtE_Login->Text + "', Employee = " + EmployeeType + " WHERE User_ID =" + id_Record + "; ";
				
				polecenie->ExecuteNonQuery();

				if (Result2 == true && ChbEEmployee->Checked == true){
				polecenie->CommandText = "UPDATE hours SET Mon_from = '" + TxtE1Start->Text + "', Mon_to ='" + TxtE1End->Text + "', Tue_from = '" + TxtE2Start->Text + "', Tue_to = '" + TxtE2End->Text + "', Wed_from = '" + TxtE3Start->Text + "', Wed_to = '" + TxtE3End->Text + "', Thu_from = '" + TxtE4Start->Text + "', Thu_to = '" + TxtE4End->Text + "', Fri_from = '" + TxtE5Start->Text + "', Fri_to = '" + TxtE5End->Text + "', Sat_from = '" + TxtE6Start->Text + "', Sat_to = '" + TxtE6End->Text + "' WHERE User_id =" + id_Record + " ; ";
				polecenie->ExecuteNonQuery();
				}
				else if (Result2== false && ChbEEmployee->Checked){
				polecenie->CommandText = "INSERT INTO hours SET User_id=" + id_Record + ", Mon_from = '" + TxtE1Start->Text +"', Mon_to ='" + TxtE1End->Text + "', Tue_from = '" + TxtE2Start->Text + "', Tue_to = '" + TxtE2End->Text + "', Wed_from = '" + TxtE3Start->Text + "', Wed_to = '" + TxtE3End->Text + "', Thu_from = '" + TxtE4Start->Text + "', Thu_to = '" + TxtE4End->Text + "', Fri_from = '" + TxtE5Start->Text + "', Fri_to = '" + TxtE5End->Text + "', Sat_from = '" + TxtE6Start->Text + "', Sat_to = '" + TxtE6End->Text + "' ; ";
				polecenie->ExecuteNonQuery();
				}
				
				transakcja->Commit();
				MessageBox::Show("User data has been modification :)");
			}
			catch (Exception^ komunikat){
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();
			}
			laczBaze->Close();
		}
		Show_Net();
	}

	private: System::Void BtnE_Delete_Click(System::Object^  sender, System::EventArgs^  e) {
		//Delete Users Data
		if (id_Record == 1){
			MessageBox::Show("You can not delete user admin");
		}
		else
		{
			Employee_Type();
			MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
			MySqlCommand^ Order = gcnew MySqlCommand();
			MySqlTransaction^ transaction;
			LinkBase->Open();
			transaction = LinkBase->BeginTransaction(IsolationLevel::ReadCommitted);
			Order->Connection = LinkBase;
			Order->Transaction = transaction;
			try{
				if (MessageBox::Show("Are you Soure ?", "Attention", MessageBoxButtons::YesNo, MessageBoxIcon::Question) ==
					System::Windows::Forms::DialogResult::Yes){
					Order->CommandText = "DELETE FROM hours WHERE User_ID = " + id_Record + "; ";
					Order->ExecuteNonQuery();
					Order->CommandText = "DELETE FROM users WHERE User_id = " + id_Record + "; ";
					Order->ExecuteNonQuery();
					transaction->Commit();
					MessageBox::Show("User has been removed");
				}
			}
			catch (Exception^ Statement){
				MessageBox::Show(Statement->Message);
				transaction->Rollback();

			}
			LinkBase->Close();
		}
		Clean_TxtBox(GroupBox);
		/*TxtE_Surname->Text = "";
		TxtE_Name->Text = "";
		TxtE_Login->Text = "";*/
		ChbEEmployee->Checked = false;
		Show_Net();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Template_TimeWork(7);
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Template_TimeWork(8);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Template_TimeWork(9);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Template_TimeWork(10);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	Show_Service(TxtS_Search, DG_Service);
}
private: System::Void BtnS_Add_Click(System::Object^  sender, System::EventArgs^  e) {
	//Dodawanie Uslug do bazy danych
	if (TxtS_Name->Text->Length < 3 || TxtS_Price->Text->Length < 1 || TxtS_Time->Text->Length < 5){

		MessageBox::Show("Data is not complete");
	}
	else
	{
		Employee_Type();
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ Order = LinkBase->CreateCommand();
		MySqlTransaction^ transaction;
		LinkBase->Open();
		transaction = LinkBase->BeginTransaction(IsolationLevel::ReadCommitted);
		Order->Connection = LinkBase;
		Order->Transaction = transaction;
		try{
			String^ sign = TxtS_Price->Text->Replace(",",".");
			Order->CommandText = "INSERT INTO services SET Name = '" + TxtS_Name->Text + "',Price = '" + sign + "',S_Time ='" + TxtS_Time->Text + "',Description='" + TxtS_Description->Text + "';";
			Order->ExecuteNonQuery();
			
			transaction->Commit();
			MessageBox::Show("Service has been successfully add  to database :)");
		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
			transaction->Rollback();
		}
		LinkBase->Close();
	}
	Show_Service(TxtS_Search, DG_Service);
}
private: System::Void DG_Service_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//wybranie us³ugi przez klikniecie
	if (e->RowIndex >= 0){
		id_Record = Convert::ToInt32(DG_Service->Rows[e->RowIndex]->Cells[0]->Value);
		TxtS_Name->Text = DG_Service->Rows[e->RowIndex]->Cells["Name"]->Value->ToString();
		TxtS_Price->Text = DG_Service->Rows[e->RowIndex]->Cells["Price"]->Value->ToString();
		TxtS_Time->Text = DG_Service->Rows[e->RowIndex]->Cells["S_Time"]->Value->ToString();
		TxtS_Description->Text = DG_Service->Rows[e->RowIndex]->Cells["Description"]->Value->ToString();
		BtnS_Delete->Enabled = true;
		BtnS_Modify->Enabled = true;
	}
}
private: System::Void BtnS_Modify_Click(System::Object^  sender, System::EventArgs^  e) {
	//Modyficacja danych uztkownika
	if (TxtS_Name->Text->Length < 3 || TxtS_Price->Text->Length < 4 || TxtS_Time->Text->Length < 5){
		MessageBox::Show("uzupe³nij dane!");
	}
	else{
		Employee_Type();
		MySqlConnection^ laczBaze = gcnew MySqlConnection(Configuration);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;
		try{
			String^ sign = TxtS_Price->Text->Replace(",", ".");
			polecenie->CommandText = "UPDATE services SET Name='" + TxtS_Name->Text + "', Price='" + sign + "', S_Time='" + TxtS_Time->Text + "', Description = '" + TxtS_Description->Text + "' WHERE services_id =" + id_Record + "; ";

			polecenie->ExecuteNonQuery();
			transakcja->Commit();
			MessageBox::Show("Service data has been modification :)");
		}
		catch (Exception^ komunikat){
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
		}
	Show_Service(TxtS_Search, DG_Service);
}
private: System::Void BtnS_Delete_Click(System::Object^  sender, System::EventArgs^  e) {
	//usuwanie uslugi 
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ Order = gcnew MySqlCommand();
		MySqlTransaction^ transaction;
		LinkBase->Open();
		transaction = LinkBase->BeginTransaction(IsolationLevel::ReadCommitted);
		Order->Connection = LinkBase;
		Order->Transaction = transaction;
		try{
			if (MessageBox::Show("Are you Soure ?", "Attention", MessageBoxButtons::YesNo, MessageBoxIcon::Question) ==
				System::Windows::Forms::DialogResult::Yes){
				Order->CommandText = "DELETE FROM services WHERE services_id = " + id_Record + "; ";
				Order->ExecuteNonQuery();
				transaction->Commit();
				MessageBox::Show("Service has been removed");
			}
		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
			transaction->Rollback();
		}
	LinkBase->Close();
	Clean_TxtBox(groupBox3);
	Show_Service(TxtS_Search, DG_Service);
}
private: System::Void BtnES_Search_Click(System::Object^  sender, System::EventArgs^  e) {
	////////////////////////////
	search_employees(TxtES_Search, DGES_Employees);
	DGES_Employees->Columns[0]->Visible = false;
		
}
private: System::Void DGES_Employees_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//wyszukanie uslug ktore wykonuje pracownik
	if (e->RowIndex >= 0){
			id_Record = Convert::ToInt32(DGES_Employees->Rows[e->RowIndex]->Cells[0]->Value);
			TxtES_Surname->Text = DGES_Employees->Rows[e->RowIndex]->Cells["Surname"]->Value->ToString();
			TxtES_Name->Text = DGES_Employees->Rows[e->RowIndex]->Cells["Name"]->Value->ToString();
			ShowServices();
			MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
			MySqlCommand^ question = gcnew MySqlCommand("SELECT * FROM services  ORDER BY  Name ;", LinkBase);
			try{
				LinkBase->Open();
				MySqlDataAdapter^ MyData = gcnew MySqlDataAdapter();
				MyData->SelectCommand = question;
				DataTable^ Tabel = gcnew DataTable();
				MyData->Fill(Tabel);
				BindingSource^ Source = gcnew BindingSource();
				Source->DataSource = Tabel;
				DGES_AddService->DataSource = Source;
				LinkBase->Close();
			}
			catch (Exception^ Statement){
				MessageBox::Show(Statement->Message);
			}
			DGES_AddService->Columns[0]->Visible = false;
	}
}
private: System::Void DGES_AddService_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	//dodanie nowej uslug wykonywanych przez employee
	if (e->RowIndex >= 0){
		id_Service = Convert::ToInt32(DGES_AddService->Rows[e->RowIndex]->Cells[0]->Value);
		
		if (MessageBox::Show("Do you want to add a new service to an employee?", "Add new service",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
		
			MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
			MySqlCommand^ command = LinkBase->CreateCommand();
			MySqlTransaction^ transaction;
			LinkBase->Open();
			transaction = LinkBase->BeginTransaction(IsolationLevel::ReadCommitted);
			command->Connection = LinkBase;
			command->Transaction = transaction;
			try{
				command->CommandText = "INSERT INTO user_service SET user_id =" + id_Record + ", services_id=" + id_Service + " ;";
			
				command->ExecuteNonQuery();
				transaction->Commit();
				MessageBox::Show("Service has been added to services ofert by Employee");
			}
			catch (Exception^ Statement){
				MessageBox::Show(Statement->Message);
				transaction->Rollback();
			}
			LinkBase->Close();
			ShowServices();
}
}
}
private: System::Void DGES_Services_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	////////////////////////usuniecie uslugi wykonywanej przez pracownika
	if (e->RowIndex >= 0){
		id_Service = Convert::ToInt32(DGES_Services->Rows[e->RowIndex]->Cells[0]->Value);

		if (MessageBox::Show("Do you want to delete service to an employee?", "Delete service",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){

			MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
			MySqlCommand^ command = LinkBase->CreateCommand();
			MySqlTransaction^ transaction;
			LinkBase->Open();
			transaction = LinkBase->BeginTransaction(IsolationLevel::ReadCommitted);
			command->Connection = LinkBase;
			command->Transaction = transaction;
			try{
				command->CommandText = "DELETE FROM user_service WHERE user_id =" + id_Record + " AND services_id=" + id_Service + " ;";

				command->ExecuteNonQuery();
				transaction->Commit();
				MessageBox::Show("Service has been delete with services ofert by Employee");
			}
			catch (Exception^ Statement){
				MessageBox::Show(Statement->Message);
				transaction->Rollback();
			}
			LinkBase->Close();
			ShowServices();
		}
	}
}
private: System::Void BtnC_Search_Click(System::Object^  sender, System::EventArgs^  e) {
	search_clients(TxtC_Search, DGClients);
	DGClients->Columns[0]->Visible = false;
}
		 //add client to data base
private: System::Void BtnC_Add_Click(System::Object^  sender, System::EventArgs^  e) {
	if (TxtC_Name->Text->Length < 3 || TxtC_Surname->Text->Length < 3){

		MessageBox::Show("Data is not complete");
	}
	else
	{
		Employee_Type();
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ Order = LinkBase->CreateCommand();
		MySqlTransaction^ transaction;
		LinkBase->Open();
		transaction = LinkBase->BeginTransaction(IsolationLevel::ReadCommitted);
		Order->Connection = LinkBase;
		Order->Transaction = transaction;
		try{
			Order->CommandText = "INSERT INTo CLIENTS set Name ='" + TxtC_Name->Text + "', Surname ='" + TxtC_Surname->Text + "', email='" +
			TxtC_Email->Text + "',Phone ='" + TxtC_Phone->Text + "', Street ='" + TxtC_Street->Text + "', Number ='" + TxtC_Number->Text + 
			"', City ='" + TxtC_City->Text + "', ZIPcode ='"+TxtC_Zipcode->Text+"' ;"; 
			Order->ExecuteNonQuery();
			transaction->Commit();
			MessageBox::Show("Client "+TxtC_Name->Text+" has been successfully add  to database :)");
		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
			transaction->Rollback();
		}
		LinkBase->Close();
	}
	search_clients(TxtC_Search, DGClients);
}
private: System::Void DGClients_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0)
	{
		id_Record = Convert::ToInt32(DGClients->Rows[e->RowIndex]->Cells[0]->Value);
		TxtC_Name->Text = DGClients->Rows[e->RowIndex]->Cells["Name"]->Value->ToString();
		TxtC_Surname->Text = DGClients->Rows[e->RowIndex]->Cells["Surname"]->Value->ToString();
		TxtC_Email->Text = DGClients->Rows[e->RowIndex]->Cells["email"]->Value->ToString();
		TxtC_Phone->Text = DGClients->Rows[e->RowIndex]->Cells["Phone"]->Value->ToString();
		TxtC_Street->Text = DGClients->Rows[e->RowIndex]->Cells["Street"]->Value->ToString();
		TxtC_Number->Text = DGClients->Rows[e->RowIndex]->Cells["Number"]->Value->ToString();
		TxtC_City->Text = DGClients->Rows[e->RowIndex]->Cells["City"]->Value->ToString();
		TxtC_Zipcode->Text = DGClients->Rows[e->RowIndex]->Cells["ZIPcode"]->Value->ToString();
		
		BtnC_Modify->Visible = true;
		BtnC_Delete->Visible = true;
	}
}
private: System::Void BtnC_Delete_Click(System::Object^  sender, System::EventArgs^  e) {
	
		//usuwanie klienta z bazy :D D: D: :D 
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ Order = gcnew MySqlCommand();
		MySqlTransaction^ transaction;
		LinkBase->Open();
		transaction = LinkBase->BeginTransaction(IsolationLevel::ReadCommitted);
		Order->Connection = LinkBase;
		Order->Transaction = transaction;
		try{
			if (MessageBox::Show("Are you Soure ?", "Attention", MessageBoxButtons::YesNo, MessageBoxIcon::Question) ==
				System::Windows::Forms::DialogResult::Yes){
				Order->CommandText = "DELETE FROM clients WHERE clients_id = " + id_Record + "; ";
				Order->ExecuteNonQuery();
				transaction->Commit();
				MessageBox::Show("Client "+TxtC_Name->Text+" has been removed");
			}
		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
			transaction->Rollback();
		}
		LinkBase->Close();
	Clean_TxtBox(GB_Clients);
	search_clients(TxtC_Search, DGClients);
}
private: System::Void BtnC_Modify_Click(System::Object^  sender, System::EventArgs^  e) {
	if (TxtC_Name->Text->Length < 3 || TxtC_Surname->Text->Length < 3){
		MessageBox::Show("Data is not complete");
	}
	else
	{
		Employee_Type();
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ Order = LinkBase->CreateCommand();
		MySqlTransaction^ transaction;
		LinkBase->Open();
		transaction = LinkBase->BeginTransaction(IsolationLevel::ReadCommitted);
		Order->Connection = LinkBase;
		Order->Transaction = transaction;
		try{
			Order->CommandText = "UPDATE clients SET Name ='" + TxtC_Name->Text + "', Surname ='" + TxtC_Surname->Text + "', email='" +
			TxtC_Email->Text + "',Phone ='" + TxtC_Phone->Text + "', Street ='" + TxtC_Street->Text + "', Number ='" + TxtC_Number->Text +
			"', City ='" + TxtC_City->Text + "', ZIPcode ='" + TxtC_Zipcode->Text + "' WHERE clients_id = "+id_Record+" ;";
			Order->ExecuteNonQuery();
			transaction->Commit();
			MessageBox::Show("Client " + TxtC_Name->Text + " has been successfully modification");
		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
			transaction->Rollback();
		}
		LinkBase->Close();
	}
	search_clients(TxtC_Search, DGClients);
}
private: System::Void BtnRS_Search_Click(System::Object^  sender, System::EventArgs^  e) {
	Show_Service(TxtR_Service, DGR_Service);
}
private: System::Void BtnRC_Search_Click(System::Object^  sender, System::EventArgs^  e) {
	search_clients(TxtR_Client, DGR_Client);
	DGR_Client->Columns[0]->Visible = false;
	DGR_Client->Columns["Modyfication"]->Visible = false;
}
private: System::Void BtnRE_Search_Click(System::Object^  sender, System::EventArgs^  e) {
	search_employees(TxtR_Employee, DGR_Employee);
	DGR_Employee->Columns[0]->Visible = false;
}
private: System::Void DGR_Service_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0){
		TxtRL_Service->Text = DGR_Service->Rows[e->RowIndex]->Cells["Name"]->Value->ToString();
		id_Service = Convert::ToInt32(DGR_Service->Rows[e->RowIndex]->Cells[0]->Value);
	}


}
private: System::Void DGR_Client_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	if (e->RowIndex >= 0){
		TxtRL_Client->Text = DGR_Client->Rows[e->RowIndex]->Cells["Name"]->Value->ToString()+" "+
		DGR_Client->Rows[e->RowIndex]->Cells["Surname"]->Value->ToString();
		id_Client = Convert::ToInt32(DGR_Client->Rows[e->RowIndex]->Cells[0]->Value);
	}
}
private: void show_Termin(){
	String^ Time;
	int counter = 0;
	String^ Work_from;
	String^ Work_to;
	int Hour_start, Hour_stop;
	String^ Client = "";
	String^ Service = "";
	DateTime^ Day_week = Convert::ToDateTime(DateSelect);
	int Day = Convert::ToInt16(Day_week->DayOfWeek);

	GBox_Hours->Controls->Clear();

	if (id_Record >= 0){
		id_Employee = Convert::ToInt32(DGR_Employee->Rows[id_Record]->Cells[0]->Value);
	}

	switch (Day){
	case 1:
		Work_from = "Mon_from";
		Work_to = "Mon_to";
		break;
	case 2:
		Work_from = "Tue_from";
		Work_to = "Tue_to";
		break;
	case 3:
		Work_from = "Wed_from";
		Work_to = "Wed_to";
		break;
	case 4:
		Work_from = "Thu_from";
		Work_to = "Thu_to";
		break;
	case 5:
		Work_from = "Fri_from";
		Work_to = "Fri_to";
		break;
	case 6:
		Work_from = "Sat_from";
		Work_to = "Sat_to";
		break;
	case 0:
		MessageBox::Show("The selected Employee doesn't work on Sunday ! \n You back to Monday","Information",MessageBoxButtons::OK,MessageBoxIcon::Information);
		Work_from = "Mon_from";
		Work_to = "Mon_to";
		break;
	}

	MySqlConnection ^ LinkBase = gcnew MySqlConnection(Configuration);
	LinkBase->Open();
	MySqlCommand^ Question = gcnew MySqlCommand("SELECT date_format(" + Work_from + ",'%H') AS H_start, date_format(" + Work_to + ", '%H') AS H_stop FROM hours WHERE User_id = " + id_Employee + " ", LinkBase);
	MySqlDataReader^ DataRead;
	DataRead = Question->ExecuteReader();
	DataRead->Read();
	if (DataRead->HasRows){

		Hour_start = Convert::ToInt32(DataRead->GetInt32("H_start"));
		Hour_stop = Convert::ToInt32(DataRead->GetInt32("H_stop"));
	}

	LinkBase->Close();

	for (int i = Hour_start; i <Hour_stop; i++)
	{
		for (int minuts = 0; minuts < 60; minuts += 30){
			Time = DateSelect + " " + i + ":" + minuts + ":00";

			DateTime hour_r = Convert::ToDateTime(Time);
			LinkBase->Open();
			MySqlCommand^ Question = gcnew MySqlCommand("SELECT date_format(visits.Reservation_from, '%H:%i') AS Rod, date_format(visits.Reservation_to, '%H:%i') AS Rdo, services.Name, clients.Surname FROM visits, services, clients WHERE visits.Reservation_from ='" + hour_r + "' AND Visits.Users_id= " + id_Employee + " AND services.services_id = visits.Services_id AND clients.clients_id = visits.Clients_id", LinkBase);
			//MySqlCommand^ zapytanie = gcnew MySqlComman("SELECT date_format(wizyty.rezerwacja_od, '%H:%i') AS ROd, date_format(wizyty.rezerwacja_do, '%H:%i') AS RDo, uslugi.nazwa, klienci.nazwisko FROM wizyty, uslugi, klienci WHERE  wizyty.rezerwacja_od = '" + godzina_r + "' AND wizyty.uzytkownik_id = " + id_pracownik + " AND uslugi.uslugi_id = wizyty.uslugi_id AND klienci.klienci_id = wizyty.klienci_id", laczBaze);
			MySqlDataReader^ DataRead;
			DataRead = Question->ExecuteReader();
			DataRead->Read();
			///////////////////////////////////////////////////////////////////////////////////////
			System::Windows::Forms::TextBox^ FieldHours = gcnew System::Windows::Forms::TextBox();
			GBox_Hours->Controls->Add(FieldHours);
			FieldHours->Width = 160;
			FieldHours->BackColor = System::Drawing::Color::White;
			if (DataRead->HasRows){
				FieldHours->BackColor = System::Drawing::Color::Red;
				Service = DataRead->GetString("Name");
				Client = DataRead->GetString("Surname");
			}
			else{
				Service = "";
				Client = "";
			}
			//FieldHours->Text = Convert::ToString(i);
			FieldHours->Text = String::Format(hour_r.ToShortTimeString()) + " " + Service + " " + Client;
			FieldHours->Click += gcnew System::EventHandler(this, &ApplicationForm::Field_Click);
			FieldHours->Location = System::Drawing::Point(15, 15 + 20 * counter);
			counter++;
			LinkBase->Close();
		}
	}



}
private: System::Void DGR_Employee_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	Calendar->Enabled = true;
	id_Record = e->RowIndex;
	show_Termin();
}
private: System::Void Field_Click(System::Object^  sender, System::EventArgs^  e) {
	TextBox^ Field = safe_cast<TextBox^>(sender);
	HourSelect = Field->Text;
	TxtRL_Termin->Text = DateSelect + " " + HourSelect;
}
private: System::Void Calendar_DateSelected(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	DateSelect = String::Format(e->Start.ToShortDateString());
	TxtRL_Termin->Text = DateSelect;
	show_Termin();
	
}
private: System::Void BtnR_Add_Click(System::Object^  sender, System::EventArgs^  e) {
//add reservation for client
	if (id_Client <=0 || id_Service <=0 || id_Employee <=0 || TxtRL_Termin->Text->Length < 14){

		MessageBox::Show("Data is not complete");
	}
	else
	{
		Employee_Type();
		MySqlConnection^ LinkBase = gcnew MySqlConnection(Configuration);
		MySqlCommand^ Order = LinkBase->CreateCommand();
		MySqlTransaction^ transaction;
		LinkBase->Open();
		transaction = LinkBase->BeginTransaction(IsolationLevel::ReadCommitted);
		Order->Connection = LinkBase;
		Order->Transaction = transaction;///ID_User
		try{
			DateTime^ Reservation_from = Convert::ToDateTime(DateSelect + " " + HourSelect);
			Order->CommandText = "INSERT INTO Visits SET Clients_id = " + id_Client + ", Services_id =" + id_Service
				+ ", Users_id = " + id_Employee + ", Reservation_from = '" + Reservation_from + "', Reservation_to = '" + Reservation_from
				+ "', Status = 'waiting' ;";
			Order->ExecuteNonQuery();
			transaction->Commit();
			MessageBox::Show("Reservation for Client has been successfully add  to database :)");
		}
		catch (Exception^ Statement){
			MessageBox::Show(Statement->Message);
			transaction->Rollback();
		}
		LinkBase->Close();
	}
	show_Termin();

}
};
}