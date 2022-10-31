#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to find string length

int main(){
   char a[256] = "Akash Khuntia";
   // cout << "enter a sentence: ";
   // cin >> a;
   cout << strlen(a);
}

// If a string is pre-defined then strlen() will find the correct length of the string else in case of a input it will only calculate till the white spaces