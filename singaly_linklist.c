#include<stdio.h>
#include<stdlib.h>
main(){
struct node{
int data;
struct node *next;
};
struct node *newnode,*start=NULL,*temp;
int choice=1;
while(choice==1){
newnode= (struct node*)malloc(sizeof(struct node));
printf("enter data\n");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(start==NULL){
    start=temp=newnode;
}
else{
    temp->next=newnode;
    temp=newnode;
}
printf("enter choice 1 if want to add more list");
scanf("%d",&choice);
}
temp=start;
while(temp != NULL){
    printf("your data  is %d \n",temp->data);
    temp=temp->next;
}
}

