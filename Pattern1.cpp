#include<iostream>

using namespace std;


int main()
{
    int a=1,b,d=1;
    while (a<=3)
    {
        b=1;
        while (b<=3)
        {
            cout<<d;
            d++;
            b++;
        }
        cout<<endl;
        a++;
    }
    return 0;
}
