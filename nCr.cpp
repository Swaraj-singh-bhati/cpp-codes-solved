#include<iostream>

using namespace std;

double factorial(double a)
{
    double ans = 1;
    while(a!=0)
    {
        ans = ans * a;
        a--;
    }
    return ans;
}
double nCr(double a, double b)
{
    double ans;
    ans = factorial(a) / (factorial(b) * factorial (a-b));
    return ans;
}

int main()
{
    double n,r,ans;
    cout<<"This program prints nCr value"<<endl;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    ans = nCr(n,r);
    cout<<"The value of nCr is : "<<ans;
    return 0;
}