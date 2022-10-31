#include<iostream>
#include<string.h>
using namespace std;


int main(){
   char a;
   cout << "Enter an alphabet to check if it is in upper or lower case: ";
   cin >> a;
   if (a>='A'&&a<='Z')
   {
      cout << a <<":" << " " << "is in uppercase";
   }
   else if (a>='a'&&a<='z')
   {
      cout<<a<<":"<<" "<<"is in lowercase"; 
   }
   else
   {
      cout<<"invalid character";
   }
   
   
   
}