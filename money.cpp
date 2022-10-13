#include<iostream>

using namespace std;


int main()
{
    int amount,Rs100,Rs50,Rs20,Rs10,Rs1;
    cout<<"Enter the amount here: ";
    cin>>amount;
    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        cout<<"The number of 100Rs notes required is: "<<Rs100<<endl<<endl;
        amount = amount % 100;    
    case 2:
        Rs50 = amount / 50;
        cout<<"The number of 50Rs notes required is: "<<Rs50<<endl<<endl;
        amount = amount % 50;    
    case 3:
        Rs20 = amount / 20;
        cout<<"The number of 20Rs notes required is: "<<Rs20<<endl<<endl;
        amount = amount % 20;    
    case 4:
        Rs10 = amount / 10;
        cout<<"The number of 10Rs notes required is: "<<Rs10<<endl<<endl;
        amount = amount % 10;    
    case 5:
        Rs1 = amount ;
        cout<<"The number of 1Rs notes required is: "<<Rs1<<endl<<endl;
        break;    
    default:
        cout<<"Enter valid amount";
        break;
    }


    return 0;
}