#include<stdio.h>
#include<conio.h>
int bino(int n,int k){
 if(k==n || k==0){
  return 1;
 }
 return bino(n-1,k-1) + bino(n-1,k);
}
void main(){
 int n,k;
 clrscr();
 printf("Enter the n:");
 scanf("%d",&n);
 printf("Enter the k:");
 scanf("%d",&k);
 printf("c(%d,%d) is %d",n,k,bino(n,k));
 getch();
}