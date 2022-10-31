#include<iostream>
#include<string.h>
using namespace std;

int main(){
   int a;
   int b;
   cout << "Enter the first number: ";
   cin >> a;
   cout << "Enter the second number: ";
   cin >> b;
   int sum = a+b;
   int sub = a-b;
   int times = a*b;
   int div = a/b;
   int mod = a % b;
   cout << sum << "\n";
   cout << sub << "\n";
   cout << times << "\n";
   cout << div << "\n";
   cout << mod << "\n";
}