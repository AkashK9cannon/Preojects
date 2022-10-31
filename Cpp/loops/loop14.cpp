#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to find factorial of any number

int main(){
   int num,i,fact=1;
   cout<<"Enter a number: ";
   cin>>num;
   for (i = 1; i <= num; i++)
   {
      fact = fact*i; 
   }
   cout<<"Factorial of: "<<num<<" = "<<fact;
}