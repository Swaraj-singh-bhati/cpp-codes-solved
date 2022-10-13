#include<iostream>
using namespace std;

int reverse(int z)
{
    int a,b=0,n=1,y;
    y = z / 10;
    while(y!=0)
    {
        n = n * 10;
        y = y / 10;
    }
    while(z!=0)
    {
        a = z % 10;
        z = z / 10;
        b = a * n + b;
        n = n / 10;
    }
    if (z>=0)
    {
        return b;
    }
    else
    {
        b = b * -1;
        return b;
    }
}
int main()
{
    int x,c;
    cout<<"Enter the number : ";
    cin>>x;
    c = reverse(x);
    cout<<"reverse of the number is : "<<c; 
}
