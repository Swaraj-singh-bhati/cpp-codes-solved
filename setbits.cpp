#include<iostream>
#include<math.h>
using namespace std;

int setbit(int a)
{
    int bit,num=0;
    while (a!=0)
    {
        bit = a & 1;
        if (bit == 1)
        {
            num++;
        }
        a = a / 2;
    }
    return num;
}

int main()
{
    int a,b,n;
    cout<<"This program prints the number of setbits in a and b"<<endl;
    cout<<"Enter two numbers here: ";
    cin>>a>>b;
    n = setbit(a) + setbit(b);
    cout<<"The number of setbits in a and b is : "<<n;
    return 0;
}