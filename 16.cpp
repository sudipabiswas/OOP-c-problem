
#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
};
int main()
{
    node *newitem;
    newitem= new node;
    newitem->data=10;
    newitem->prev=NULL;
    cout<<newitem->data;
    return 0;
}
