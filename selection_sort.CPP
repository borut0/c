#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],temp,j,i,no;
	clrscr();
	printf("Enrollment no:\n");
	printf("Enter how many elements you want to enter:\n");
	scanf("%d",&no);
	printf("Enter %d numbers\n",no);
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<no;i++)
	{
		for(j=i+1;j<no;j++)
		{
			if(a[i]>a[j])
			{
			      temp=a[i];
			      a[i] = a[j];
			      a[j] = temp;
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