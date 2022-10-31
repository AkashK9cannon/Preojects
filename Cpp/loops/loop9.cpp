#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to find the sum of first and last digit of any number

int main(){
   int num,f,l;
   int fi;
   cout<<"Enter a number: ";
   cin>>num;
   l=num%10;
   cout<<l<<endl;
   while (num >= 10)
   {
      num = num/10;
   }
   f = num;
   int sum = f+l;
   cout<<sum;
}