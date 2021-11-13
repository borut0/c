#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *prev,*next;
};
struct node *start=NULL;
void insert()
{
   struct node *n;
   n=(struct node *)malloc(sizeof(struct node));
   printf("Enter the element:");
   scanf("%d",&n->data);
   n->prev=NULL;
   n->next=NULL;
   if(start==NULL)
   {
   start=n;
   }
   else
   {
    start->prev=n;
    n->next=start;
    start=n;
   }
}
void del()
{
  struct node *t;
  if(start==NULL)
  {
  printf("empty");
  }
  else
  {
  t=start;
  start=start->next;
  start->prev=NULL;
  free(t);
  }
}
void dis()
{
   struct node *d;
  if(start==NULL)
  {
  printf("empty");
  }
  else
  {
    d=start;
    do
    {
     printf("elements are %d\n",d->data);
     d=d->next;
     }while(d->next!=NULL);
  }
}
void main()
{
 int ch,psd;
 while(1)
 {
 clrscr();
 printf("Enter your choise:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 {
	insert();
	break;
	}
 case 2:
 {
	del();
	break;
	}
 case 3:
 {
	dis();
	break;
	}
 case 4:
 {
      printf("Enter the password:");
      scanf("%d",&psd);
      if(psd==12345)
      {
	exit(1);
	}
	else
	{
	printf("incorrect password");
	break;
	}
	}
 default:
 {
	printf("wrong choise");

	}
 }
 getch();
 }
 }