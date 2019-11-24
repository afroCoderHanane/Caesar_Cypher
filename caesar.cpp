//created by Abdoul-hanane on 11/23/19
#include"caesar.h"

caesar_cipher::caesar_cipher()
{
	msg = "";
	key = 0;
}
caesar_cipher::caesar_cipher(string encrypt_this)
{
	msg = encrypt_this;
	//key = 0;
}
void caesar_cipher::setKey(int key_value)
{
  //•	set_key(int key_value). A mutator method that sets the new key value
	key = key_value;
}
int caesar_cipher::getKey()
{
  //•	get_key(). An accessor method that returns the current key value
	return key;
}
//read to understand more//
void caesar_cipher::set_encryptedtext(string msg)
{ // •	set_encryptedtext(string message. A mutator method that sets the encrypted text

	// int n = message.length();
	// for (int i = 0; i < n; i++)
	// {
	// 	if (isalpha(message[i]))
	// 	{
	// 		int offset = 65;
	// 		if (islower(message[i]))
	// 			offset = 97;
	// 		int cipheredchar = ((((int)message[i]) - offset + key) % 26) + offset;
	// 		cout << (char)cipheredchar;
	// 	}
	// 	else
	// 		cout << message[i];
	// }

  msg =get_encryptedtext();
}

string caesar_cipher::get_encryptedtext()
{
	
	return msg;
}

string caesar_cipher::encrypt()
{
	//msg = encrypt(encrypt_this);
		return msg;
}
void caesar_cipher::encrypt(string encrypt_this)
{
	//set_encryptedtext(encrypt_this);
  //function that encrypt
  int n = encrypt_this.length();
	for (int i = 0; i < n; i++)
	{
		if (isalpha(encrypt_this[i]))
		{
			int offset = 65;
			if (islower(encrypt_this[i]))
				offset = 97;
			int cipheredchar = ((((int)encrypt_this[i]) - offset + key) % 26) + offset;
			cout << (char)cipheredchar;
      msg[i]= (char)cipheredchar;
		}
		else
			cout << encrypt_this[i];
	}
}

void caesar_cipher::decrypt()
{
	//string enmsg = encrypt();
	for (int i = 0; i < msg.length(); i++)
	{
		if (isalpha(msg[i]))
		{
			int offset = 65;
			if (islower(msg[i]))
				offset = 97;
			int decipheredchar = ((((int)msg[i]) + offset - key) % 26 ) - offset;
			cout << (char)decipheredchar;
      msg[i] =(char)decipheredchar;
		}
		else
			cout << msg[i];
      
	}
}
void caesar_cipher::query_for_message(string prompt)
{
	cout << prompt << endl;
}