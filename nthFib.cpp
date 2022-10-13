#include<iostream>

using namespace std;


int main()
{
    int a=1,n,i=0,j=1,ans=0;
    cout<<"This program prints the nth fibonnaci number in the series"<<endl;
    cout<<"Enter one number here: ";
    cin>>n;
    if (n == 0)
    {
        ans = 0;
    }
    if (n == 1)
    {
        ans = 1;
    }
    else
    {
        while (a<n)
        {
            ans = i + j;
            i = j;
            j = ans;
            a++;
        }
    }    
    cout<<"The nth term of the series is :"<<ans;
    return 0;
}