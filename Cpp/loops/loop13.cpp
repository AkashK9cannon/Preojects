#include<iostream>
#include<string.h>
using namespace std;


int main(){
   int num,j,pow=1;
   cout<<"Enter the number to calculate the power of: ";
   cin>>num;
   cout<<"Enter the times the power to be calculated: ";
   cin>>j;
   for (int i = 0; i < j; i++)
   {
      pow = pow*num;
   }
   cout<<"The power of: "<< num << "to the power "<<j<<" is: "<<pow;
}