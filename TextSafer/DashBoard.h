#pragma once
#include "Cipher.h"

namespace TextSafer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashBoard
	/// </summary>
	public ref class DashBoard : public System::Windows::Forms::Form
	{
	public:
		DashBoard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			InitializeSetup();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnSimpleXOR;

	private: System::Windows::Forms::Button^ btnColumnarTransposition;

	private: System::Windows::Forms::Button^ btnSubstitution;

	private: System::Windows::Forms::Button^ btnVigenere;
	private: System::Windows::Forms::Button^ btnAtbash;




	private: System::Windows::Forms::Button^ btnCaesar;

	private: System::Windows::Forms::GroupBox^ tabWelcome;



































	private: System::Windows::Forms::GroupBox^ tabCaesar;
	private: System::Windows::Forms::Button^ btnCaesarCopy;

	private: System::Windows::Forms::Button^ btnCaesarDecrypt;

	private: System::Windows::Forms::Button^ btnCaesarEncrypt;

	private: System::Windows::Forms::Label^ lblCaesarOutput;

	private: System::Windows::Forms::NumericUpDown^ txtCaesarShiftKey;

	private: System::Windows::Forms::Label^ lblCaesarShiftKey;

	private: System::Windows::Forms::Label^ lblCaesarText;
	private: System::Windows::Forms::TextBox^ txtCaesarText;
	private: System::Windows::Forms::GroupBox^ tabAtBash;
	private: System::Windows::Forms::Button^ btnAtBashCopy;

	private: System::Windows::Forms::Button^ btnAtBashDecrypt;

	private: System::Windows::Forms::Button^ btnAtBashEncrypt;

	private: System::Windows::Forms::Label^ lblAtBashOutput;




	private: System::Windows::Forms::Label^ lblAtBashText;
	private: System::Windows::Forms::TextBox^ txtAtBashText;
	private: System::Windows::Forms::GroupBox^ tabVigenere;
	private: System::Windows::Forms::Button^ btnVigenereCopy;

	private: System::Windows::Forms::Button^ btnVigenereDecrypt;

	private: System::Windows::Forms::Button^ btnVigenereEncrypt;

	private: System::Windows::Forms::Label^ lblVigenereOutput;


	private: System::Windows::Forms::Label^ lblVigenereKey;

	private: System::Windows::Forms::Label^ lblVigenereText;
	private: System::Windows::Forms::TextBox^ txtVigenereText;
	private: System::Windows::Forms::TextBox^ txtVigenereKey;
	private: System::Windows::Forms::GroupBox^ tabSubstitution;
	private: System::Windows::Forms::Button^ btnSubstitutionCopy;

	private: System::Windows::Forms::Button^ btnSubstitutionDecrypt;

	private: System::Windows::Forms::Button^ btnSubstitutionEncrypt;

	private: System::Windows::Forms::Label^ lblSubstitutionOutput;


	private: System::Windows::Forms::Label^ lblSubstitutionKey;

	private: System::Windows::Forms::Label^ lblSubstitutionText;
	private: System::Windows::Forms::TextBox^ txtSubstitutionText;
	private: System::Windows::Forms::TextBox^ txtSubstitutionKey;
	private: System::Windows::Forms::GroupBox^ tabColumnarTransposition;

	private: System::Windows::Forms::Button^ btnColumnarTranspositionCopy;
	private: System::Windows::Forms::Button^ btnColumnarTranspositionDecrypt;


	private: System::Windows::Forms::Button^ btnColumnarTranspositionEncrypt;
	private: System::Windows::Forms::Label^ lblColumnarTranspositionOutput;
	private: System::Windows::Forms::Label^ lblColumnarTranspositionKey;




	private: System::Windows::Forms::Label^ lblColumnarTranspositionText;
	private: System::Windows::Forms::TextBox^ txtColumnarTranspositionText;
	private: System::Windows::Forms::TextBox^ txtColumnarTranspositionKey;
	private: System::Windows::Forms::GroupBox^ tabSimpleXOR;
	private: System::Windows::Forms::Button^ btnSimpleXORCopy;


	private: System::Windows::Forms::Button^ btnSimpleXORDecrypt;

	private: System::Windows::Forms::Button^ btnSimpleXOREncrypt;

	private: System::Windows::Forms::Label^ lblSimpleXOROutput;
	private: System::Windows::Forms::Label^ lblSimpleXORKey;



	private: System::Windows::Forms::Label^ lblSimpleXORText;
	private: System::Windows::Forms::TextBox^ txtSimpleXORText;
	private: System::Windows::Forms::TextBox^ txtSimpleXORKey;




















	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashBoard::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnSimpleXOR = (gcnew System::Windows::Forms::Button());
			this->btnColumnarTransposition = (gcnew System::Windows::Forms::Button());
			this->btnSubstitution = (gcnew System::Windows::Forms::Button());
			this->btnVigenere = (gcnew System::Windows::Forms::Button());
			this->btnAtbash = (gcnew System::Windows::Forms::Button());
			this->btnCaesar = (gcnew System::Windows::Forms::Button());
			this->tabWelcome = (gcnew System::Windows::Forms::GroupBox());
			this->tabCaesar = (gcnew System::Windows::Forms::GroupBox());
			this->btnCaesarCopy = (gcnew System::Windows::Forms::Button());
			this->btnCaesarDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnCaesarEncrypt = (gcnew System::Windows::Forms::Button());
			this->lblCaesarOutput = (gcnew System::Windows::Forms::Label());
			this->txtCaesarShiftKey = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblCaesarShiftKey = (gcnew System::Windows::Forms::Label());
			this->lblCaesarText = (gcnew System::Windows::Forms::Label());
			this->txtCaesarText = (gcnew System::Windows::Forms::TextBox());
			this->tabAtBash = (gcnew System::Windows::Forms::GroupBox());
			this->btnAtBashCopy = (gcnew System::Windows::Forms::Button());
			this->btnAtBashDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnAtBashEncrypt = (gcnew System::Windows::Forms::Button());
			this->lblAtBashOutput = (gcnew System::Windows::Forms::Label());
			this->lblAtBashText = (gcnew System::Windows::Forms::Label());
			this->txtAtBashText = (gcnew System::Windows::Forms::TextBox());
			this->tabVigenere = (gcnew System::Windows::Forms::GroupBox());
			this->txtVigenereKey = (gcnew System::Windows::Forms::TextBox());
			this->btnVigenereCopy = (gcnew System::Windows::Forms::Button());
			this->btnVigenereDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnVigenereEncrypt = (gcnew System::Windows::Forms::Button());
			this->lblVigenereOutput = (gcnew System::Windows::Forms::Label());
			this->lblVigenereKey = (gcnew System::Windows::Forms::Label());
			this->lblVigenereText = (gcnew System::Windows::Forms::Label());
			this->txtVigenereText = (gcnew System::Windows::Forms::TextBox());
			this->tabSubstitution = (gcnew System::Windows::Forms::GroupBox());
			this->txtSubstitutionKey = (gcnew System::Windows::Forms::TextBox());
			this->btnSubstitutionCopy = (gcnew System::Windows::Forms::Button());
			this->btnSubstitutionDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnSubstitutionEncrypt = (gcnew System::Windows::Forms::Button());
			this->lblSubstitutionOutput = (gcnew System::Windows::Forms::Label());
			this->lblSubstitutionKey = (gcnew System::Windows::Forms::Label());
			this->lblSubstitutionText = (gcnew System::Windows::Forms::Label());
			this->txtSubstitutionText = (gcnew System::Windows::Forms::TextBox());
			this->tabColumnarTransposition = (gcnew System::Windows::Forms::GroupBox());
			this->txtColumnarTranspositionKey = (gcnew System::Windows::Forms::TextBox());
			this->btnColumnarTranspositionCopy = (gcnew System::Windows::Forms::Button());
			this->btnColumnarTranspositionDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnColumnarTranspositionEncrypt = (gcnew System::Windows::Forms::Button());
			this->lblColumnarTranspositionOutput = (gcnew System::Windows::Forms::Label());
			this->lblColumnarTranspositionKey = (gcnew System::Windows::Forms::Label());
			this->lblColumnarTranspositionText = (gcnew System::Windows::Forms::Label());
			this->txtColumnarTranspositionText = (gcnew System::Windows::Forms::TextBox());
			this->tabSimpleXOR = (gcnew System::Windows::Forms::GroupBox());
			this->btnSimpleXORCopy = (gcnew System::Windows::Forms::Button());
			this->btnSimpleXORDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnSimpleXOREncrypt = (gcnew System::Windows::Forms::Button());
			this->lblSimpleXOROutput = (gcnew System::Windows::Forms::Label());
			this->lblSimpleXORKey = (gcnew System::Windows::Forms::Label());
			this->lblSimpleXORText = (gcnew System::Windows::Forms::Label());
			this->txtSimpleXORText = (gcnew System::Windows::Forms::TextBox());
			this->txtSimpleXORKey = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tabCaesar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtCaesarShiftKey))->BeginInit();
			this->tabAtBash->SuspendLayout();
			this->tabVigenere->SuspendLayout();
			this->tabSubstitution->SuspendLayout();
			this->tabColumnarTransposition->SuspendLayout();
			this->tabSimpleXOR->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->btnSimpleXOR, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->btnColumnarTransposition, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->btnSubstitution, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->btnVigenere, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnAtbash, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnCaesar, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 7;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(195, 364);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// btnSimpleXOR
			// 
			this->btnSimpleXOR->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSimpleXOR->Location = System::Drawing::Point(3, 300);
			this->btnSimpleXOR->Name = L"btnSimpleXOR";
			this->btnSimpleXOR->Size = System::Drawing::Size(188, 59);
			this->btnSimpleXOR->TabIndex = 6;
			this->btnSimpleXOR->Text = L"Simple XOR Cipher ";
			this->btnSimpleXOR->UseVisualStyleBackColor = true;
			this->btnSimpleXOR->Click += gcnew System::EventHandler(this, &DashBoard::btnSimpleXOR_Click);
			// 
			// btnColumnarTransposition
			// 
			this->btnColumnarTransposition->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnColumnarTransposition->Location = System::Drawing::Point(3, 212);
			this->btnColumnarTransposition->Name = L"btnColumnarTransposition";
			this->btnColumnarTransposition->Size = System::Drawing::Size(188, 82);
			this->btnColumnarTransposition->TabIndex = 5;
			this->btnColumnarTransposition->Text = L"Columnar Transposition Cipher ";
			this->btnColumnarTransposition->UseVisualStyleBackColor = true;
			this->btnColumnarTransposition->Click += gcnew System::EventHandler(this, &DashBoard::btnColumnarTransposition_Click);
			// 
			// btnSubstitution
			// 
			this->btnSubstitution->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubstitution->Location = System::Drawing::Point(3, 147);
			this->btnSubstitution->Name = L"btnSubstitution";
			this->btnSubstitution->Size = System::Drawing::Size(188, 59);
			this->btnSubstitution->TabIndex = 4;
			this->btnSubstitution->Text = L"Substitution Cipher";
			this->btnSubstitution->UseVisualStyleBackColor = true;
			this->btnSubstitution->Click += gcnew System::EventHandler(this, &DashBoard::btnSubstitution_Click);
			// 
			// btnVigenere
			// 
			this->btnVigenere->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVigenere->Location = System::Drawing::Point(3, 99);
			this->btnVigenere->Name = L"btnVigenere";
			this->btnVigenere->Size = System::Drawing::Size(188, 42);
			this->btnVigenere->TabIndex = 3;
			this->btnVigenere->Text = L"Vigenère Cipher ";
			this->btnVigenere->UseVisualStyleBackColor = true;
			this->btnVigenere->Click += gcnew System::EventHandler(this, &DashBoard::btnVigenere_Click);
			// 
			// btnAtbash
			// 
			this->btnAtbash->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAtbash->Location = System::Drawing::Point(3, 51);
			this->btnAtbash->Name = L"btnAtbash";
			this->btnAtbash->Size = System::Drawing::Size(188, 42);
			this->btnAtbash->TabIndex = 2;
			this->btnAtbash->Text = L"Atbash Cipher ";
			this->btnAtbash->UseVisualStyleBackColor = true;
			this->btnAtbash->Click += gcnew System::EventHandler(this, &DashBoard::btnAtbash_Click);
			// 
			// btnCaesar
			// 
			this->btnCaesar->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCaesar->Location = System::Drawing::Point(3, 3);
			this->btnCaesar->Name = L"btnCaesar";
			this->btnCaesar->Size = System::Drawing::Size(188, 42);
			this->btnCaesar->TabIndex = 1;
			this->btnCaesar->Text = L"Caesar Cipher";
			this->btnCaesar->UseVisualStyleBackColor = true;
			this->btnCaesar->Click += gcnew System::EventHandler(this, &DashBoard::btnCaesar_Click);
			// 
			// tabWelcome
			// 
			this->tabWelcome->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabWelcome.BackgroundImage")));
			this->tabWelcome->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabWelcome->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabWelcome->Location = System::Drawing::Point(226, 13);
			this->tabWelcome->Name = L"tabWelcome";
			this->tabWelcome->Size = System::Drawing::Size(613, 361);
			this->tabWelcome->TabIndex = 1;
			this->tabWelcome->TabStop = false;
			// 
			// tabCaesar
			// 
			this->tabCaesar->Controls->Add(this->btnCaesarCopy);
			this->tabCaesar->Controls->Add(this->btnCaesarDecrypt);
			this->tabCaesar->Controls->Add(this->btnCaesarEncrypt);
			this->tabCaesar->Controls->Add(this->lblCaesarOutput);
			this->tabCaesar->Controls->Add(this->txtCaesarShiftKey);
			this->tabCaesar->Controls->Add(this->lblCaesarShiftKey);
			this->tabCaesar->Controls->Add(this->lblCaesarText);
			this->tabCaesar->Controls->Add(this->txtCaesarText);
			this->tabCaesar->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabCaesar->Location = System::Drawing::Point(226, 13);
			this->tabCaesar->Name = L"tabCaesar";
			this->tabCaesar->Size = System::Drawing::Size(613, 361);
			this->tabCaesar->TabIndex = 2;
			this->tabCaesar->TabStop = false;
			this->tabCaesar->Text = L"Caesar Cipher";
			// 
			// btnCaesarCopy
			// 
			this->btnCaesarCopy->Location = System::Drawing::Point(478, 291);
			this->btnCaesarCopy->Name = L"btnCaesarCopy";
			this->btnCaesarCopy->Size = System::Drawing::Size(100, 43);
			this->btnCaesarCopy->TabIndex = 8;
			this->btnCaesarCopy->Text = L"Copy";
			this->btnCaesarCopy->UseVisualStyleBackColor = true;
			this->btnCaesarCopy->Click += gcnew System::EventHandler(this, &DashBoard::btnCaesarCopy_Click);
			// 
			// btnCaesarDecrypt
			// 
			this->btnCaesarDecrypt->AutoSize = true;
			this->btnCaesarDecrypt->Location = System::Drawing::Point(166, 291);
			this->btnCaesarDecrypt->Name = L"btnCaesarDecrypt";
			this->btnCaesarDecrypt->Size = System::Drawing::Size(115, 43);
			this->btnCaesarDecrypt->TabIndex = 7;
			this->btnCaesarDecrypt->Text = L"Decrypt";
			this->btnCaesarDecrypt->UseVisualStyleBackColor = true;
			this->btnCaesarDecrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnCaesarDecrypt_Click);
			// 
			// btnCaesarEncrypt
			// 
			this->btnCaesarEncrypt->AutoSize = true;
			this->btnCaesarEncrypt->Location = System::Drawing::Point(33, 291);
			this->btnCaesarEncrypt->Name = L"btnCaesarEncrypt";
			this->btnCaesarEncrypt->Size = System::Drawing::Size(107, 43);
			this->btnCaesarEncrypt->TabIndex = 6;
			this->btnCaesarEncrypt->Text = L"Encrypt";
			this->btnCaesarEncrypt->UseVisualStyleBackColor = true;
			this->btnCaesarEncrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnCaesarEncrypt_Click);
			// 
			// lblCaesarOutput
			// 
			this->lblCaesarOutput->ForeColor = System::Drawing::Color::ForestGreen;
			this->lblCaesarOutput->Location = System::Drawing::Point(34, 179);
			this->lblCaesarOutput->Name = L"lblCaesarOutput";
			this->lblCaesarOutput->Size = System::Drawing::Size(545, 95);
			this->lblCaesarOutput->TabIndex = 5;
			this->lblCaesarOutput->Text = L"label1";
			// 
			// txtCaesarShiftKey
			// 
			this->txtCaesarShiftKey->Location = System::Drawing::Point(147, 133);
			this->txtCaesarShiftKey->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 26, 0, 0, 0 });
			this->txtCaesarShiftKey->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->txtCaesarShiftKey->Name = L"txtCaesarShiftKey";
			this->txtCaesarShiftKey->Size = System::Drawing::Size(56, 29);
			this->txtCaesarShiftKey->TabIndex = 4;
			this->txtCaesarShiftKey->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// lblCaesarShiftKey
			// 
			this->lblCaesarShiftKey->AutoSize = true;
			this->lblCaesarShiftKey->Location = System::Drawing::Point(30, 135);
			this->lblCaesarShiftKey->Name = L"lblCaesarShiftKey";
			this->lblCaesarShiftKey->Size = System::Drawing::Size(97, 22);
			this->lblCaesarShiftKey->TabIndex = 3;
			this->lblCaesarShiftKey->Text = L"Shift Key";
			// 
			// lblCaesarText
			// 
			this->lblCaesarText->AutoSize = true;
			this->lblCaesarText->Location = System::Drawing::Point(30, 40);
			this->lblCaesarText->Name = L"lblCaesarText";
			this->lblCaesarText->Size = System::Drawing::Size(50, 22);
			this->lblCaesarText->TabIndex = 2;
			this->lblCaesarText->Text = L"Text";
			// 
			// txtCaesarText
			// 
			this->txtCaesarText->Location = System::Drawing::Point(147, 40);
			this->txtCaesarText->Multiline = true;
			this->txtCaesarText->Name = L"txtCaesarText";
			this->txtCaesarText->Size = System::Drawing::Size(432, 77);
			this->txtCaesarText->TabIndex = 0;
			// 
			// tabAtBash
			// 
			this->tabAtBash->Controls->Add(this->btnAtBashCopy);
			this->tabAtBash->Controls->Add(this->btnAtBashDecrypt);
			this->tabAtBash->Controls->Add(this->btnAtBashEncrypt);
			this->tabAtBash->Controls->Add(this->lblAtBashOutput);
			this->tabAtBash->Controls->Add(this->lblAtBashText);
			this->tabAtBash->Controls->Add(this->txtAtBashText);
			this->tabAtBash->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabAtBash->Location = System::Drawing::Point(228, 11);
			this->tabAtBash->Name = L"tabAtBash";
			this->tabAtBash->Size = System::Drawing::Size(613, 361);
			this->tabAtBash->TabIndex = 9;
			this->tabAtBash->TabStop = false;
			this->tabAtBash->Text = L"At Bash Cipher";
			// 
			// btnAtBashCopy
			// 
			this->btnAtBashCopy->Location = System::Drawing::Point(478, 291);
			this->btnAtBashCopy->Name = L"btnAtBashCopy";
			this->btnAtBashCopy->Size = System::Drawing::Size(100, 43);
			this->btnAtBashCopy->TabIndex = 8;
			this->btnAtBashCopy->Text = L"Copy";
			this->btnAtBashCopy->UseVisualStyleBackColor = true;
			this->btnAtBashCopy->Click += gcnew System::EventHandler(this, &DashBoard::btnAtBashCopy_Click);
			// 
			// btnAtBashDecrypt
			// 
			this->btnAtBashDecrypt->AutoSize = true;
			this->btnAtBashDecrypt->Location = System::Drawing::Point(166, 291);
			this->btnAtBashDecrypt->Name = L"btnAtBashDecrypt";
			this->btnAtBashDecrypt->Size = System::Drawing::Size(115, 43);
			this->btnAtBashDecrypt->TabIndex = 7;
			this->btnAtBashDecrypt->Text = L"Decrypt";
			this->btnAtBashDecrypt->UseVisualStyleBackColor = true;
			this->btnAtBashDecrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnAtBashDecrypt_Click);
			// 
			// btnAtBashEncrypt
			// 
			this->btnAtBashEncrypt->AutoSize = true;
			this->btnAtBashEncrypt->Location = System::Drawing::Point(33, 291);
			this->btnAtBashEncrypt->Name = L"btnAtBashEncrypt";
			this->btnAtBashEncrypt->Size = System::Drawing::Size(107, 43);
			this->btnAtBashEncrypt->TabIndex = 6;
			this->btnAtBashEncrypt->Text = L"Encrypt";
			this->btnAtBashEncrypt->UseVisualStyleBackColor = true;
			this->btnAtBashEncrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnAtBashEncrypt_Click);
			// 
			// lblAtBashOutput
			// 
			this->lblAtBashOutput->ForeColor = System::Drawing::Color::ForestGreen;
			this->lblAtBashOutput->Location = System::Drawing::Point(34, 137);
			this->lblAtBashOutput->Name = L"lblAtBashOutput";
			this->lblAtBashOutput->Size = System::Drawing::Size(545, 137);
			this->lblAtBashOutput->TabIndex = 5;
			this->lblAtBashOutput->Text = L"label1";
			// 
			// lblAtBashText
			// 
			this->lblAtBashText->AutoSize = true;
			this->lblAtBashText->Location = System::Drawing::Point(30, 40);
			this->lblAtBashText->Name = L"lblAtBashText";
			this->lblAtBashText->Size = System::Drawing::Size(50, 22);
			this->lblAtBashText->TabIndex = 2;
			this->lblAtBashText->Text = L"Text";
			// 
			// txtAtBashText
			// 
			this->txtAtBashText->Location = System::Drawing::Point(147, 40);
			this->txtAtBashText->Multiline = true;
			this->txtAtBashText->Name = L"txtAtBashText";
			this->txtAtBashText->Size = System::Drawing::Size(432, 77);
			this->txtAtBashText->TabIndex = 0;
			// 
			// tabVigenere
			// 
			this->tabVigenere->Controls->Add(this->txtVigenereKey);
			this->tabVigenere->Controls->Add(this->btnVigenereCopy);
			this->tabVigenere->Controls->Add(this->btnVigenereDecrypt);
			this->tabVigenere->Controls->Add(this->btnVigenereEncrypt);
			this->tabVigenere->Controls->Add(this->lblVigenereOutput);
			this->tabVigenere->Controls->Add(this->lblVigenereKey);
			this->tabVigenere->Controls->Add(this->lblVigenereText);
			this->tabVigenere->Controls->Add(this->txtVigenereText);
			this->tabVigenere->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabVigenere->Location = System::Drawing::Point(230, 11);
			this->tabVigenere->Name = L"tabVigenere";
			this->tabVigenere->Size = System::Drawing::Size(613, 361);
			this->tabVigenere->TabIndex = 9;
			this->tabVigenere->TabStop = false;
			this->tabVigenere->Text = L"Vigenère Cipher";
			// 
			// txtVigenereKey
			// 
			this->txtVigenereKey->Location = System::Drawing::Point(147, 135);
			this->txtVigenereKey->Name = L"txtVigenereKey";
			this->txtVigenereKey->Size = System::Drawing::Size(150, 29);
			this->txtVigenereKey->TabIndex = 9;
			// 
			// btnVigenereCopy
			// 
			this->btnVigenereCopy->Location = System::Drawing::Point(478, 291);
			this->btnVigenereCopy->Name = L"btnVigenereCopy";
			this->btnVigenereCopy->Size = System::Drawing::Size(100, 43);
			this->btnVigenereCopy->TabIndex = 8;
			this->btnVigenereCopy->Text = L"Copy";
			this->btnVigenereCopy->UseVisualStyleBackColor = true;
			this->btnVigenereCopy->Click += gcnew System::EventHandler(this, &DashBoard::btnVigenereCopy_Click);
			// 
			// btnVigenereDecrypt
			// 
			this->btnVigenereDecrypt->AutoSize = true;
			this->btnVigenereDecrypt->Location = System::Drawing::Point(166, 291);
			this->btnVigenereDecrypt->Name = L"btnVigenereDecrypt";
			this->btnVigenereDecrypt->Size = System::Drawing::Size(115, 43);
			this->btnVigenereDecrypt->TabIndex = 7;
			this->btnVigenereDecrypt->Text = L"Decrypt";
			this->btnVigenereDecrypt->UseVisualStyleBackColor = true;
			this->btnVigenereDecrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnVigenereDecrypt_Click);
			// 
			// btnVigenereEncrypt
			// 
			this->btnVigenereEncrypt->AutoSize = true;
			this->btnVigenereEncrypt->Location = System::Drawing::Point(33, 291);
			this->btnVigenereEncrypt->Name = L"btnVigenereEncrypt";
			this->btnVigenereEncrypt->Size = System::Drawing::Size(107, 43);
			this->btnVigenereEncrypt->TabIndex = 6;
			this->btnVigenereEncrypt->Text = L"Encrypt";
			this->btnVigenereEncrypt->UseVisualStyleBackColor = true;
			this->btnVigenereEncrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnVigenereEncrypt_Click);
			// 
			// lblVigenereOutput
			// 
			this->lblVigenereOutput->ForeColor = System::Drawing::Color::ForestGreen;
			this->lblVigenereOutput->Location = System::Drawing::Point(34, 179);
			this->lblVigenereOutput->Name = L"lblVigenereOutput";
			this->lblVigenereOutput->Size = System::Drawing::Size(545, 95);
			this->lblVigenereOutput->TabIndex = 5;
			this->lblVigenereOutput->Text = L"label1";
			// 
			// lblVigenereKey
			// 
			this->lblVigenereKey->AutoSize = true;
			this->lblVigenereKey->Location = System::Drawing::Point(30, 135);
			this->lblVigenereKey->Name = L"lblVigenereKey";
			this->lblVigenereKey->Size = System::Drawing::Size(45, 22);
			this->lblVigenereKey->TabIndex = 3;
			this->lblVigenereKey->Text = L"Key";
			// 
			// lblVigenereText
			// 
			this->lblVigenereText->AutoSize = true;
			this->lblVigenereText->Location = System::Drawing::Point(30, 40);
			this->lblVigenereText->Name = L"lblVigenereText";
			this->lblVigenereText->Size = System::Drawing::Size(50, 22);
			this->lblVigenereText->TabIndex = 2;
			this->lblVigenereText->Text = L"Text";
			// 
			// txtVigenereText
			// 
			this->txtVigenereText->Location = System::Drawing::Point(147, 40);
			this->txtVigenereText->Multiline = true;
			this->txtVigenereText->Name = L"txtVigenereText";
			this->txtVigenereText->Size = System::Drawing::Size(432, 77);
			this->txtVigenereText->TabIndex = 0;
			// 
			// tabSubstitution
			// 
			this->tabSubstitution->Controls->Add(this->txtSubstitutionKey);
			this->tabSubstitution->Controls->Add(this->btnSubstitutionCopy);
			this->tabSubstitution->Controls->Add(this->btnSubstitutionDecrypt);
			this->tabSubstitution->Controls->Add(this->btnSubstitutionEncrypt);
			this->tabSubstitution->Controls->Add(this->lblSubstitutionOutput);
			this->tabSubstitution->Controls->Add(this->lblSubstitutionKey);
			this->tabSubstitution->Controls->Add(this->lblSubstitutionText);
			this->tabSubstitution->Controls->Add(this->txtSubstitutionText);
			this->tabSubstitution->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabSubstitution->Location = System::Drawing::Point(230, 12);
			this->tabSubstitution->Name = L"tabSubstitution";
			this->tabSubstitution->Size = System::Drawing::Size(613, 361);
			this->tabSubstitution->TabIndex = 9;
			this->tabSubstitution->TabStop = false;
			this->tabSubstitution->Text = L"Substitution Cipher";
			// 
			// txtSubstitutionKey
			// 
			this->txtSubstitutionKey->Location = System::Drawing::Point(147, 136);
			this->txtSubstitutionKey->Name = L"txtSubstitutionKey";
			this->txtSubstitutionKey->Size = System::Drawing::Size(150, 29);
			this->txtSubstitutionKey->TabIndex = 9;
			// 
			// btnSubstitutionCopy
			// 
			this->btnSubstitutionCopy->Location = System::Drawing::Point(478, 291);
			this->btnSubstitutionCopy->Name = L"btnSubstitutionCopy";
			this->btnSubstitutionCopy->Size = System::Drawing::Size(100, 43);
			this->btnSubstitutionCopy->TabIndex = 8;
			this->btnSubstitutionCopy->Text = L"Copy";
			this->btnSubstitutionCopy->UseVisualStyleBackColor = true;
			this->btnSubstitutionCopy->Click += gcnew System::EventHandler(this, &DashBoard::btnSubstitutionCopy_Click);
			// 
			// btnSubstitutionDecrypt
			// 
			this->btnSubstitutionDecrypt->AutoSize = true;
			this->btnSubstitutionDecrypt->Location = System::Drawing::Point(166, 291);
			this->btnSubstitutionDecrypt->Name = L"btnSubstitutionDecrypt";
			this->btnSubstitutionDecrypt->Size = System::Drawing::Size(115, 43);
			this->btnSubstitutionDecrypt->TabIndex = 7;
			this->btnSubstitutionDecrypt->Text = L"Decrypt";
			this->btnSubstitutionDecrypt->UseVisualStyleBackColor = true;
			this->btnSubstitutionDecrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnSubstitutionDecrypt_Click);
			// 
			// btnSubstitutionEncrypt
			// 
			this->btnSubstitutionEncrypt->AutoSize = true;
			this->btnSubstitutionEncrypt->Location = System::Drawing::Point(33, 291);
			this->btnSubstitutionEncrypt->Name = L"btnSubstitutionEncrypt";
			this->btnSubstitutionEncrypt->Size = System::Drawing::Size(107, 43);
			this->btnSubstitutionEncrypt->TabIndex = 6;
			this->btnSubstitutionEncrypt->Text = L"Encrypt";
			this->btnSubstitutionEncrypt->UseVisualStyleBackColor = true;
			this->btnSubstitutionEncrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnSubstitutionEncrypt_Click);
			// 
			// lblSubstitutionOutput
			// 
			this->lblSubstitutionOutput->ForeColor = System::Drawing::Color::ForestGreen;
			this->lblSubstitutionOutput->Location = System::Drawing::Point(34, 179);
			this->lblSubstitutionOutput->Name = L"lblSubstitutionOutput";
			this->lblSubstitutionOutput->Size = System::Drawing::Size(545, 95);
			this->lblSubstitutionOutput->TabIndex = 5;
			this->lblSubstitutionOutput->Text = L"label1";
			// 
			// lblSubstitutionKey
			// 
			this->lblSubstitutionKey->AutoSize = true;
			this->lblSubstitutionKey->Location = System::Drawing::Point(30, 135);
			this->lblSubstitutionKey->Name = L"lblSubstitutionKey";
			this->lblSubstitutionKey->Size = System::Drawing::Size(45, 22);
			this->lblSubstitutionKey->TabIndex = 3;
			this->lblSubstitutionKey->Text = L"Key";
			// 
			// lblSubstitutionText
			// 
			this->lblSubstitutionText->AutoSize = true;
			this->lblSubstitutionText->Location = System::Drawing::Point(30, 40);
			this->lblSubstitutionText->Name = L"lblSubstitutionText";
			this->lblSubstitutionText->Size = System::Drawing::Size(50, 22);
			this->lblSubstitutionText->TabIndex = 2;
			this->lblSubstitutionText->Text = L"Text";
			// 
			// txtSubstitutionText
			// 
			this->txtSubstitutionText->Location = System::Drawing::Point(147, 40);
			this->txtSubstitutionText->Multiline = true;
			this->txtSubstitutionText->Name = L"txtSubstitutionText";
			this->txtSubstitutionText->Size = System::Drawing::Size(432, 77);
			this->txtSubstitutionText->TabIndex = 0;
			// 
			// tabColumnarTransposition
			// 
			this->tabColumnarTransposition->Controls->Add(this->txtColumnarTranspositionKey);
			this->tabColumnarTransposition->Controls->Add(this->btnColumnarTranspositionCopy);
			this->tabColumnarTransposition->Controls->Add(this->btnColumnarTranspositionDecrypt);
			this->tabColumnarTransposition->Controls->Add(this->btnColumnarTranspositionEncrypt);
			this->tabColumnarTransposition->Controls->Add(this->lblColumnarTranspositionOutput);
			this->tabColumnarTransposition->Controls->Add(this->lblColumnarTranspositionKey);
			this->tabColumnarTransposition->Controls->Add(this->lblColumnarTranspositionText);
			this->tabColumnarTransposition->Controls->Add(this->txtColumnarTranspositionText);
			this->tabColumnarTransposition->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabColumnarTransposition->Location = System::Drawing::Point(228, 11);
			this->tabColumnarTransposition->Name = L"tabColumnarTransposition";
			this->tabColumnarTransposition->Size = System::Drawing::Size(613, 361);
			this->tabColumnarTransposition->TabIndex = 9;
			this->tabColumnarTransposition->TabStop = false;
			this->tabColumnarTransposition->Text = L"Columnar Transposition  Cipher";
			// 
			// txtColumnarTranspositionKey
			// 
			this->txtColumnarTranspositionKey->Location = System::Drawing::Point(149, 137);
			this->txtColumnarTranspositionKey->Name = L"txtColumnarTranspositionKey";
			this->txtColumnarTranspositionKey->Size = System::Drawing::Size(205, 29);
			this->txtColumnarTranspositionKey->TabIndex = 9;
			// 
			// btnColumnarTranspositionCopy
			// 
			this->btnColumnarTranspositionCopy->Location = System::Drawing::Point(478, 291);
			this->btnColumnarTranspositionCopy->Name = L"btnColumnarTranspositionCopy";
			this->btnColumnarTranspositionCopy->Size = System::Drawing::Size(100, 43);
			this->btnColumnarTranspositionCopy->TabIndex = 8;
			this->btnColumnarTranspositionCopy->Text = L"Copy";
			this->btnColumnarTranspositionCopy->UseVisualStyleBackColor = true;
			this->btnColumnarTranspositionCopy->Click += gcnew System::EventHandler(this, &DashBoard::btnColumnarTranspositionCopy_Click);
			// 
			// btnColumnarTranspositionDecrypt
			// 
			this->btnColumnarTranspositionDecrypt->AutoSize = true;
			this->btnColumnarTranspositionDecrypt->Location = System::Drawing::Point(166, 291);
			this->btnColumnarTranspositionDecrypt->Name = L"btnColumnarTranspositionDecrypt";
			this->btnColumnarTranspositionDecrypt->Size = System::Drawing::Size(115, 43);
			this->btnColumnarTranspositionDecrypt->TabIndex = 7;
			this->btnColumnarTranspositionDecrypt->Text = L"Decrypt";
			this->btnColumnarTranspositionDecrypt->UseVisualStyleBackColor = true;
			this->btnColumnarTranspositionDecrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnColumnarTranspositionDecrypt_Click);
			// 
			// btnColumnarTranspositionEncrypt
			// 
			this->btnColumnarTranspositionEncrypt->AutoSize = true;
			this->btnColumnarTranspositionEncrypt->Location = System::Drawing::Point(33, 291);
			this->btnColumnarTranspositionEncrypt->Name = L"btnColumnarTranspositionEncrypt";
			this->btnColumnarTranspositionEncrypt->Size = System::Drawing::Size(107, 43);
			this->btnColumnarTranspositionEncrypt->TabIndex = 6;
			this->btnColumnarTranspositionEncrypt->Text = L"Encrypt";
			this->btnColumnarTranspositionEncrypt->UseVisualStyleBackColor = true;
			this->btnColumnarTranspositionEncrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnColumnarTranspositionEncrypt_Click);
			// 
			// lblColumnarTranspositionOutput
			// 
			this->lblColumnarTranspositionOutput->ForeColor = System::Drawing::Color::ForestGreen;
			this->lblColumnarTranspositionOutput->Location = System::Drawing::Point(34, 179);
			this->lblColumnarTranspositionOutput->Name = L"lblColumnarTranspositionOutput";
			this->lblColumnarTranspositionOutput->Size = System::Drawing::Size(545, 95);
			this->lblColumnarTranspositionOutput->TabIndex = 5;
			this->lblColumnarTranspositionOutput->Text = L"label1";
			// 
			// lblColumnarTranspositionKey
			// 
			this->lblColumnarTranspositionKey->AutoSize = true;
			this->lblColumnarTranspositionKey->Location = System::Drawing::Point(30, 135);
			this->lblColumnarTranspositionKey->Name = L"lblColumnarTranspositionKey";
			this->lblColumnarTranspositionKey->Size = System::Drawing::Size(45, 22);
			this->lblColumnarTranspositionKey->TabIndex = 3;
			this->lblColumnarTranspositionKey->Text = L"Key";
			// 
			// lblColumnarTranspositionText
			// 
			this->lblColumnarTranspositionText->AutoSize = true;
			this->lblColumnarTranspositionText->Location = System::Drawing::Point(30, 40);
			this->lblColumnarTranspositionText->Name = L"lblColumnarTranspositionText";
			this->lblColumnarTranspositionText->Size = System::Drawing::Size(50, 22);
			this->lblColumnarTranspositionText->TabIndex = 2;
			this->lblColumnarTranspositionText->Text = L"Text";
			// 
			// txtColumnarTranspositionText
			// 
			this->txtColumnarTranspositionText->Location = System::Drawing::Point(147, 40);
			this->txtColumnarTranspositionText->Multiline = true;
			this->txtColumnarTranspositionText->Name = L"txtColumnarTranspositionText";
			this->txtColumnarTranspositionText->Size = System::Drawing::Size(432, 77);
			this->txtColumnarTranspositionText->TabIndex = 0;
			// 
			// tabSimpleXOR
			// 
			this->tabSimpleXOR->Controls->Add(this->txtSimpleXORKey);
			this->tabSimpleXOR->Controls->Add(this->btnSimpleXORCopy);
			this->tabSimpleXOR->Controls->Add(this->btnSimpleXORDecrypt);
			this->tabSimpleXOR->Controls->Add(this->btnSimpleXOREncrypt);
			this->tabSimpleXOR->Controls->Add(this->lblSimpleXOROutput);
			this->tabSimpleXOR->Controls->Add(this->lblSimpleXORKey);
			this->tabSimpleXOR->Controls->Add(this->lblSimpleXORText);
			this->tabSimpleXOR->Controls->Add(this->txtSimpleXORText);
			this->tabSimpleXOR->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabSimpleXOR->Location = System::Drawing::Point(228, 11);
			this->tabSimpleXOR->Name = L"tabSimpleXOR";
			this->tabSimpleXOR->Size = System::Drawing::Size(613, 361);
			this->tabSimpleXOR->TabIndex = 9;
			this->tabSimpleXOR->TabStop = false;
			this->tabSimpleXOR->Text = L"Simple XOR Cipher ";
			// 
			// btnSimpleXORCopy
			// 
			this->btnSimpleXORCopy->Location = System::Drawing::Point(478, 291);
			this->btnSimpleXORCopy->Name = L"btnSimpleXORCopy";
			this->btnSimpleXORCopy->Size = System::Drawing::Size(100, 43);
			this->btnSimpleXORCopy->TabIndex = 8;
			this->btnSimpleXORCopy->Text = L"Copy";
			this->btnSimpleXORCopy->UseVisualStyleBackColor = true;
			this->btnSimpleXORCopy->Click += gcnew System::EventHandler(this, &DashBoard::btnSimpleXORCopy_Click);
			// 
			// btnSimpleXORDecrypt
			// 
			this->btnSimpleXORDecrypt->AutoSize = true;
			this->btnSimpleXORDecrypt->Location = System::Drawing::Point(166, 291);
			this->btnSimpleXORDecrypt->Name = L"btnSimpleXORDecrypt";
			this->btnSimpleXORDecrypt->Size = System::Drawing::Size(115, 43);
			this->btnSimpleXORDecrypt->TabIndex = 7;
			this->btnSimpleXORDecrypt->Text = L"Decrypt";
			this->btnSimpleXORDecrypt->UseVisualStyleBackColor = true;
			this->btnSimpleXORDecrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnSimpleXORDecrypt_Click);
			// 
			// btnSimpleXOREncrypt
			// 
			this->btnSimpleXOREncrypt->AutoSize = true;
			this->btnSimpleXOREncrypt->Location = System::Drawing::Point(33, 291);
			this->btnSimpleXOREncrypt->Name = L"btnSimpleXOREncrypt";
			this->btnSimpleXOREncrypt->Size = System::Drawing::Size(107, 43);
			this->btnSimpleXOREncrypt->TabIndex = 6;
			this->btnSimpleXOREncrypt->Text = L"Encrypt";
			this->btnSimpleXOREncrypt->UseVisualStyleBackColor = true;
			this->btnSimpleXOREncrypt->Click += gcnew System::EventHandler(this, &DashBoard::btnSimpleXOREncrypt_Click);
			// 
			// lblSimpleXOROutput
			// 
			this->lblSimpleXOROutput->ForeColor = System::Drawing::Color::ForestGreen;
			this->lblSimpleXOROutput->Location = System::Drawing::Point(34, 179);
			this->lblSimpleXOROutput->Name = L"lblSimpleXOROutput";
			this->lblSimpleXOROutput->Size = System::Drawing::Size(545, 95);
			this->lblSimpleXOROutput->TabIndex = 5;
			this->lblSimpleXOROutput->Text = L"label1";
			// 
			// lblSimpleXORKey
			// 
			this->lblSimpleXORKey->AutoSize = true;
			this->lblSimpleXORKey->Location = System::Drawing::Point(30, 135);
			this->lblSimpleXORKey->Name = L"lblSimpleXORKey";
			this->lblSimpleXORKey->Size = System::Drawing::Size(45, 22);
			this->lblSimpleXORKey->TabIndex = 3;
			this->lblSimpleXORKey->Text = L"Key";
			// 
			// lblSimpleXORText
			// 
			this->lblSimpleXORText->AutoSize = true;
			this->lblSimpleXORText->Location = System::Drawing::Point(30, 40);
			this->lblSimpleXORText->Name = L"lblSimpleXORText";
			this->lblSimpleXORText->Size = System::Drawing::Size(50, 22);
			this->lblSimpleXORText->TabIndex = 2;
			this->lblSimpleXORText->Text = L"Text";
			// 
			// txtSimpleXORText
			// 
			this->txtSimpleXORText->Location = System::Drawing::Point(147, 40);
			this->txtSimpleXORText->Multiline = true;
			this->txtSimpleXORText->Name = L"txtSimpleXORText";
			this->txtSimpleXORText->Size = System::Drawing::Size(432, 77);
			this->txtSimpleXORText->TabIndex = 0;
			// 
			// txtSimpleXORKey
			// 
			this->txtSimpleXORKey->Location = System::Drawing::Point(149, 137);
			this->txtSimpleXORKey->Name = L"txtSimpleXORKey";
			this->txtSimpleXORKey->Size = System::Drawing::Size(184, 29);
			this->txtSimpleXORKey->TabIndex = 9;
			// 
			// DashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(864, 395);
			this->Controls->Add(this->tabSimpleXOR);
			this->Controls->Add(this->tabColumnarTransposition);
			this->Controls->Add(this->tabSubstitution);
			this->Controls->Add(this->tabVigenere);
			this->Controls->Add(this->tabAtBash);
			this->Controls->Add(this->tabCaesar);
			this->Controls->Add(this->tabWelcome);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"DashBoard";
			this->Text = L"DashBoard";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tabCaesar->ResumeLayout(false);
			this->tabCaesar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtCaesarShiftKey))->EndInit();
			this->tabAtBash->ResumeLayout(false);
			this->tabAtBash->PerformLayout();
			this->tabVigenere->ResumeLayout(false);
			this->tabVigenere->PerformLayout();
			this->tabSubstitution->ResumeLayout(false);
			this->tabSubstitution->PerformLayout();
			this->tabColumnarTransposition->ResumeLayout(false);
			this->tabColumnarTransposition->PerformLayout();
			this->tabSimpleXOR->ResumeLayout(false);
			this->tabSimpleXOR->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Cipher^ cipher;
	private: void InitializeSetup();
	private: System::Void btnCaesar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnAtbash_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnVigenere_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSubstitution_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnColumnarTransposition_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSimpleXOR_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCaesarEncrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCaesarDecrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCaesarCopy_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnAtBashEncrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnAtBashDecrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnAtBashCopy_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnVigenereEncrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnVigenereDecrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnVigenereCopy_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSubstitutionEncrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSubstitutionDecrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSubstitutionCopy_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnColumnarTranspositionEncrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnColumnarTranspositionDecrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnColumnarTranspositionCopy_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSimpleXOREncrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSimpleXORDecrypt_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSimpleXORCopy_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
