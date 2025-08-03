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
	private: System::Windows::Forms::GroupBox^ tabCaesar;
	private: System::Windows::Forms::GroupBox^ tabWelcome;
	private: System::Windows::Forms::Label^ lblText;



	private: System::Windows::Forms::TextBox^ txtContent;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lblShiftKey;
	private: System::Windows::Forms::Label^ lblOutputCaesar;


	private: System::Windows::Forms::NumericUpDown^ txtShiftKey;
	private: System::Windows::Forms::Button^ btnCaesarDecrypt;

	private: System::Windows::Forms::Button^ btnCaesarEncrypt;



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
			this->tabCaesar = (gcnew System::Windows::Forms::GroupBox());
			this->btnCaesarDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnCaesarEncrypt = (gcnew System::Windows::Forms::Button());
			this->lblOutputCaesar = (gcnew System::Windows::Forms::Label());
			this->txtShiftKey = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblShiftKey = (gcnew System::Windows::Forms::Label());
			this->lblText = (gcnew System::Windows::Forms::Label());
			this->txtContent = (gcnew System::Windows::Forms::TextBox());
			this->tabWelcome = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tabCaesar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtShiftKey))->BeginInit();
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
			// tabCaesar
			// 
			this->tabCaesar->Controls->Add(this->btnCaesarDecrypt);
			this->tabCaesar->Controls->Add(this->btnCaesarEncrypt);
			this->tabCaesar->Controls->Add(this->lblOutputCaesar);
			this->tabCaesar->Controls->Add(this->txtShiftKey);
			this->tabCaesar->Controls->Add(this->lblShiftKey);
			this->tabCaesar->Controls->Add(this->lblText);
			this->tabCaesar->Controls->Add(this->txtContent);
			this->tabCaesar->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabCaesar->Location = System::Drawing::Point(226, 13);
			this->tabCaesar->Name = L"tabCaesar";
			this->tabCaesar->Size = System::Drawing::Size(613, 361);
			this->tabCaesar->TabIndex = 2;
			this->tabCaesar->TabStop = false;
			this->tabCaesar->Text = L"Caesar Cipher";
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
			// lblOutputCaesar
			// 
			this->lblOutputCaesar->ForeColor = System::Drawing::Color::ForestGreen;
			this->lblOutputCaesar->Location = System::Drawing::Point(34, 179);
			this->lblOutputCaesar->Name = L"lblOutputCaesar";
			this->lblOutputCaesar->Size = System::Drawing::Size(545, 95);
			this->lblOutputCaesar->TabIndex = 5;
			this->lblOutputCaesar->Text = L"label1";
			// 
			// txtShiftKey
			// 
			this->txtShiftKey->Location = System::Drawing::Point(147, 133);
			this->txtShiftKey->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 26, 0, 0, 0 });
			this->txtShiftKey->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->txtShiftKey->Name = L"txtShiftKey";
			this->txtShiftKey->Size = System::Drawing::Size(56, 29);
			this->txtShiftKey->TabIndex = 4;
			this->txtShiftKey->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// lblShiftKey
			// 
			this->lblShiftKey->AutoSize = true;
			this->lblShiftKey->Location = System::Drawing::Point(30, 135);
			this->lblShiftKey->Name = L"lblShiftKey";
			this->lblShiftKey->Size = System::Drawing::Size(97, 22);
			this->lblShiftKey->TabIndex = 3;
			this->lblShiftKey->Text = L"Shift Key";
			// 
			// lblText
			// 
			this->lblText->AutoSize = true;
			this->lblText->Location = System::Drawing::Point(30, 40);
			this->lblText->Name = L"lblText";
			this->lblText->Size = System::Drawing::Size(50, 22);
			this->lblText->TabIndex = 2;
			this->lblText->Text = L"Text";
			// 
			// txtContent
			// 
			this->txtContent->Location = System::Drawing::Point(147, 40);
			this->txtContent->Multiline = true;
			this->txtContent->Name = L"txtContent";
			this->txtContent->Size = System::Drawing::Size(432, 77);
			this->txtContent->TabIndex = 0;
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
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(15, 404);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(613, 361);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Caesar Cipher";
			// 
			// DashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(860, 397);
			this->Controls->Add(this->groupBox1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtShiftKey))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Cipher^ cipher;
	private: void InitializeSetup();
	private: System::Void btnCaesar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCaesarEncrypt_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
