//Program to Find Quotient and Remainder
#include <iostream>
using namespace std;
int main()
{
    int a, b, c,d;
     cout<<"Input the divisor:";
     cin>>a;
     cout<<"Input the dividend:";
     cin>>b;
     c= b/a;
     d=b%a;
     cout<<"Quotient=\a"<<c<<endl<<"Remainder="<<d;
     return 0;
}
