#include<iostream>
#include<string.h>
using namespace std;

// C++ Program to find the largest number among three number.

int main(){
   int a,b,c;
   cout << "Enter the first number: ";
   cin >> a;
   cout << "Enter the second number: ";
   cin >> b;
   cout << "Enter the third number: ";
   cin >> c;
   if (a > b && a>c)
   {
      cout << a << " " << "is greater.";
   }
   else if (b > a && b > c)
   {
      cout << b << " " << "is greater.";
   }
   else if (c > a && c > b)
   {
      cout << c << " " << "is greater.";
   }
}