#include<iostream>
#include<string.h>
using namespace std;

// C++ Program to Find the Largest Number using Conditional Operator.

int main(){
   int a,b;
   cout << "Enter the first number: ";
   cin >> a;
   cout << "Enter the second number: ";
   cin >> b;
   if (a > b)
   {
      cout << a << " " << "is greater.";
   }
   else if (b > a)
   {
      cout << b << " " << "is greater.";
   }
   
}