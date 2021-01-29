#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node     *left, *right;
};
struct node *create(){
    struct node *newNode;   
    char dis,temp;
    newNode =(struct node *)malloc(sizeof(struct node));
    newNode->left=NULL;
    newNode->right=NULL;
    printf("Are you enetering any data (Y/N) ? : ");
    do{
        scanf("%c",&dis);
    }while(dis=='\n');
    if(dis=='Y'||dis=='y'){
         printf("Enter data : ");
         scanf("%d",&newNode->data);
         printf("You are successfully enter %d \n",newNode->data);
         newNode->left=create();
         newNode->right=create();
         return newNode;
    }
    else
        return NULL;
}
void preOrder(struct node *root){
    if(root==NULL)
        return;
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct node *root){
    if(root==NULL)
        return;
    preOrder(root->left);
    preOrder(root->right);
    printf("%d ",root->data);
}
void inOrder(struct node *root){
    if(root==NULL)
        return;
    preOrder(root->left);
    printf("%d ",root->data);
    preOrder(root->right);  
}
void main(){
    struct node *root=NULL;
    root=create();
    printf("\nINORDER\n");
    inOrder(root);
    printf("\nPREORDER\n");
    preOrder(root);
    printf("\nPOSTORDER\n");
    postOrder(root);
}