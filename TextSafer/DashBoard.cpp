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
	this->tabCaesar->Show();
	this->lblOutputCaesar->Text = "";
}

System::Void TextSafer::DashBoard::btnCaesarEncrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew CaesarCipher(Int32::Parse(this->txtShiftKey->Text));
	this->lblOutputCaesar->Text = this->cipher->Encrypt(this->txtContent->Text);
	this->cipher = nullptr;
}
