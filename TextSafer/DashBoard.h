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


























	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ tabCaesar;
	private: System::Windows::Forms::Button^ btnCaesarCopy;

	private: System::Windows::Forms::Button^ btnCaesarDecrypt;

	private: System::Windows::Forms::Button^ btnCaesarEncrypt;

	private: System::Windows::Forms::Label^ lblCaesarOutput;

	private: System::Windows::Forms::NumericUpDown^ txtCaesarShiftKey;

	private: System::Windows::Forms::Label^ lblCaesarShiftKey;

	private: System::Windows::Forms::Label^ lblCaesarText;
	private: System::Windows::Forms::TextBox^ txtCaesarText;







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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->tabCaesar = (gcnew System::Windows::Forms::GroupBox());
			this->btnCaesarCopy = (gcnew System::Windows::Forms::Button());
			this->btnCaesarDecrypt = (gcnew System::Windows::Forms::Button());
			this->btnCaesarEncrypt = (gcnew System::Windows::Forms::Button());
			this->lblCaesarOutput = (gcnew System::Windows::Forms::Label());
			this->txtCaesarShiftKey = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblCaesarShiftKey = (gcnew System::Windows::Forms::Label());
			this->lblCaesarText = (gcnew System::Windows::Forms::Label());
			this->txtCaesarText = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->tabCaesar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtCaesarShiftKey))->BeginInit();
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(15, 449);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(613, 361);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"At Bash Cipher";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(478, 291);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 43);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Copy";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->Location = System::Drawing::Point(166, 291);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 43);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Decrypt";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->Location = System::Drawing::Point(33, 291);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(107, 43);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Encrypt";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->ForeColor = System::Drawing::Color::ForestGreen;
			this->label4->Location = System::Drawing::Point(34, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(545, 95);
			this->label4->TabIndex = 5;
			this->label4->Text = L"label4";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(147, 133);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 26, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(56, 29);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(30, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 22);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Shift Key";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(30, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 22);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Text";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 40);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(432, 77);
			this->textBox2->TabIndex = 0;
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
			this->tabCaesar->Text = L"At Bash Cipher";
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
			// DashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1364, 588);
			this->Controls->Add(this->tabCaesar);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabWelcome);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"DashBoard";
			this->Text = L"DashBoard";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->tabCaesar->ResumeLayout(false);
			this->tabCaesar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtCaesarShiftKey))->EndInit();
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
	};
}
