#include <iostream>
using namespace std;
 class Student
 {
     public:
     int roll;
     string name;
     int mark;
     void display()
     {


     cout<<"Enter student name:";
     cin>>name;
     cout<<"\n ENter student roll:";
     cin>>roll;
     cout<<"\n Enter mark od the student:";
     cin>>mark;
         cout<<"NAME:"<<name<<endl<<"ROLL:"<<roll<<endl<<"MARK:"<<mark;
     }
 };

 main()
 {
     Student ui;
     ui.display();
 }
