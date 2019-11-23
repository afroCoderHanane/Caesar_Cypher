#pragma once
#include<iostream>
#include<string>
using namespace std;
class caesar_cipher
{ private:
  string msg;
  int  key;
  public:

  
  caesar_cipher();
  caesar_cipher(string encrypt_this);
  void setKey(int key_value);
  void set_encryptedtext(string message);
  string get_encryptedtext();
  int getKey();
  string encryptedtext();
  string encrypt();
  void encrypt(string encrypt_this);
  string decrypt();
  void query_for_message(string prompt);

};