#pragma once
#include "Cipher.h"
public ref class ColumnarTranspositionCipher : public Cipher
{
public : 
	String^ Encrypt(String^ plainText) override;
	String^ Decrypt(String^ cipherText) override;
};

