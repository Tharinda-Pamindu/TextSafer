#include "CaesarCipher.h"
#include "AtbashCipher.h"
#include "VigenereCipher.h"
#include<cstdlib>

using namespace System;

int main(array<String^>^) {

	Cipher^ temp = gcnew VigenereCipher("KEY");
	String^ encryptedText = temp->encrypt("My name is Tharinda");
	Console::WriteLine("Encrypt : "+encryptedText);
	Console::WriteLine("Decrypt : "+temp->decrypt(encryptedText));

	while (true) {
		Console::ReadLine();
	}

	return EXIT_SUCCESS;
}