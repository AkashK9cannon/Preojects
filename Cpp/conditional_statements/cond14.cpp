#include<iostream>
#include<string.h>
using namespace std;

// C++ program to find the eligibility of admission for an engineering course based on the criteria.

int main(){
   float marks;
   int rank;
   cout<<"Enter your 12th marks: ";
   cin>>marks;
   cout<<"Enter your JEE rank: ";
   cin >> rank;
   if (marks>=95&&rank<=4000)
   {
      cout<<"Eligible to join.";
   }
   else
   {
      cout<<"Better luck next time.";
   }
   
   
}