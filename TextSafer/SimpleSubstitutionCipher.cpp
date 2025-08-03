#include "SimpleSubstitutionCipher.h"

using namespace System;
using namespace System::Text;

String^ SimpleSubstitutionCipher::Encrypt(String^ plainText)
{
	if (String::IsNullOrEmpty(plainText) || String::IsNullOrEmpty(this->key))
	{
		return plainText;
	}

	StringBuilder^ cipherTextBuilder = gcnew StringBuilder(plainText->Length);
	String^ upperKey = key->ToUpper();

	for each (wchar_t plainChar in plainText)
	{
		if (Char::IsLetter(plainChar))
		{
			bool isUpper = Char::IsUpper(plainChar);
			int alphabetIndex = Char::ToUpper(plainChar) - 'A';
			wchar_t substituteChar = upperKey[alphabetIndex];

			if (isUpper)
			{
				cipherTextBuilder->Append(substituteChar);
			}
			else
			{
				cipherTextBuilder->Append(Char::ToLower(substituteChar));
			}
		}
		else
		{
			cipherTextBuilder->Append(plainChar);
		}
	}
	return cipherTextBuilder->ToString();
}

String^ SimpleSubstitutionCipher::Decrypt(String^ cipherText)
{
	if (String::IsNullOrEmpty(cipherText) || String::IsNullOrEmpty(key))
	{
		return cipherText;
	}

	StringBuilder^ plainTextBuilder = gcnew StringBuilder(cipherText->Length);

	String^ upperKey = key->ToUpper();

	for each (wchar_t cipherChar in cipherText)
	{
		if (Char::IsLetter(cipherChar))
		{
			bool isUpper = Char::IsUpper(cipherChar);
			wchar_t upperCipherChar = Char::ToUpper(cipherChar);

			int keyIndex = upperKey->IndexOf(upperCipherChar);

			if (keyIndex != -1)
			{
				wchar_t plainChar = (wchar_t)('A' + keyIndex);

				if (isUpper) {
					plainTextBuilder->Append(plainChar);
				}
				else {
					plainTextBuilder->Append(Char::ToLower(plainChar));
				}
			}
			else
			{
				plainTextBuilder->Append(cipherChar);
			}
		}
		else
		{
			plainTextBuilder->Append(cipherChar);
		}
	}
	return plainTextBuilder->ToString();
}

String^ SimpleSubstitutionCipher::GenerateRandomKey()
{
	String^ alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	array<wchar_t>^ shuffledArray = alphabet->ToCharArray();

	auto rand = gcnew Random();
	for (int i = shuffledArray->Length - 1; i > 0; i--)
	{
		int j = rand->Next(i + 1);
		wchar_t temp = shuffledArray[i];
		shuffledArray[i] = shuffledArray[j];
		shuffledArray[j] = temp;
	}

	return gcnew String(shuffledArray);
}