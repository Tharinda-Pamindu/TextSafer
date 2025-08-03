#pragma once

#include "Cipher.h"

using namespace System;

public ref class CaesarCipher : public Cipher
{
private:
	int shift;
public:

	CaesarCipher(int value) : shift(value) {}

	property int SHIFT {
		void set(int value) {
			if (value <= 26) {
				this->shift = value;
			}
		}
		int get() {
			return this->shift;
		}
	};

	String^ Encrypt(String^ plainText) override;
	String^ Decrypt(String^ cipherText) override;

};

