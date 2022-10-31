#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to compare two strings using strcmp

int main()
{
    char str1[1000], str2[1000];
 
    cout<<"Enter the first string"<<endl;
    cin>>str1;
 
    cout<<"Enter the second string"<<endl;
    cin>>str2;
 
    if (strcmp(str1,str2) == 0)
        cout<<"Entered strings are equal"<<endl;
    else
        cout<<"Entered strings are not equal"<<endl;
 
return 0;
 
}