#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to print ASCII values of all characters

int main(){
   char ch;
   for (ch = '!'; ch <= '~'; ch++)
   {
      cout<<"Ascii value of: "<<ch<<"="<<int(ch)<<endl;
   }
   return 0;
}