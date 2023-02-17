#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next;
};
void main()
{
struct node* new_node,*start=NULL,*temp;
int choice=1;
new_node = (struct node*) malloc(sizeof(struct node));
printf("enter data: ");
scanf("%d",&new_node->data);
new_node->next= NULL;
if(start=NULL){
    start= new_node;
}
else{
    temp->next=new_node;
    temp=new_node;
}
printf("do you want to add more nodes");
scanf("%d",&choice);
temp=start;
while(temp!=NULL){
    printf("Data is %d ->",temp->data);
    temp=temp->next;
}
printf("null");
}
