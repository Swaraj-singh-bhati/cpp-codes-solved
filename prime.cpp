#include<iostream>

using namespace std;


int main()
{
    int a,b=2;bool x = 0;
    cout<<"***This program checks prime number***"<<endl;
    cout<<"Enter the number here: ";
    cin>>a;
    while (b<a)
    {
        if (a % b == 0)
        {
            x = 1;
        }
        b++;
    }
    if (x == 1)
    {
        cout<<a<<" is not a prime number ";
    }
    else
        cout<<a<<" is a prime number ";
    return 0;
}