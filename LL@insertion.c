#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node
{
    int data;
    struct node *next;
};


void insert(int value)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
        
    }
    
}
int main()
{
   int value,num;
   printf("How many node you want to create ");
   scanf("%d",&num);
   for(int i=0;i<num;i++)
   {
   printf("Enter the value ");
   scanf("%d",&value);
   insert(value);
   }
   display();
   return 0;
}