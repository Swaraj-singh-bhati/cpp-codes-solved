// Program to print following series
// Enter one number: 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include<iostream>

using namespace std;


int main()
{
    int row=1,column,n,space,a;
    cout<<"Enter one number: ";
    cin>>n;
    while (row<=n)
    {
        a=n-row+1;
        column=1;
        while (column<=a)
        {
            cout<<column;
            column++;
        }
        space=row-1;
        while (space!=0)
        {
            cout<<"**";
            space--;
        }
        while (column!=1)
        {
            cout<<column-1;
            column--;
        }
        
        cout<<endl;
        row++;
    }
    return 0;
}