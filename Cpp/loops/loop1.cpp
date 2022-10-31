#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to print alphabets from a to z

int main(){
   int character=0;
   char ch = 'A';
   do
   {
      character=int(ch);
      cout<<ch<<" ";
      character++;ch=char(character);

   } while (ch<='Z');
   
   
}