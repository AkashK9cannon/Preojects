#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to find sum of odd numbers between 1 to n

int main(){
   int n,i,sum=0;
   cout<<"enter a number: ";
   cin>>n;
   for (i = 1; i <= n; i+=2)
   {
      sum=sum+i;
      cout<<sum;
   }
   cout<<"The total sum is: "<<sum;
}