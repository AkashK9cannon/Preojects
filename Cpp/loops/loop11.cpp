#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

// Write C++ program to calculate product of digits of a number

int main(){
   int num,p=1;
   cout<<"Enter a number: ";
   cin>>num;
   while (num!=0)
   {
      p=p*(num%10);
      num=num/10;
   }
   cout<<p;
}