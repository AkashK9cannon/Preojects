#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to find first and last digit of any number


int main(){
   int num,f,l;
   cout<<"Enter a number: ";
   cin>> num;
   l = num%10;
   while (num>=10)
   {
      num = num/10;
   }
   f = num;
   cout<<"First digit is: "<< f<<endl;
   cout<<"Last digit is: "<< l<<endl;
   
}