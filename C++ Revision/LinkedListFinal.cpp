#include<iostream>
using namespace std;
// Using Class making Linked List
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head, int val){    // Taking parameter head as by reference and data that need to be inserted in the node
    node* n = new node(val);
    cout<<"Hi"<<endl;
    if(head==NULL){
        head=n;
        return; //Not returning value since the function return void
    }
    node* temp=head;
    while(temp->next==NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){   // Taking parameter head as value not by reference
    node* temp=head;
    cout<<"dis"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);

    return 0;
}