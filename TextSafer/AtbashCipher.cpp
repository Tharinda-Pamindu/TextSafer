#include "AtbashCipher.h"

String^ AtbashCipher::Encrypt(String^ plainText)
{
	String^ cipherText = "";

	for (int i = 0; i < plainText->Length; i++) {

		wchar_t currentChar = plainText[i];

		if (currentChar >= 'A' && currentChar <= 'Z')
			cipherText += (wchar_t)(155 - currentChar);

		else if (currentChar >= 'a' && currentChar <= 'z')
			cipherText += (wchar_t)(219 - currentChar);

		else
			cipherText += currentChar;

	}

	return cipherText;

}

String^ AtbashCipher::Decrypt(String^ cipherText)
{
	return Encrypt(cipherText);
}
