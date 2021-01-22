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
    scanf("%c",&dis);
    do{
        scanf("%c",&temp);
    }while(temp!='\n');
    if(dis=='Y'||dis=='y'){
         printf("Enter data : ");
         scanf("%d",&newNode->data);
         newNode->left=create();
         newNode->right=create();
    }
    else
        return NULL;
}
void main(){
    struct node *head=NULL;
    head=create();
}