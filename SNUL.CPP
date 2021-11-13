#include<stdio.h>
#include<conio.h>
void main(){
	int sum=0,no,i;
	clrscr();
	printf("Enrollment no: 191130116085\n");
	printf("Enter no:");
	scanf("%d",&no);
	for(i=0;i<=no;i++){
		sum+=i;
	}
	printf("sum of1 to %d is %d",no,sum);
	getch();
}