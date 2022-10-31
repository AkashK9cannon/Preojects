#include<iostream>
#include<string.h>
using namespace std;

int main(){
   float celsius, farenheit;
   cout << "Enter the temprature in farenheit: ";
   cin >> farenheit;
   celsius = (farenheit - 32)/1.8;
   cout << celsius;  
}