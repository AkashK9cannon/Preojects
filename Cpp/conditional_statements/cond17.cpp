#include<iostream>
#include<string.h>
using namespace std;

// C++ program to count total number of notes in entered amount.


int main(){
   int count,r10,r20,r50,r100,r200,r500,r2000,amount,num;
   cout<<"Enter the total of Rs.10 notes: ";
   cin>>r10;
   cout<<"Enter the total of Rs.20 notes: ";
   cin>>r20;
   cout<<"Enter the total of Rs.50 notes: ";
   cin>>r50;
   cout<<"Enter the total of Rs.100 notes: ";
   cin>>r100;
   cout<<"Enter the total of Rs.200 notes: ";
   cin>>r200;
   cout<<"Enter the total of Rs.500 notes: ";
   cin>>r500;
   cout<<"Enter the total of Rs.2000 notes: ";
   cin>>r2000;
   amount = (r10*10)+(r20*20)+(r50*50)+(r100*100)+(r200*200)+(r500*500)+(r2000*2000);
   count= r10+r20+r50+r100+r200+r500+r2000;
   cout<<amount<<"\n";
   cout << count;
}