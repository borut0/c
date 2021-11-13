#include<stdio.h>
#include<conio.h>
int min(int x, int y){
	return (x>y)?x:y;
}
void main(){
 clrscr();
 int no_coin,c[10],pay,i,j,table[15][15];
 printf("Enter How many coins you have:");
 scanf("%d",&no_coin);
 printf("Enter the value of coins :");
 for (i=0;i<no_coin;i++){
	scanf("%d",&c[i]);
 }
 printf("How much you have to pay:");
 scanf("%d",&pay);
 for(i=0;i<no_coin;i++){
    table[i][0] = 0;
 }
 for(j=1;j<=pay;j++){
	for(i=1;i<no_coin;i++){
	     if(i==1 && j<c[i]){
	      table[i][j] = '\0';
	     }
	     else if(i==1){
		table[i][j] = 1 + table[i][j-c[i]];
	     }
	     else if(j < c[i]){
		table[i][j] = table[i-1][j];
	     }
	     else{
		table[i][j] = min(table[i-1][j] , 1 + table[i][j-c[i]]);
	     }
	}
 }
 printf("Ans is %d ",table[no_coin-1][pay]);
 getch();
}