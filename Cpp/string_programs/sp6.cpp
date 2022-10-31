#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to change string to lower case without strlwr
void flower(char []);

int main(){
   char string[150];
   cout <<"Enter a string in uppercase: ";
   cin >> string;
   flower(string);
   cout << "The converted string is: "<< string;
}

void flower(char s[]){
   int c = 0;
   while (s[c] != '\0')
   {
      if (s[c] >= 'A' && s[c] <='Z')
      {
         s[c] = s[c] +32;
      }c++;
      
   }
   
}