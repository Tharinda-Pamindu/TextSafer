#pragma once
#include "Cipher.h"
public ref class SimpleXORCipher : public Cipher
{
private:
	array<Int32>^ binaryKey;
public:
	SimpleXORCipher(String^ key)
	{
		binaryKey = gcnew array<Int32>(key->Length);
		for (int i = 0; i < key->Length; i++)
		{
			binaryKey[i] = key[i];
		}
	}
	String^ Encrypt(String^ plainText) override;
	String^ Decrypt(String^ cipherText) override;
	
};

