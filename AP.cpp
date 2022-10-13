#include<iostream>

using namespace std;


int main()
{
    int a,b;
    cout<<"This program prints nth term of AP (3 * n + 7)"<<endl;
    cout<<"Enter the value of n here: ";
    cin>>a;
    b = 3 * a +7;
    cout<<"The nth term of the AP is "<<b;
    return 0;
}