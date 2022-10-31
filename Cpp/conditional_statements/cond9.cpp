#include<iostream>
#include<string.h>
using namespace std;

// C++ program to check entered character vowel or consonant.

int main(){
   char a;
   cout<<"Enter a character to check vowel or consonant: ";
   cin>> a;
   if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
   {
      cout<<"Is a vowel";
   }
   else if (a=='B'||a=='C'||a=='D'||a=='F'||a=='G'||a=='H'||a=='J'||a=='K'||a=='L'||a=='M'||a=='N'||a=='P'||a=='Q'||a=='R'||a=='S'||a=='T'||a=='V'||a=='W'||a=='X'||a=='Y'||a=='Z'||a=='b'||a=='c'||a=='d'||a=='f'||a=='g'||a=='h'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z')
   {
      cout<<"is a consonant.";
   }
   else
   {
      cout<<"invalid character";
   }
   
   
   
}