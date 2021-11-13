#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[100],no,temp,i,j;
	printf("Enrollment no.: 191130116085 \n");
	printf("Enter how many numbers you want to enter:");
	scanf("%d",&no);
	printf("Enter %d numbers:\n",no);
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<no;i++)
	{
		for(j=0;j<no-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("sorted elements are:\n");
	for(i=0;i<no;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}