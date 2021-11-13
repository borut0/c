#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};

struct node *addtoempty(struct node *last,int value)
{
 struct node *n;
 n=malloc(sizeof(struct node));
 n->data=value;
 last=n;
 last->next=last;
 return(last);
}
void display(struct node *last)
{
struct node *t;
if(last==NULL)
{
printf("list is empty");
}
else
{
t=last->next;
do
{
printf("%d",t->data);
t=t->next;
}while(t!=last->next);
}
}
struct addatbeg(struct node *last,int value)
{
struct node *n;
n=malloc(sizeof(struct node));
n->next=last->next;
last->next=n;
return(last);
}
struct node* addatend(struct node *last,int value)
{
struct node *n;
n=malloc(sizeof(struct node));
n->data=value;
n->next=last->next;
last->next=n;
last=n;
return(last);
}
struct node *addafter(struct node *last,int value,int item)
{
 struct node *t,*n;
 t=last->next;
 do
 {
  if(t->data==item)
  {
   n=malloc(sizeof(struct node));
   n->data=value;
   n->next=t->next;
   t->next=n;
   if(t==last)
   {
   last=n;
   return(last);
   }
   t=t->next;
   }while(t!=last->next);
   printf("%d is not the item",iem);
   return(last);
   }
struct node *del(struct node *last,int value)
{
 struct node *t,*p;
 if(last==NULL)
 {
  printf("empty");
  return(last);
  }
  else if(last==last->next && last->data==value)
  {
     t=last;
     last=NULL;
     free(t);
     return(last);
 }
  else if(last->next->data==value)
  {
  t=last->next;
  last->next=t->next;
  free(t);
  return(last);
  }
  else
  {
  p=last->next;
  while(p->next!=last)
  {
  if(p->next->data==value)
  {
  t=p->next;
  p->next=t->next;
  free(t);
  return(last);
  }
  p=p->next;
  }
  if(last->data==valuue)
  {
  t=last;
  p->next=last->next;
  last=p;
  free(t);
  return(t);
  }
  }
  }
  struct node * createlilst(struct node *last)
  {
   int n;
   printf("How many value you want to enter");
   scanf("%d",&n);
   printf("Enter first data for the list");
   scanf("%d",&value);
   last=addtoempty(last,value);
   for(i=2,i<=n;i++)
   {
   printf("Enter the data for remaining");
   scanf("%d",&value);
   last=addatend(last,value);
   }
   return(last);
   }
  void main()
  {
  int ch;
  struct node *last=NULL;
  while(1)
  {
  printf("Enter the choise");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
  {
     last=createlist(last);
     break;
     }
  case 2:
  {
      display(last);
      break;
      }
  case 3:
  {
       printf("Enter a no. for the list");
       scanf("%d",&value);
       last=addtoempty(last,value);
       break;
       }
  case 4:
  {
	printf("Enter a no. for list");
	scanf("%d",&value);
	last=addatbeg(last,value);
	break;
	}
  case 5:
  {
	printf("Enter a no. for the list");
	scanf("%d",&value);
	last=addatend(last,value);
	break;
	}
  case 6:
  {
	printf("Enter value for the list");
	scanf("%d",&value);
	printf("Enter item for insert after");
	scanf("%d"&item);
	last=addafter(last,value,item);
	break;
	{
  case 7:
  {
	printf("deledeting");
	scanf("%d",&value);
	last=del(last,value);
	break;
	}
  case 8:
  {
	exit(1);
	}
  default:
  {
	printf("wrong choise");
	}
  }
  getch();
  }
  }

