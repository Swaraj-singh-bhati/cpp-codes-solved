#include<iostream>
using namespace std;


int arrSum(int a[],int size)
{
    int sum = a[0];
    if(size==1)
    return sum;
    else
    return sum = sum + arrSum(a+1,size-1);

}

int main()
{
    int a[9] = {2,4,5,3,7,8,1,5,5};
    int sum = arrSum(a,9);

    cout<<"Sum of the given array is "<<sum<<endl<<endl; 
}
