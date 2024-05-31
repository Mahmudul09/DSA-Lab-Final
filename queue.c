#include<stdio.h>
int front =-1,rear=-1,arr[100],n=5,val;
int dequeue()
{
    if(front==-1 && rear==-1){
        printf("Underflow");
    }
    else if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        printf("Deleting element:%d\n",arr[front]);
        front=front+1;
    }
}
int enqueue(){
    if(rear==n-1){
        printf("Overflow\n");
    }
    else if(front==-1 && rear==-1){
        printf("Inserting value:");
        scanf("%d",&val);
        rear=0;
        front=0;
        arr[rear]=val;
        printf("%d\n",arr[rear]);
    }
    else{
        printf("Inserting value:");
        scanf("%d",&val);
        rear=rear+1;
        arr[rear]=val;
        printf("%d\n",arr[rear]);
    }
}
int show(){
}
int main()
{
    int choice;
    printf("1.Dequeu\n2.Enqueue\n");
    printf("Enter your choice:");
    while(choice!=4){
        scanf("%d",&choice);
        switch(choice){
    case 1:
        dequeue();
        break;
    case 2:
        enqueue();
        break;
    default:
        printf("Invalid");
        }
    }
    return 0;
}


