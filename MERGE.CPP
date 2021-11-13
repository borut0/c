#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void merge(int a[],int l,int h);
void sort(int a[],int l,int mid, int h);

void main(){
	int a[100],no,j;
	clrscr();
	printf("How many numbers you wanna sort: ");
	scanf("%d",&no);
	printf("Enter Elements:");
	for(j=0;j<no;j++){
		scanf("%d",&a[j]);
	}
	merge(a,0,no-1);
	getch();
}
void merge(int a[],int l,int h){
	if(l < h) {
	       int mid = (l+h)/2;
		merge(a,l,mid);
		merge(a,mid+1,h);
		sort(a,l,mid,h);
	}

}
 void sort(int a[],int l,int mid , int h){
	int i = l;
	int j = mid+1;
	int k = l,s[100];

	while(i <= mid && j<= h){
		if(a[i] <= a[j]){
			s[k] = a[i];
			i++;
		}
		else{
			s[k] = a[j];
			j++;
		}
		k++;

	}
	if(i > mid ){
		while(j <= h){
			s[k] = a[j];
			j++;
			k++;
		}
	}
	else {
		while(i <= mid){
			s[k] = a[i];
			i++;
			k++;
		}
	}
	for(k = l;k< h;k++){
	 printf("%d\n",s[k]);
	}
 }

