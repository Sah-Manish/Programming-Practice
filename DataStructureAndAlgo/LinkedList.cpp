#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head =NULL;
// No error
void insertAtEnd(int info){
    struct node *t, *temp;
    t=(struct node*)malloc(sizeof(node));
    t->data=info;
    if(head==NULL){
        head=t;
        head->next=NULL;
    }
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=t;
    t->next=NULL;
}
// No error
void traverseLinkedList(){
    struct node *pointer=head;
    while(pointer!=NULL){
        cout<<pointer->data<<"->";
        pointer=pointer->next;
    }
    cout<<"End of Linked List";
}
// No error
void searchElement(int ele){
    struct node *temp;
    temp=head;
    while(temp->next!=NULL){
        if(temp->data==ele){
            cout<<"Element "<<ele<<" found ...\n";
            return;
        }
        else{
            temp=temp->next;
        }
    }
    cout<<"Element "<<ele<<" not found ...\n";;
}
int main(){
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    insertAtEnd(5);
    insertAtEnd(6);
    searchElement(7);
    searchElement(4);
    traverseLinkedList();
    cout<<"\n\nCode Completed ....";
    return 0;
}
