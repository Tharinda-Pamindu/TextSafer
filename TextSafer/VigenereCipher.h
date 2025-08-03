#pragma once

#include "Cipher.h"

public ref class VigenereCipher : public Cipher
{
private:
	String^ key;
public:
	VigenereCipher(String^ key) : key(key) {}

	property String^ KEY {
		String^ get() {
			return key;
		}
		void set(String^ value) {
			key = value;
		}
	}

	String^ Encrypt(String^ plainText) override;
	String^ Decrypt(String^ cipherText) override;
};

