#include<iostream>
#include<string.h>
using namespace std;
// Write C++ program to reverse a number using while & for loop


int main(){
   int num,rev=0;
   cout<<"Enter a number: ";
   cin>>num;
   while (num>0)
   {
      rev = rev*10;
      rev= rev+(num%10);
      num = num/10;
   }
   cout<<"the reversed number is: "<<rev;
}