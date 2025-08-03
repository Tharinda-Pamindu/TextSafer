#include "CaesarCipher.h"
#include "AtbashCipher.h"
#include<cstdlib>

using namespace System;

int main(array<String^>^) {

	Cipher^ temp = gcnew AtbashCipher();
	String^ encryptedText = temp->encrypt("My name is Tharinda");
	Console::WriteLine("Encrypt : "+encryptedText);
	Console::WriteLine("Encrypt : "+temp->encrypt(encryptedText));

	while (true) {
		Console::ReadLine();
	}

	return EXIT_SUCCESS;
}