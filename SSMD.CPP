#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void sum();
void sub();
void multi();
void div();
void main()
{
 int ch;
 printf("1. sum");
 printf("2. sub");
 printf("3. multi");
 printf("4. div");
 printf("5. exit");
 while(1)
 {
 printf("select:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 sum();
 break;
 case 2:
 sub();
 break;
 case 3:
 multi();
 case 4:
 div();
 break;
 case 5:
 exit(0);
 default:
 printf("Enter correct option");
 }
 }
 }
 void sum()
 {
  int s=0,no,a[30];
  char na;
  while(1)
  printf("Enter the no. for sum:");
  scanf("%d",&no);




