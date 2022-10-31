#include<iostream>
#include<string.h>
using namespace std;

// Write C++ program to count number of alphabets, digits and special characters in string

int main()
{
    char string[150];
    int alphabets, digits, specialchars, i;
 
    alphabets = digits = specialchars = i = 0;
 
    cout<<"Enter any string: ";
    cin>>string;
 
     while(string[i]!='\0')
    {
        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        {
            alphabets++;
        }
        else if(string[i]>='0' && string[i]<='9')
        {
            digits++;
        }
        else
        {
            specialchars++;
        }
 
        i++;
    }
 
    cout<<"Total Alphabets: "<<alphabets<<endl;
    cout<<"Total Digits: "<<digits<<endl;
    cout<<"Total Special characters: "<<specialchars<<endl;
 
}