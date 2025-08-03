#pragma once
#include "Cipher.h"


public ref class ColumnarTranspositionCipher : public Cipher
{
private:
	String^ secretKey;
public:
	ColumnarTranspositionCipher(String^ secretKey) : secretKey(secretKey) {}
	String^ Encrypt(String^ plainText) override;
	String^ Decrypt(String^ cipherText) override;

};

