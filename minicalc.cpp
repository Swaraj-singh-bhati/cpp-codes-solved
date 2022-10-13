#include<iostream>

using namespace std;


int main()
{
    double i = 0,b,c;int a;
    cout<<"Welcome this is calculator "<<endl;
    cout<<"Press "<<++i<<" for Addition"<<endl;
    cout<<"Press "<<++i<<" for Subtraction"<<endl;
    cout<<"Press "<<++i<<" for Multiplication"<<endl;
    cout<<"Press "<<++i<<" for Division"<<endl;
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"Enter Two numbers: ";
        cin>>b;
        cin>>c;
        cout<<"The sum of the two numbers is: "<<b+c;
        break;
    case 2:
        cout<<"Enter Two numbers: ";
        cin>>b;
        cin>>c;
        cout<<"The difference of the two numbers is: "<<b-c;
        break;
    case 3:
        cout<<"Enter Two numbers: ";
        cin>>b;
        cin>>c;
        cout<<"The product of the two numbers is: "<<b*c;
        break;
    case 4:
        cout<<"Enter Two numbers: ";
        cin>>b;
        cin>>c;
        cout<<"The Division of the two numbers is: "<<b/c;
        break;
    
    default:
        cout<<"You Entered wrong key";
        break;
    }
    return 0;
}