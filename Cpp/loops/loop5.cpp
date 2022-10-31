#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to print sum of digits enter by user

int main(){
   int num,total;
   cout<<"Enter a number: ";
   cin>>num;
   for (total = 0; num > 0; num = (num/10))
   {
      total = total+(num%10);
   }
   cout<<"total sum of digits: "<<total;
   return 0;
   
}