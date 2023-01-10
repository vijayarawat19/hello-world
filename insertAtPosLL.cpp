#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void insertAtTail(Node* & tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;}
void print(Node * &head)
{
    Node * temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtPos(Node* &head,int pos,int d)
{
    Node * temp = head;
    int count=1;
    while(count < pos-1)
    {
        temp=temp->next;
        count++;
    }
    Node * insertNode=new Node(d);
    insertNode->next=temp->next;
    temp->next=insertNode;
    
}
int main() {
    
    //created a new node
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtPos(head,3,7);
    print(head);
}
