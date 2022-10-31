#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to find sum of even numbers between 1 to n


int main(){
   int n,sum=0,i;
   cout<<"Enter a number: ";
   cin>>n;
   for (i = 2; i <= n; i+=2)
   {
      sum = sum+i;
      cout<<sum;
   }
   cout<<"the sum of all even numbers till n is: "<<" "<<sum;
}