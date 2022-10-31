#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;


int main(){
   char a;
   cout<<"Enter a character: ";
   cin>>a;
   if (a=isalpha(a))
   {
      cout<<"Is an alphabet.";
   }
   else if (a==isdigit(a))
   {
      cout<<"is a digit";
   }
   else if (a==ispunct(a))
   {
      cout<<"special character.";
   }
   
   {
      cout<<"is a special character";
   }
   
   
   
}