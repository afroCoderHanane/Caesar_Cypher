// ciphercode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"caesar.h"
using namespace std;

int main()
{
	string h1 = "I am out of here come on";
	caesar_cipher test;
	test.set_encryptedtext(h1);
	cout << test.get_encryptedtext() << endl;
	test.setKey(1);
	cout << "key = " << test.getKey() << endl;
	test.encrypt(h1);
	cout << endl;
	cout << "Encrypted text: " << endl;
	cout << test.encrypt() << endl;
	cout << "The decrypted text is : "<<endl;
	test.decrypt();
}

