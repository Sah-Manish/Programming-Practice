#include<stdio.h>
#include<iostream>
struct node{
    int data;
    struct node *next;
};
struct node *head;
// Push function
void insert(int val){
    struct node *newnode;
    newnode->data=val;
    newnode->next=head;
    newnode=head;
}
// traverse
void traverse(){
    struct node *temp;
    temp=head;
    while(temp->next!=NULL){
        printf("%d->",temp->data);
    }
    printf("End of Stack\n");
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    traverse();
    return 0;
}
