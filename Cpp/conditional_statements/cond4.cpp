#include<iostream>
#include<string.h>
using namespace std;

// C++ Program to find the Largest among Three Variables using Nested if.

int main(){
   int a,b,c;
   cout<<"Enter the first number: ";
   cin >> a;
   cout<<"Enter the second number: ";
   cin >> b;
   cout<<"Enter the third number: ";
   cin >> c;
   if (a>b)
   {
      if (a>c)
      {
         cout<<a<<" "<<"is greater";   
      }
   }
   else if (b>a && b>c)
   {
      cout<<b<<" "<<"is greater";
   }
   else if (c>a&&c>a)
   {
      cout<<c<<" "<<"is greater";
   }
}