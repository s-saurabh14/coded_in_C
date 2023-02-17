#include<stdio.h>
#include<stdlib.h>
main(){
struct node{
int data;
struct node *next;
struct node *prev;
};
struct node *newnode,*start=NULL,*temp,*nextnode, *present = start, * previous  = NULL, *tail;
int choice=1, need, pos, i=1, count=1,data_needed;
while(choice==1){
    newnode=(struct node*)malloc(sizeof(struct node*));
    printf("enter data - ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(start==NULL){
        tail=start=newnode;
        newnode->prev=tail;
        newnode->next=start;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        newnode->next=start;
        tail=newnode;
        start->prev=tail;
    }
    printf("enter 1 if need more node - ");
    scanf("%d",&choice);
}
    printf("enter 1 if Insertion at Beginning\n");
    printf("enter 2 if Insertion at specific position\n");
    printf("enter 3 if Insertion at end\n");
    printf("enter 4 if deletion at Beginning\n");
    printf("enter 5 if deletion at specific position \n");
    printf("enter 6 if deletion at end\n");
    printf("enter 7 if count no of node\n");
    printf("enter 8 if search data\n");
    printf("enter 9 if insert data in sorted order\n");
    printf("enter 10 if  want to reverse\n");
    printf("enter your need\n");
    scanf("%d",&need);
    switch (need){
    case 1:
        // Insertion at Beginning
        newnode= (struct node*)malloc(sizeof(struct node*));
        printf("enter data\n");
        scanf("%d",&newnode->data);

        newnode->next=start;
        start->prev=newnode;
        newnode->prev= tail;
        tail->next=newnode;

        start=newnode;

        break;

    case 2:
        // Insertion at specific position
        temp=start;
        printf("enter position\n");
        scanf("%d",&pos);
        newnode= (struct node*)malloc(sizeof(struct node*));
        printf("enter data\n");
        scanf("%d",&newnode->data);
        while(i<pos){
            temp=temp->next;
            i++;

        }
        newnode->next=temp;
        newnode->prev=temp->prev;
        temp->prev->next=newnode;
        temp->prev=newnode;

        break;

    case 3:
        // Insertion at end
        temp=start;
         newnode= (struct node*)malloc(sizeof(struct node*));
        printf("enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=start;
        while(temp->next!=start){
            temp= temp->next;
        }
        tail->next=newnode;
        newnode->next=start;
        newnode->prev=tail;
        tail=newnode;

        break;

    case 4:
        // deletion at beg
        temp=start;
        start=start->next;
        start->prev=tail;
        tail->next=start;
        free(temp);

        break;

    case 5:
        // deletion at specific pos
        temp= start;
        printf("Enter position at which you want to delete the node\n ");
        scanf("%d",&pos);
        while(i<pos){
            temp= temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);

        break;

    case 6:
        // deletion at end
        temp=tail;
        tail->prev->next=start;
        start->prev=tail->prev;
        free(temp);

        break;

    case 7:
        //count no of node
         temp= start;
        while(temp!=tail){
            temp=temp->next;
            count++;
        }
        printf("total no of node are = %d\n",count );

        break;

    case 8:
        //search data
        temp= start;
        printf("Enter data you want to find\n");
        scanf("%d",&data_needed);
        while(temp!=tail){
            if(temp->data==data_needed){
                printf("your data found and found data is %d \n ",temp->data);
            }
                temp=temp->next;

        }
        if(temp->data==data_needed){
                printf("your data found and found data is %d \n ",temp->data);
            }
            else{
                printf("Given data not found\n");
            }


        break;
    case 9:


        break;

    case 10:
        break;

    }
    temp=start;
    while(temp->next!=start){
    printf("your data after proccess is %d\n ",temp->data);
    temp=temp->next;
    }
    printf("your data after proccess is %d\n ",temp->data);
}



