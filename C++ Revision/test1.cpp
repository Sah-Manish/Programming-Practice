// Final draft for Linked list
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
// Insertion at ending
void insertatend(int value){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* temp;
    temp=head;
    if(temp==NULL){
        head->data=value;
        head->next=NULL;
        free(ptr);
    }
    else{
        while(temp!=NULL){
            temp=temp->next;
        }
        ptr->data=value;
        ptr->next=NULL;
        temp->next=ptr;
    }
}
// Insertion at beginning
void insertatbegining(int value){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=value;
    ptr->next=NULL;
    if(head==NULL){
        head=ptr;
    }
    else{
        ptr->next=head;
        head=ptr;
    }
}
// traversing
void traverse(){
    struct node* temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}
int main(){
    insertatbegining(3);
    insertatbegining(2);
    insertatbegining(1);
    traverse();
    insertatend(4);
    insertatend(5);
    insertatend(6);
    traverse();
    return 0;
}