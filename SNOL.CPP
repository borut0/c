#include<stdio.h>
#include<conio.h>
void main(){
	int sum=0,no;
	clrscr();
	printf("Enrollment no.: 191130116085\n");
	printf("Enter no.:");
	scanf("%d",&no);
	sum = no*(no+1)/2;
	printf("sum of 1 to %d is %d",no,sum);
	getch();
}