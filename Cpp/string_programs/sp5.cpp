#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to change string to upper case without strupr
void fupper(char []);

int main(){
   char string[150];
   cout << "Enter a string: ";
   cin >> string;
   fupper(string);
   cout << "The converted string is: ";
   cout << string;
}

void fupper(char s[]){
   int c = 0;
       while (s[c] != '\0') {
          if (s[c] >= 'a' && s[c] <= 'z') {
             s[c] = s[c] - 32;
          }
          c++;
       }
    
}