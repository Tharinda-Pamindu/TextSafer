#include "CaesarCipher.h"

String^ CaesarCipher::encrypt(String^ plainText) {

	String^ cipherText = "";

	for (int i = 0; i < plainText->Length; i++)
	{
		wchar_t var = plainText[i];
		//check if character is a letter
		if (var >= 'A' && var <= 'Z') {
			var += this->SHIFT;
			if (var > 'Z')
				var -= 26;
			cipherText += var;
		}
		else if (var >= 'a' && var <= 'z') {
			var += this->SHIFT;
			if (var > 'z')
				var -= 26;
			cipherText += var;
		}
		else {
			//if not a letter, just append the character
			cipherText += var;
		}
	}
	return cipherText;
};

String^ CaesarCipher::decrypt(String^ cipherText) {

	String^ plainText = "";

	for (int i = 0; i < cipherText->Length; i++)
	{
		wchar_t var = cipherText[i];
	
		if (var >= 'A' && var <= 'Z') {
			var -= this->SHIFT;
			if (var < 'A')
				var += 26;
			plainText += var;
		}
		else if (var >= 'a' && var <= 'z') {
			var -= this->SHIFT;
			if (var < 'a')
				var += 26;
			plainText += var;
		}
		else {
			plainText += var;
		}
	}

	return plainText;

};
