#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 6
int cq[size],f=-1,r=-1;
void insert()
{
 int data;
 if(f==0 && r==size-1 || f==r+1)
 {
  printf("overflow");
 }
 else if(f==-1)
 {
 f=0;
 r=0;
 }
 printf("Enter the no.");
 scanf("%d",&data);
 cq[r]=data;
 r++;
 else if(r==size-1)
 {
 r=0;
 r++;
 }
 void del()
{
  if(f==-1)
  {
  printf("Underflow");
  }
  printf("deleted elements are %d",cq[f]);
  else if(f==r)
  {
  f=r=-1;
 }
 else if(f=size-1)
 {
 f=0
 }
 else
 {
 f++;
 }
void dis()
{
if(f==-1)
{
printf("Underflow");
}
else
{
  if(f<=r)
  {
   while(f<=r)
    {
      printf("elements are %d",cq[f]);
      f++;
    }
   else
    {
     while(f=size-1)
      {
       printf("elements are %d",cq[f]);
       f++;
      }
}
void main()
{
 int ch;
 clrscr();
 while(1)
 {
 printf("Enter your choise:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 {
 insert();
 }
 case 2:
 {
 del();
 }
 case 3:
 {
 dis();
 }
 case 4:
 {
 exit(1);
 }
 default:
 {
 printf("wrong");
 }
 }
 }
 getch();
 }