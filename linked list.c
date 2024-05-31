#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
            int data;
            struct node *link;
    };
    struct node  *head ,*n_node,*temp;
    head=0;
    int choice =1;
    while(choice!=0){
        printf("Enter your choice:");
        scanf("%d",&choice);
        n_node = (struct node*) malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&n_node->data);
        n_node->link=0;
        if(head==0){
            head=temp=n_node;
        }
        else{
            temp->link=n_node;
            temp=n_node;
        }
    }
    temp=head;
    while(temp!=0){
        printf("\n%d -> %p\t",temp->data,temp->link);
        temp=temp->link;
    }
    return 0;
}

