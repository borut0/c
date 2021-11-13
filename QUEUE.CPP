#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int q[max],f=-1,r=-1;
void eq();
void dq();
void disq();
void main()
{
int ch;
clrscr();
while(1)
{
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 {
  eq();
  break;
  }
  case 2:
  {
  dq();
  break;
  }
  case 3:
  {
  disq();
  break;
  }
  case 4:
  {
  exit(0);
  }
  default:
  {
  printf("wah!");
  }
}
}
}
void eq()
{
  int data;
  if(r==max-1)
  {
   printf("overflow");
   }
   else
   {
     if(f==-1)
     {
	f==0;
     }
   printf("Enter the element:");
   scanf("%d",&data);
   r++;
   q[r]=data;
   }
   }
   void dq()
   {
   if(r==-1)
   {
   printf("underflow");
   }
   else
   {
   printf("deleted elements are:%d",q[f]);
   f++;
   }
   void disq()
   {
   int i;
   if(f==-1)
   {
   printf("underflow");
   }
   else
   {
   for(i=f;i<=r;i++)
   {
   printf("elements:%d",q[i]);
   }
   }
   }


