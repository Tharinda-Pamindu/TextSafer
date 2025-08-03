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
		int get() { return shift; }
		void set(int value) { shift = value; }
	}
	String^ Encrypt(String^ plainText) override;
	String^ Decrypt(String^ cipherText) override;
};

