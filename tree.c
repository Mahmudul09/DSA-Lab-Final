#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node* n_node(int data){
    struct node* Node = (struct node*) malloc(sizeof(struct node));
    Node->data = data;
    Node->left=0;
    Node->right=0;
    return Node;
};
void preorder(struct node* root){
    if(root==0){
        return 0;
    }
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node* root){
    if(root==0){
        return 0;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
}
void inorder(struct node* root){
    if(root==0){
        return 0;
    }
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}
int main()
{
    struct node* root=n_node(10);
    struct node* a=n_node(5);
    struct node* b=n_node(2);
    struct node* c=n_node(12);
    struct node* d=n_node(17);
    struct node* e=n_node(11);
    root->left=a;
    root->right=c;
    a->left=b;
    c->left=e;
    c->right=d;
    printf("Preorder: ");
    preorder(root);
    printf("\n");
    printf("Postorder: ");
    postorder(root);
    printf("\n");
    printf("Inorder:  ");
    inorder(root);
    printf("\n");
}

