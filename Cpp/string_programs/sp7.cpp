#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to reverse a string enter by user

int main(){
   int i, j, length;
   char string[150];
   char reverse[150];
 
   cout<<"Enter a string: ";
   cin>>string;
   length = strlen(string);
   j = 0;
 
   for(i=length-1; i>=0; i--)
   {
       reverse[j] = string[i];
       j++;
   }
   reverse[j] = '\0';
 
   cout<<reverse;
 
    return 0;
}