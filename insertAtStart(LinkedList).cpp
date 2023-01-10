#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
void insert(node* &head,int d)
{
    node *temp = new node(d);
    temp->next=head;
    head=temp;
}
void print(node * &head)
{
    node *temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    node *node1=new node(0);
    node *head= node1;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    
    print(head);
}
