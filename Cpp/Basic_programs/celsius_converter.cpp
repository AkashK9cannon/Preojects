#include<iostream>
#include<string.h>
using namespace std;

// celsius to farenheit

int main(){
   float celsius;
   cout << "Enter the temprature in Celsius: ";
   cin >> celsius;
   float farenheit = (1.8*celsius) + 32;
   cout << "Farenheit is: " << farenheit;
}