#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to print multiplication table of a given number

int main(){
   int a;
   cout<<"Enter a number to get the table: ";
   cin>>a;
   for (int i = 1; i <= 10; i++)
   {
      cout<<a<<" "<<'X'<<" "<<i<<" "<<"="<<a*i<<endl;
   }
   
}