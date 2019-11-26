#include "caesar.h"
//created by hananeDev84 on 11/23/19

caesar_cipher::caesar_cipher()
{msg = "";key = 4;}
caesar_cipher::caesar_cipher(string encrypt_this)
{msg = encrypt_this;}
void caesar_cipher::setKey(int key_value)
{key = key_value;}
int caesar_cipher::getKey()
{	return key;}
void caesar_cipher::set_encryptedtext(string message)
{msg = message;}

string caesar_cipher::get_encryptedtext()
{return msg;}

string caesar_cipher::encrypt()
{return msg;}
void caesar_cipher::encrypt(string encrypt_this)
{    int n = encrypt_this.length();
	for (int i = 0; i < n; i++){
		if (isalpha(encrypt_this[i]))
		{
			int offset = 65;
			if (islower(encrypt_this[i]))
				offset = 97;
		  int cipheredchar = ((((int)encrypt_this[i]) - offset +26 + key) % 26) + offset;
			msg[i]= (char)cipheredchar;
		}
		else if (isdigit(encrypt_this[i]))
		{int cipheredchar = ((((int)encrypt_this[i]) - 38 + key) % 10) + 48;
			msg[i] = (char)cipheredchar;
		}
		else
			msg[i] = encrypt_this[i];
	}
}

void caesar_cipher::decrypt()
{
	for (int i = 0; i < msg.length(); i++)
	{
		if (isalpha(msg[i]))
		{
			int offset = 65;
			if (islower(msg[i]))
				offset = 97;
			int cipheredchar = ((((int)msg[i]) - offset+26 - key) % 26) + offset;
			cout << (char)cipheredchar;
		}
		else if (isdigit(msg[i]))
		{
			int cipheredchar = ((((int)msg[i]) - 38 - key) % 10) + 48;
			cout << (char)cipheredchar;
		}
		else
			cout << msg[i];
	}
}
string caesar_cipher::query_for_message(string prompt)
{
	cout << "Enter your prompt" << endl;
	getline(cin,prompt);
	return prompt;
}