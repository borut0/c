#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[10],int n);
void main(){
  clrscr();
  int a[10],n,i;
  printf("How many no you ganna enter:");
  scanf("%d",&n);
  printf("Enter elements:\n");
  for(i=0;i<n;i++){
   scanf("%d",&a[i]);
  }
  insertion_sort(a,n);
  getch();
}
void insertion_sort(int a[10],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
	temp = a[i];
	j=i-1;
	while(j>=0 && a[j]>temp){
		a[j+1] = a[j];
		j--;
	}
	a[j+1] = temp;
    }
    for(i=0;i<n;i++){
	printf("%d\n",a[i]);
    }
}