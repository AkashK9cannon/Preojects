#include<iostream>
#include<string.h>
using namespace std;

// C++ program to print day name of week.

int main(){
   int num;
   cout<<"Enter the number to find the day: ";
   cin >> num;
   if (num == 1)
   {
      cout<<"Monday";
   }
   else if (num==2)
   {
      cout<<"tuesday";
   }
   else if (num==3)
   {
      cout<<"Wednesday";
   }else if (num==4)
   {
      cout<<"Thursday";
   }else if (num==5)
   {
      cout<<"Friday";
   }else if (num==6)
   {
      cout<<"Saturday";
   }else if (num==7)
   {
      cout<<"Sunday";
   }
   else
   {
      cout<<"Invalid number";
   }
   
   
   
}