// Linked list
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next=NULL;
};
// Insert at end function
void insert(node* &head, int value){
    node* n ;
    if(head==NULL){
        n=head;
        head->data=value;
        head->next=NULL;
    }
    else{
        head->next=n;
        n->next=NULL;
    }
}
// Traverse Linked List
void display(node* head){
    node* temp;
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head;
    head->data=0;
    head->next=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    return 0;
}