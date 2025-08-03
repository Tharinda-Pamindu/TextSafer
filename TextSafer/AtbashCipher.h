#pragma once
#include "Cipher.h"
public ref class AtbashCipher : public Cipher
{
public :
	String^ encrypt(String^ plainText) override;
	String^ decrypt(String^ cipherText) override;
};

