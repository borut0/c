#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

void insert_begin( );
void insert_end( );
void insert_after( );
void del( );
void display( );

struct node
{
   int info;
   struct node *link;
}*first=NULL;

void main( )
{
  int ch,x,y;
  clrscr( );
  do
  {
    printf("\n\nEnter 1 for insert at begin\n");
    printf("Enter 2 for insert at end\n");
    printf("Enter 3 for insert after given position\n");
    printf("Enter 4 for delete\n");
    printf("Enter 5 for Display\n");
    printf("Enter 6 for exit\n");
    printf("Enter ur choice = ");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:
	insert_begin( );
	break;
     case 2:
	insert_end( );
	break;
    case 3:
	insert_after( );
	break;
     case 4:
	del( );
	break;
     case 5:
	display( );
	break;
     case 6:
	exit(1);
	  break;
    }
  }while(ch!=6);
 getch( );
}


void insert_begin( )
{
  struct node *new;
  int x;
  new=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter info:");
  scanf("%d",&x);
  new->info=x;
  new->link=first;
  first=new;
  display( );
}


void insert_end( )
{
  struct node *temp,*new;
  int x;
  new=(struct node *)malloc(sizeof(struct node));
  printf("Enter info:");
  scanf("%d",&x);
  new->info=x;
  new->link=NULL;
  if(first==NULL)
  {
    first=new;
  }
  else
  {
  temp=first;
  while(temp->link!=NULL)
  {
  temp=temp->link;
  }
  temp->link=new;
  }
  display( );
}


void insert_after( )
{
  struct node *temp,*new;
  int x,i;
  new=(struct node *)malloc(sizeof(struct node));
  if(first==NULL)
   printf("\nList is empty\n");
  else
  {
  printf("Enter Position:");
  scanf("%d",&i);
  printf("Enter info:");
  scanf("%d",&x);
  new->info=x;
  temp=first;
  while(temp!=i)
  {
  temp=temp->link;
  }
  new->link=temp->link;
  temp->link=new;
  display( );
  }
}

void del( )
{
    struct node *temp,*pred;
    int x;
    if(first==NULL)
	   printf("\nList is empty.\n");
   else
  {
	  printf("Enter the node address=");
	scanf("%d",&x);
	temp=first;
	while(temp->link!=NULL && temp!=x)
	{
	       pred=temp;
	       temp=temp->link;
	 }
	if(temp!=x)
       {
		printf("\nnode not found.\n");
	}
	if(first==x)
	       first=first->link;
	else
	{
	       pred->link=temp->link;
	 }
	 display( );
     }
}



void display( )
{
  int i;
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp=first;
  if(first==NULL)
     printf("\nLink List is empty.\n");
  else
  {
     printf("\nLink List is as follows:\n");
     printf("--------------------\n");
     printf("\nAddress of FIRST = %d\n\n",first);
     while(temp!=NULL)
     {
	printf("|%d|%d|",temp->info,temp->link);
	if(temp->link!=NULL)
	{
	       printf("--->");
	}
	temp=temp->link;
     }
  }
}