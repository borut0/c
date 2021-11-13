#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>


void main()
{
 int a[100],n,temp,key,low,high,mid;
 clrscr();
 printf("Enter the total no. of elements:");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
	printf("Enter the %d element:",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	 for(int j=0;j<n-1-i;j++)
	 {
	if(a[j]>a[j+1])
	{
	  temp=a[j];
	  a[j]=a[j+1];
	  a[j+1]=temp;
	  }
	    }
	    }
	    for(i=0;i<n;i++)
	    {
	    printf("After sorting:%d\n",a[i]);
	     }
	   
     low=0,high=n-1;
     printf("Enter the the no. you want to find:");
     scanf("%d",&key);
     while(low<=high)
     {
     mid=(low+high)/2;
     if(key<a[mid])
     {
     high=mid-1;
     }
     else if(key>a[mid])
     {
     low=mid+1;
     }
     else if(key==a[mid])
     {
	 printf("key %d is in %d position",key,mid);
	 break;
     }
     while(low>high)
     {
     printf("not found");
     break;
     }
     }
     getch();
     }