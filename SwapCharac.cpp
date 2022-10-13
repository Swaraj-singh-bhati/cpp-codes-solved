#include<iostream>
using namespace std;
void display(char a, char b)
{
    cout<<"The first character is: "<<a<<endl;
    cout<<"The second character is: "<<b<<endl;
}
void swap(char *x, char *y)
{
    char *c;
    *c= *x;
    *x= *y;
    *y= *c;
}
int main()
{
    char a,b,c;
    cout<<"Enter one character: ";
    cin>>a;
    cout<<"Enter another character: ";
    cin>>b;
    display(a,b);
    swap(a,b);
    display(a,b);
    return 0;
}