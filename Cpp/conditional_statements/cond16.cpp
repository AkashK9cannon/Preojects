#include<iostream>
#include<string.h>
using namespace std;

// C++ program to enter month number and print number of days in month.

int main(){
   int num;
   string month;
   int days;
   cout<<"Enter a number: ";
   cin>>num;
      if (num==1)
      {
         month = "January";
         days = 31;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==2)
      {
         month = "February";
         days = 28;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==3)
      {
         month = "March";
         days = 31;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==4)
      {
         month = "April";
         days = 30;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==5)
      {
         month = "May";
         days = 31;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==6)
      {
         month = "June";
         days = 30;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==7)
      {
         month = "July";
         days = 31;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==8)
      {
         month = "August";
         days = 31;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==9)
      {
         month = "September";
         days = 30;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==10)
      {
         month = "October";
         days = 31;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==11)
      {
         month = "November";
         days = 30;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num==12)
      {
         month = "December";
         days = 31;
         cout<<month<<':'<<" "<<days<<" "<<"days";
      }
      else if (num>12)
      {
         cout<<"Invalid number";
      } 
}