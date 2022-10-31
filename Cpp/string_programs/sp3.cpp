#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

// Write C++ program to convert a string to Lower case

int main(){
   char a[150];
   cout << "Enter string in uppercase: ";
   cin >> a;
   cout << strlwr(a);
}