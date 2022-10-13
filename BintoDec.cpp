#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int dec=0,bin,bit,i=0;
    cout<<"***This program prints binary to decimal number***"<<endl;
    cout<<" Enter one number: ";
    cin>>bin;
    while(bin!=0)
    {
        bit = bin % 10;
        if (bit == 1)
        {
            dec = dec + pow(2,i);
        }
        i++;
        bin = bin / 10;
    }
    cout<<"The number in decimal is: "<<dec;

    return 0;
}