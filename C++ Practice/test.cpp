#include<stdio.h>
#include<iostream>
struct node{
    int data;
    struct node* next;
};
struct node* head;
// insert at beginning
void insert(int val){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    if(head==NULL){
        newnode->next=NULL;
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
// insert at end
void end(int val){
    struct node* temp=head;
    do{
        temp=temp->next;
    }
    while(temp->next!=NULL);
    temp=temp->next;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    temp->next=newnode;
}
// traverse
void traverse(){
    struct node* temp=head;
    do{
        printf("%d->",temp->data);
        temp=temp->next;
    }
    while(temp->next!=NULL);
    printf("%d->End of list",temp->data);
}
int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    traverse();
    end(0);
    traverse();
    return 0;
}