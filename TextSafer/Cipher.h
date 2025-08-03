#pragma once

using namespace System;

public ref class Cipher abstract
{
public:
	virtual String^ encrypt(String^ plainText) = 0;
	virtual String^ decrypt(String^ cipherText) = 0;
};

