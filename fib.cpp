#include<iostream>

using namespace std;


int main()
{
    int a=0,b=1,c=1,n,sum;
    cout<<"***This program prints fibonacci series***";
    cout<<endl<<"Enter the number to print fibonacci number: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    sum=0;
    while (c<=n)
    {
        sum = a + b; 
        a = b;
        b =sum;
        cout<<sum<<" ";
        c++;
    }
    

    return 0;
}