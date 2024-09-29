// Program to find circumference and area of a circle using function.
#include <iostream>
using namespace std;
float area(float radious);
float circumference(float radious);
int main()
{
    float r,A,C;
    cout<<"Enter the value of radious:";
    cin>>r;
    A=area(r);
    C=circumference(r);
cout<<"The area of the circle:"<<A<<"\n The circumference of the circle:"<<C;

}
float area(float radious)
{
    return 2*3.1416*radious;
}
float circumference(float radious)
{
    return 3.1416*radious*radious;
}
