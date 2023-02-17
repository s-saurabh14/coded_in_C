#include<stdio.h>
#include<stdlib.h>
main(){
struct node{
int data;
struct node *next;
};
struct node *newnode,*start=NULL,*temp,*extranode;
int choice=1;
int ch;
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
temp=start;
printf("do you want to insert data in between if yes write 1 :- ");
scanf("%d",&ch);
if(ch==1){
     extranode= (struct node*)malloc(sizeof(struct node));
      printf("enter data you  want to insert in between \n");
        scanf("%d",&extranode->data);
        extranode->next= NULL;
    while(temp->next->data < extranode->data){
        temp=temp->next;
    }
    extranode->next=temp->next;
    temp->next=extranode;
}
temp=start;
while(temp != NULL){
    printf("your data  is %d \n ",temp->data);
    temp=temp->next;
}

}

