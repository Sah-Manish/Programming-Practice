#include<iostream>
using namespace std;
class node{
    public:
    int data;
    class node *next=NULL;
    node insert(int val){
        node *head=(node*)malloc(sizeof(node));
        head->data=val;
        head->next=NULL;        
    }
};

int main(){
    node *newnode;
    newnode->insert(node*,1);
    return 0;
}

