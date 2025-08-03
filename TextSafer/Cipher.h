#pragma once

using namespace System;

public ref class Cipher abstract
{
public:
	virtual String^ Encrypt(String^ plainText) = 0;
	virtual String^ Decrypt(String^ cipherText) = 0;
};

