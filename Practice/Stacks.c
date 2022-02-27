#include<stdio.h>
int top = -1;
int stack[10];
void push(int arr[], int ele){
    if(top>9){
        printf("Overflow\n");
    }
    else{
        top++;
        arr[top]=ele;
    }
}
void pop(int arr[]){
    if(top==-1){
        printf("Stack Empty(Underflow)\n");
    }
    else{
        printf("Element %d is poped\n",arr[top]);
        top--;
    }
}
void Top(int arr[]){
    int x=arr[top];
    printf("Top element of stack is %d.\n",x);
}
void empty(int arr[]){
    if(top==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Stack is not empty.\n");
    }
}
void traverse(int arr[]){
    if(top==-1){
        printf("Empty Stack(Underflow)\n");
    }
    else{
        for(int i=0;i<=top;i++){
            int x=arr[i];
            printf("%d -> ",x);
        }
        printf("End of Stack\n");
    }
}
int main(){
    push(stack,1);
    push(stack,2);
    push(stack,3);
    push(stack,4);
    push(stack,5);
    push(stack,6);
    push(stack,7);
    push(stack,8);
    push(stack,9);
    push(stack,10);
    push(stack,11);
    push(stack,12);
    traverse(stack);
    return 0;
}