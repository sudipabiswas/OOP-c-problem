#include<iostream>
using namespace std;
class Student
{
public:

    void result(string name,int roll,int mark)
    {
       cout<<"NAME:"<<name<<endl<<"ROLL:"<<roll<<endl<<"MARK:"<<mark;

    }
};
main()
{
    Student x;
     string name;
    int roll,mark;
     cout<<"Enter student name:";
     cin>>name;
     cout<<"\n ENter student roll:";
     cin>>roll;
     cout<<"\n Enter mark od the student:";
     cin>>mark;
     x.result(name,roll,mark);
}
