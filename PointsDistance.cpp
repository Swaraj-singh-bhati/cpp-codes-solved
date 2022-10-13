#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    int a,b;
    friend void distance(Point p1, Point p2); 
    public:

    void makePoint(void)
    {
       cout<<"Enter x point here: "; 
       cin>>a;
       cout<<"Enter y point here: "; 
       cin>>b;
    }
    void displayPoint(void)
    {
        cout<<"The Point entered here is "<<a<<","<<b<<endl;
    }
};

void distance(Point p1, Point p2)
{
    int x_diff = (p2.a-p1.a);
    int y_diff = (p2.b-p1.b);
    double dist = sqrt(pow(x_diff,2)+pow(y_diff,2));
    cout<<"The distance between the two Points is given by: "<<dist;
} 
int main()
{
    Point p1, p2;
    p1.makePoint();
    p1.displayPoint(); 
    
    p2.makePoint();
    p2.displayPoint(); 
    distance(p1,p2);

    return 0;
}