#include<iostream>
#include<string.h>
using namespace std;

// Area of a circle

int main(){
   float pi = 3.14;
   float r;
   cout << "Enter the radius value: ";
   cin >> r;
   float area = pi*(r*r);
   cout << "area of a circle is: " << area;  
}