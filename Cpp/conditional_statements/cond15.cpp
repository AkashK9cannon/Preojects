#include<iostream>
#include<string.h>
using namespace std;

// C++ program to calculate the total marks, percentage and division of student.

int main(){
   int acc,bst,eco,eng,hnd;
   int marks;
   float percentage;
   cout<<"Enter the marks for Accountancy: ";
   cin>>acc;
   cout<<"Enter the marks for Business Studies: ";
   cin>>bst;
   cout<<"Enter the marks for Economics: ";
   cin>>eco;
   cout<<"Enter the marks for English: ";
   cin>>eng;
   cout<<"Enter the marks for Hindi: ";
   cin>>hnd;
   marks = acc+bst+eco+eng+hnd;
   percentage = marks/5;
   cout<<marks<<endl;
   cout<<percentage<<endl;
   if (percentage>60)
   {
      cout<<"1st Division";
   }
   else if (percentage>=50&&percentage<=60)
   {
      cout<<"2nd Division";
   }
   else if (percentage>=33&&percentage<50)
   {
      cout<<"3rd Division";
   }
   else
   {
      cout<<"Fail";
   }
   
   
   
   
}