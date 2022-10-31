#include<iostream>
#include<string.h>
using namespace std;

// C++ program to check number is positive, negative or zero.

int main(){
   int a;
   cout << "Enter a number: ";
   cin >> a;
   if (a>0)
   {
      cout << "Positive number.";
   }
   else if (a<0)
   {
      cout << "Is a negative number.";
   }
   else
   {
      cout << "is zero";
   }
   
   
}