#include "CaesarCipher.h"
#include<cstdlib>

using namespace System;

int main(array<String^>^) {

	Cipher^ temp = gcnew CaesarCipher(3);
	//temp->SHIFT = 3;
	String^ cipher = temp->encrypt("My name is Tharinda Pamindu Wickramasinghe");
	Console::WriteLine("Ciphered Text: {0}", cipher);
	Console::WriteLine("Deciphered Text: {0}", temp->decrypt(cipher));

	while (true) {
		Console::ReadLine();
	}

	return EXIT_SUCCESS;
}