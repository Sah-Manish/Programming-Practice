#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head=NULL;
Node* ref=head;
void insertatbegining(int val){
    Node* temp;
    if(head==NULL){
          head=temp;
          head->data=val;
          head->next=NULL;
    }
    else{
        temp->data=val;
        temp->next=head;
        head=temp;
    }

}
void traverse(){
    if(head==NULL){
        cout<<"Empty Linked List"<<endl;
    }
    else{
        Node* temp;
        while(head->next!=NULL){
            cout<<head->data<<"->";
            temp=head;
        }
    }
}
int main(){
    insertatbegining(1);
    insertatbegining(2);
    insertatbegining(3);
    insertatbegining(4);
    insertatbegining(5);
    traverse();
    return 0;
}