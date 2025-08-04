#include "DashBoard.h"
#include "CaesarCipher.h"
#include "AtBashCipher.h"
#include "VigenereCipher.h"
#include "SimpleSubstitutionCipher.h"
#include "ColumnarTranspositionCipher.h"
#include "SimpleXORCipher.h"

void TextSafer::DashBoard::InitializeSetup()
{
	this->cipher = nullptr;
	this->tabCaesar->Hide();
	this->tabAtBash->Hide();
	this->tabVigenere->Hide();
	this->tabSubstitution->Hide();
	this->tabColumnarTransposition->Hide();
	this->tabSimpleXOR->Hide();
	this->tabWelcome->Show();
}

System::Void TextSafer::DashBoard::btnCaesar_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabAtBash->Hide();
	this->tabVigenere->Hide();
	this->tabSubstitution->Hide();
	this->tabColumnarTransposition->Hide();
	this->tabSimpleXOR->Hide();
	this->lblCaesarOutput->Text = "";
	this->tabCaesar->Show();
}

System::Void TextSafer::DashBoard::btnAtbash_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabCaesar->Hide();
	this->tabVigenere->Hide();
	this->tabSubstitution->Hide();
	this->tabColumnarTransposition->Hide();
	this->tabSimpleXOR->Hide();
	this->lblAtBashOutput->Text = "";
	this->tabAtBash->Show();

}

System::Void TextSafer::DashBoard::btnVigenere_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabCaesar->Hide();
	this->tabAtBash->Hide();
	this->tabSubstitution->Hide();
	this->tabColumnarTransposition->Hide();
	this->tabSimpleXOR->Hide();
	this->lblVigenereOutput->Text = "";
	this->tabVigenere->Show();
}

System::Void TextSafer::DashBoard::btnSubstitution_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabCaesar->Hide();
	this->tabAtBash->Hide();
	this->tabVigenere->Hide();
	this->tabColumnarTransposition->Hide();
	this->tabSimpleXOR->Hide();
	this->lblSubstitutionOutput->Text = "";
	this->tabSubstitution->Show();
}

System::Void TextSafer::DashBoard::btnColumnarTransposition_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabCaesar->Hide();
	this->tabAtBash->Hide();
	this->tabVigenere->Hide();
	this->tabSubstitution->Hide();
	this->tabSimpleXOR->Hide();
	this->lblColumnarTranspositionOutput->Text = "";
	this->tabColumnarTransposition->Show();
}

System::Void TextSafer::DashBoard::btnSimpleXOR_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->tabWelcome->Hide();
	this->tabCaesar->Hide();
	this->tabAtBash->Hide();
	this->tabVigenere->Hide();
	this->tabSubstitution->Hide();
	this->tabColumnarTransposition->Hide();
	this->lblSimpleXOROutput->Text = "";
	this->tabSimpleXOR->Show();
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

System::Void TextSafer::DashBoard::btnAtBashEncrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew AtbashCipher();
	this->lblAtBashOutput->Text = cipher->Encrypt(this->txtAtBashText->Text);
	this->cipher = nullptr;

}

System::Void TextSafer::DashBoard::btnAtBashDecrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew AtbashCipher();
	this->lblAtBashOutput->Text = cipher->Decrypt(this->txtAtBashText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnAtBashCopy_Click(System::Object^ sender, System::EventArgs^ e)
{
	Clipboard::SetText(this->lblAtBashOutput->Text);
}

System::Void TextSafer::DashBoard::btnVigenereEncrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew VigenereCipher(this->txtVigenereKey->Text);
	this->lblVigenereOutput->Text = cipher->Encrypt(this->txtVigenereText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnVigenereDecrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew VigenereCipher(this->txtVigenereKey->Text);
	this->lblVigenereOutput->Text = cipher->Decrypt(this->txtVigenereText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnVigenereCopy_Click(System::Object^ sender, System::EventArgs^ e)
{
	Clipboard::SetText(this->lblVigenereOutput->Text);
}

System::Void TextSafer::DashBoard::btnSubstitutionEncrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew SimpleSubstitutionCipher();
	this->lblSubstitutionOutput->Text = this->cipher->Encrypt(this->txtSubstitutionText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnSubstitutionDecrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew SimpleSubstitutionCipher();
	this->lblSubstitutionOutput->Text = this->cipher->Decrypt(this->txtSubstitutionText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnSubstitutionCopy_Click(System::Object^ sender, System::EventArgs^ e)
{
	Clipboard::SetText(this->lblSubstitutionOutput->Text);
}

System::Void TextSafer::DashBoard::btnColumnarTranspositionEncrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew ColumnarTranspositionCipher(this->txtColumnarTranspositionKey->Text);
	this->lblColumnarTranspositionOutput->Text = this->cipher->Encrypt(this->txtColumnarTranspositionText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnColumnarTranspositionDecrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew ColumnarTranspositionCipher(this->txtColumnarTranspositionKey->Text);
	this->lblColumnarTranspositionOutput->Text = this->cipher->Decrypt(this->txtColumnarTranspositionText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnColumnarTranspositionCopy_Click(System::Object^ sender, System::EventArgs^ e)
{
	Clipboard::SetText(this->lblColumnarTranspositionOutput->Text);
}

System::Void TextSafer::DashBoard::btnSimpleXOREncrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew SimpleXORCipher(this->txtSimpleXORKey->Text);
	this->lblSimpleXOROutput->Text = this->cipher->Encrypt(this->txtSimpleXORText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnSimpleXORDecrypt_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->cipher = gcnew SimpleXORCipher(this->txtSimpleXORKey->Text);
	this->lblSimpleXOROutput->Text = this->cipher->Decrypt(this->txtSimpleXORText->Text);
	this->cipher = nullptr;
}

System::Void TextSafer::DashBoard::btnSimpleXORCopy_Click(System::Object^ sender, System::EventArgs^ e)
{
	Clipboard::SetText(this->lblSimpleXOROutput->Text);
}
