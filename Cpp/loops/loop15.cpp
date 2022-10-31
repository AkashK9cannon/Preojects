#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to check whether a number is Armstrong number or not

int main(){
   int num,r,i,sum=0;
   cout<<"Enter a number: ";
   cin>>num;
   for (i = num; i > 0; i=i/10)
   {
      r = i%10;
      sum = sum + r*r*r;
   }
   cout<<"The sum is: "<<sum<<endl;
   if (sum == num)
   {
      cout<<"It's an Armstrong number.";
   }
   else if (sum != num)
   {
      cout<<"Not an Armstrong number.";
   }
   
   
}