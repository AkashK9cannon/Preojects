#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

// Write C++ program to find Armstrong numbers between 1 to n

int main(){
   int lower, higher, i, temp1, temp2, remainder, n = 0, result = 0;
 
     //Reading two numbers from user
    cout<<"Enter two numbers: ";
    cin>>lower;
    cin>>higher;
 
    cout<<"Armstrong numbers between "<< lower << " and "<<higher << " are: ";
     for(i = lower + 1; i < higher; ++i)
    {
        temp2 = i;
        temp1 = i;
 
        // number of digits calculation
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
 
        // result contains sum of nth power of its digits
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
 
        // checking if number i is equal to the sum of nth power of its digits
        if (result == i) {
            cout<<i<<endl;
        }
 
        // resetting the values to check Armstrong number for next iteration
        n = 0;
        result = 0;
 
    }
 
    return 0;
}