#include<iostream>
#include<string.h>
using namespace std;

// swap the values of two variables;

int main(){
   int a;
   int b;
   int c;
   cout << "a: ";
   cin >> a;
   cout << "b: ";
   cin >> b;
   c=a;
   a=b;
   b=c;
   cout << a<<":" << "\n";
   cout << b<<":" << "\n";
   cout << c<<":" << "\n";
}