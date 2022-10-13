#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int dec,bin=0,bit,i=0;
    cout<<"***This program prints decimal to binary number***"<<endl;
    cout<<" Enter one number: ";
    cin>>dec;
    while (dec!=0)
    {
        bit = dec & 1;
        bin = (pow(10,i)*bit) + bin;
        dec = dec / 2;
        i++;
    }
    cout<<" The binary representation of the following number is: "<<bin;
    return 0;
}