#include<iostream>
#include<string.h>
using namespace std;

// C++ program to check whether a triangle can be formed by the given value for the angles.

int main(){
   int a,b,c;
   cout<<"Enter angle 1: ";
   cin>>a;
   cout<<"Enter angle 2: ";
   cin>>b;
   cout<<"Enter angle 3: ";
   cin>>c;
   if (a+b+c==180)
   {
      cout<<"It's a triangle";
   }
   else if (a+b+c!=180)
   {
      cout<<"Not a a triangle";
   }
   
   
}