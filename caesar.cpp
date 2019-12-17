#include "caesar.h"
//created by @hananeDev84 on 11/23/19
caesar_cipher::caesar_cipher():msg(""),key(4){}//default constructor to initalize the message and the key 
caesar_cipher::caesar_cipher(string encrypt_this):msg(encrypt_this){}// constructor to set the message to encrypt
void caesar_cipher::setKey(int key_value)
{
  key=key_value;// method that set they key
}
int caesar_cipher::getKey()
{
  return key; //method to get the key
}
void caesar_cipher::set_encryptedtext(string message)
{
  msg=message;//method that set the message to encrypt to msg
}
string caesar_cipher::get_encryptedtext()
{
  return msg;// method to get the tecxt to encrypt
}
string caesar_cipher::encrypt()
{
  return msg; // return encrypted message
}

void caesar_cipher::encrypt(string encrypt_this)// encrypt method
{ 
  int offset;
  int n = encrypt_this.length();
  int cipheredchar;
	for (int i = 0; i < n; i++)
  {
     if (isalpha(encrypt_this[i]))// check if it is alpha
	    	{   
            if(isupper(encrypt_this[i]))
               offset= 65;
			      else if (islower(encrypt_this[i]))
			   	     offset = 97;
		      cipheredchar = ((((int)encrypt_this[i]) - offset +26 + key) % 26) + offset;
		      msg[i]= (char)cipheredchar;
	     	}
		else if (isdigit(encrypt_this[i]))// check if it is a number
	  	{ 
        cipheredchar = ((((int)encrypt_this[i]) - 38 + key) % 10) + 48;
		  	msg[i] = (char)cipheredchar;
	  	}
		else //all the rest character return the same
		  	msg[i] = encrypt_this[i];
	}
}
void caesar_cipher::decrypt()// decrypt method
{	
  int offset;
  int decipheredchar;
	for(int i = 0; i < msg.length(); i++)
    	{
        if (isalpha(msg[i])) // check if it is a char
		        { 
             if(isupper(msg[i]))
              offset = 65;
			       else if(islower(msg[i]))
				      offset = 97;
	      decipheredchar = ((((int)msg[i]) - offset+26 - key) % 26) + offset;
      	cout << (char)decipheredchar;
	        	}
		     else if (isdigit(msg[i])) // check if  it is number
		        {
        decipheredchar = ((((int)msg[i]) - 38 - key) % 10) + 48;
		   	cout << (char)decipheredchar;
	        	}
	    	else //check the rest of the char for instance :#@
		  	cout << msg[i];
    	}
}
string caesar_cipher::query_for_message(string prompt) //ask the prompt from the user
{ 
    cout << "Enter your prompt" << endl; 
    getline(cin,prompt);
    if(prompt.empty())throw string("Empty String"); // throw error if empty string
    return prompt;
}