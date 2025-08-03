#include "CaesarCipher.h"
#include "AtbashCipher.h"
#include "VigenereCipher.h"
#include "SimpleSubstitutionCipher.h"
#include <cstdlib>

using namespace System;

int main(array<String^>^) {

	SimpleSubstitutionCipher^ temp = gcnew SimpleSubstitutionCipher();
	String^ encryptedText = temp->Encrypt("My name is Tharinda");
	Console::WriteLine("Encrypt : " + encryptedText);
	//Console::WriteLine("key : " + temp->GenerateRandomKey());
	
	Console::WriteLine("Decrypt : " + temp->Decrypt(encryptedText));

	while (true) {
		Console::ReadLine();
	}

	return EXIT_SUCCESS;
}