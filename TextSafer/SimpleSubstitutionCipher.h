#pragma once
#include "Cipher.h"

public ref class SimpleSubstitutionCipher : public Cipher
{
private:
	String^ key;
public:
	SimpleSubstitutionCipher() : key(GenerateRandomKey()) {}
	String^ Encrypt(String^ plainText) override;
	String^ Decrypt(String^ cipherText) override;
private:
	String^ GenerateRandomKey();
};

