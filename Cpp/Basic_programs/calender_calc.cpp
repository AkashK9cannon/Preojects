#include<iostream>
#include<string.h>
using namespace std;

// Farenheit to celsius

int main(){
   float year,weeks,days;
   cout << "Enter the number of days: ";
   cin >> days;
   year = days/365.25;
   weeks = days/7;
   cout << "Days: " << days << "\n";
   cout << "Weeks: " << weeks << "\n";
   cout << "Year: " << year << "\n";
}