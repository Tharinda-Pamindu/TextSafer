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

	String^ encrypt(String^ plainText) override;
	String^ decrypt(String^ cipherText) override;

};

