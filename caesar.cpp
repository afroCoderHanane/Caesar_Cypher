//created by Abdoul-hanane on 11/23/19
#include"caesar.h"

caesar_cipher::caesar_cipher()
{
 msg = "";
 key =0;
}
caesar_cipher::caesar_cipher(string encrypt_this)
{
 msg = encrypt_this;
 //key = 0;
}
void caesar_cipher::setKey(int key_value)
{
 key =keyvalue;
}
int caesar_cipher::getKey()
{
 return key;
}
//read to understand more//
void caesar_cipher::set_encryptedtext(string message)
{ 
  
 for(int i=0; i<message.length(), i++)
 {
   if(isalpha(message[i]))
   {
     int offset= 65;
     if (islower(message[i]))
        offest =97;
     int cipheredchar =(((int)message[i])-offset +key)%26) + offset; 
     cout<<(char)cipheredchar;
   }
   else
     cout <<message[i];
 }
}
string caesar_cipher::get_encryptedtext()
{
 return message;
}

string encrypt()
{ 
  return msg;
}
void encrypt(string encrypt_this)
{ msg =encrypt_this;
 set_encryptedtext(msg);
}
string decrypt()
{  string enmsg =encrypt();
 for(int i=0; i<enmsg.length(), i++)
 {
   if(isalpha(enmsg[i]))
   {
     int offset= 65;
     if (islower(enmsg[i]))
        offest =97;
     int decipheredchar =(((int)enmsg[i])+offset -key)%26) - offset; 
     cout<<(char)decipheredchar;
   }
   else
     cout <<message[i];
 }
}
void query_for_message(string prompt)
{
  cout<<"Enter the message to encrypt"<<endl;
}