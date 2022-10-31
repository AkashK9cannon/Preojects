#include<iostream>
#include<string.h>
using namespace std;

// C++ program to detrermine a candidate’s age is eligible for casting the vote or not.

int main(){
   int age;
   cout<<"Enter your age: ";
   cin>>age;
   if (age>=18)
   {
      cout<<"Eligible to vote";
   }
   else
   {
      cout<<"Not eligible";
   }
   
   
}