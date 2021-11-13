#include<stdio.h>
#include<conio.h>
int binsear(int a[10],int l,int key, int h){
      int m;
      m = (l+h)/2;
      if(key == a[m]){
	return m;
      }
      else if(key > a[m]){
	binsear(a,m+1,key,h);
      }
      else{
	binsear(a,l,key,m-1);
      }
}
void main(){
	int a[10],i,l=0,ans,key,no;
	printf("How many no you ganna be enter:");
	scanf("%d",&no);
	printf("Enter element in acending order:\n");
	for(i=0;i<no;i++){
		scanf("%d",&a[i]);
	}
	printf("Which element you wanna search?");
	scanf("%d",&key);
	ans = binsear(a,l,key,no-1);
	printf("we found in a[%d]",ans);
	getch();
}