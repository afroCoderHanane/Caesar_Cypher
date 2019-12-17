// ciphercode.cpp : This file contains the 'main' function. Program execution
// begins and ends there.
//

#include "caesar.h"
#include <iostream>
using namespace std;



int main() {
string h1 ;
caesar_cipher test;
int key;
  try{
          h1 = test.query_for_message(h1);
          test.set_encryptedtext(h1);
          cout << "Text entered" << endl << test.get_encryptedtext() << endl << endl;
          cout << "Enter a key" << endl;
     }
  catch(string str1)
      {
          cout<<str1<<endl;
          exit(2);
      }

	try {
          if (key < -11 || key > 11)
            throw string("Enter a valid key");
          else
            cin >> key;
	    } 
  catch (string str)
      {
		       cout << str << endl;
	        	exit(1);
	    }
test.setKey(key);
cout << "key = " << test.getKey() << endl;
test.encrypt(h1);

cout <<endl<< "Encrypted text: " << test.encrypt() << endl;
cout << "The decrypted text is : " <<" ";
test.decrypt();

	return 0;
}
