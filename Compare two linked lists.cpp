#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class operation
{public:

    Node *head=nullptr;
    Node *temp= nullptr;

     void makeList(int n)
 {
     for(int i=0;i<n;i++)
     {
         if(head==nullptr)
         {
             head= new Node();
             cin>>head->data;
             head->next=NULL;
             temp=head;

         }
         else
            {
            Node *newitem= new Node();
            cin>>newitem->data;
            newitem->next= NULL;
            temp->next=newitem;
            temp= newitem;
            }
     }
 }
 void compareList(Node *n1, Node *n2)
 {
     int Count=0;
     Node *temp1= n1;
      Node *temp2= n2;
     while(temp1!=NULL&&temp2!=NULL)
     {
         if(temp1->data==temp2->data)
        {
            Count++;
        }


           temp1=temp1->next;
           temp2=temp2->next;

     }
     cout<<Count;
 }
};
int main()
{
    operation list1,list2;
    list1.makeList(3);
    list2.makeList(2);
    list1.compareList(list1.head,list2.head);
    return 0;
}
