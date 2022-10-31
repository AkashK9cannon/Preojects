#include<iostream>
#include<string.h>
using namespace std;


int main(){
   int num, i, rev;
 
    //Reading a number from user
    cout<<"Enter any number:";
    cin>>num;
 
    rev = num;
    for(i=0; num>0; num=num/10)
    {
        i = i * 10;
        i = i + (num%10);
    }
     //Checking if reverse number is equal to original num or not.
    if(rev == i)
       cout<< rev << " is a Palindrome Number.";
    else
        cout<< rev << " is not a Palindrome Number.";
 
   return 0;
}