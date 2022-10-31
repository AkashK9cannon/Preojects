#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to print all natural numbers in reverse order

int main(){
   int num;
   cout<<"Enter a number: ";
   cin>>num;
   for (int i = num; i >= 1; i--)
   {
      cout<<i<<endl;
   }
   
}