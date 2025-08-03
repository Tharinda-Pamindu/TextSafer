#include "VigenereCipher.h"

String^ VigenereCipher::Encrypt(String^ plainText)
{
	if (String::IsNullOrEmpty(key)) {
		return plainText;
	}

	String^ cipherText = "";
	String^ upperKey = key->ToUpper();
	int keyIndex = 0;

	for each (wchar_t plainChar in plainText)
	{
		if (Char::IsLetter(plainChar))
		{
			wchar_t keyChar = upperKey[keyIndex % upperKey->Length];
			int shiftValue = keyChar - 'A';
			wchar_t baseChar = Char::IsUpper(plainChar) ? 'A' : 'a';
			wchar_t encryptedChar = (wchar_t)(((plainChar - baseChar + shiftValue) % 26) + baseChar);
			cipherText += encryptedChar;
			keyIndex++;
		}
		else
		{
			cipherText += plainChar;
		}
	}

	return cipherText;
}

String^ VigenereCipher::Decrypt(String^ cipherText)
{
	if (String::IsNullOrEmpty(key) || String::IsNullOrEmpty(cipherText)) {
		return cipherText;
	}

	String^ plainText = "";
	String^ upperKey = key->ToUpper();
	int keyIndex = 0;

	for each (wchar_t cipherChar in cipherText)
	{
		if (Char::IsLetter(cipherChar))
		{
			wchar_t keyChar = upperKey[keyIndex % upperKey->Length];
			int shiftValue = keyChar - 'A';
			wchar_t baseChar = Char::IsUpper(cipherChar) ? 'A' : 'a';
			wchar_t decryptedChar = (wchar_t)(((cipherChar - baseChar - shiftValue + 26) % 26) + baseChar);
			plainText += decryptedChar;
			keyIndex++;
		}
		else
		{
			plainText += cipherChar;
		}
	}

	return plainText;
}
