#include<iostream>
#include<string.h>
using namespace std;

// C++ program to check alphabets using conditional operator.

int main(){
   char a;
   cout << "Enter a character: ";
   cin >> a;
   if (a >= 'A' && a <='Z')
   {
      cout<<"Is an alphabet.";
   }
   else if (a >= 'a' && a <= 'z')
   {
      cout<<"Is an alphabet.";
   }
   else
   {
      cout<<"is not an alphabet.";
   }
}