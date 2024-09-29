//Program to Add Two Numbers
#include <iostream>
using namespace std;
int sum(int num1,int num2);
int main ()
{
    int a,b,result;
    cout<<"Enter first value:";
    cin>>a;
    cout<<"Enter SEcond value:";
    cin>>b;
    result= sum(a,b);
    cout<<"result=\a"<<result;
}
int sum(int num1, int num2)
{
    int num3=num1+num2;
    return num3;
}
