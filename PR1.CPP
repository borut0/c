#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main( )
{
int a[10],i,top=0,x,ch,y;
clrscr( );
do
{
printf("Enter 1 for push\n");
printf("Enter 2 for pop\n");
printf("Enter 3 for peep\n");
printf("Enter 4 for change\n");
printf("Enter 5 for exit\n");
printf("Enter ur choice = ");
scanf("%d",&ch);
switch(ch)
{
case 1:
	printf("Enter element for insert\n");
	scanf("%d",&x);
	if(top>=10)
	     printf("Stack overflow");
	else
	{
	top++;
	a[top]=x;
	for(i=top;i>=1;i--)
	{
	printf("	%d\n",a[i]);
	}
	}
	break;
case 2:
	if(top==0)
	     printf("stack underflow");
	else
	{
	top--;
	printf("Pop element=%d\n",a[top+1]);
	}
	for(i=top;i>=1;i--)
	     printf("	%d\n",a[i]);
	break;
case 3:
	printf("\nEnter Element for peep=");
	scanf("%d",&x);
	if((top-x+1)<=0)
	      printf("Stack Underflow");
	else
	      printf("%d\n",a[top-x+1]);
	break;
case 4:
	printf("\nEnter position for change=");
	scanf("%d",&x);
	if((top-x+1)<=0)
	      printf("Stack Underflow");
	else
	{
	printf("\nEnter the element to change=");
	scanf("%d",&y);
	a[top-x+1]=y;
	}
	for(i=top;i>=1;i--)
	     printf("	%d\n",a[i]);
	break;
case 5:
	exit(1);
	break;
}
}while(ch!=5);

getch( );
}      