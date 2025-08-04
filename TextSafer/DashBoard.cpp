#include "DashBoard.h"
#include "CaesarCipher.h"

void TextSafer::DashBoard::InitializeSetup()
{
	this->cipher = nullptr;
	this->tabWelcome->Show();
	this->tabCaesar->Hide();
}

System::Void TextSafer::DashBoard::btnCaesar_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->lblCaesarOutput->Text = "";
	this->tabCaesar->Show();
}

System::Void TextSafer::DashBoard::btnAtbash_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabCaesar->Hide();
}

System::Void TextSafer::DashBoard::btnVigenere_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabCaesar->Hide();
}

System::Void TextSafer::DashBoard::btnSubstitution_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabCaesar->Hide();
}

System::Void TextSafer::DashBoard::btnColumnarTransposition_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabCaesar->Hide();
}

System::Void TextSafer::DashBoard::btnSimpleXOR_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabCaesar->Hide();
}

System::Void TextSafer::DashBoard::btnCaesarEncrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew CaesarCipher(Int32::Parse(this->txtCaesarShiftKey->Text));
	this->lblCaesarOutput->Text = cipher->Encrypt(this->txtCaesarText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnCaesarDecrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew CaesarCipher(Int32::Parse(this->txtCaesarShiftKey->Text));
	this->lblCaesarOutput->Text = cipher->Decrypt(this->txtCaesarText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnCaesarCopy_Click(System::Object^ sender, System::EventArgs^ e)
{
	Clipboard::SetText(this->lblCaesarOutput->Text);
}
