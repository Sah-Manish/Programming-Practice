#include<stdio.h>
int top=-1;
int queue[10];
void enqueue(int arr[], int ele){
    if(top>=10){
        printf("Overflow\n");
    }
    else{
        top++;
        arr[top]=ele;
    }
}
void dequeue(int arr[]){
    if(top==-1){
        printf("Queue Empty (Underflow)\n");
    }
    int x=arr[0];
    printf("Element %d dequeued from Queue.\n",x);
    top--;
    for(int i=0;i<=top;i++){
        arr[i]=arr[i+1];
    }
}
void traverse(int arr[]){
    if(top==-1){
        printf("Empty Queue(Underflow)\n");
    }
    else{
        for(int i=0;i<=top;i++){
            int x=arr[i];
            printf("%d -> ",x);
        }
        printf("End of Queue\n");
    }
}
void Top(int arr[]){
    int x=arr[0];
    printf("Top element of Queue is %d.\n",x);
}
void empty(int arr[]){
    if(top==-1){
        printf("Queue is Empty\n");
    }
    else{
        printf("Queue is not empty.\n");
    }
}
int main(){
    enqueue(queue,0);
    enqueue(queue,1);
    enqueue(queue,2);
    enqueue(queue,3);
    enqueue(queue,4);
    enqueue(queue,5);
    enqueue(queue,6);
    enqueue(queue,7);
    enqueue(queue,8);
    enqueue(queue,9);
    enqueue(queue,10);
    traverse(queue);
    dequeue(queue);
    traverse(queue);
    return 0;
}