#include<stdio.h>
#include<conio.h>
#define max 100
void main()
{
    int n,flag[max]={0},v[max],w[max],m[max][max],w,i,j,k;
    clrscr();
    printf("Enrollment no: 191130116085");
    printf("%d",&n);
    printf("Enter the values:");
    for(i=1;i<=n;i++){
        scanf("%d",&v[i]);
    }
    printf("Ener the weights:")
    for(i=1;i<=n;i++){
        scanf("%d",w[i]);
    }
    printf("Enter the vapacity of knapsack:");
    scanf("%d",&w);
    for(j=0;j<=w;j++){
        m[0][j]=0;
    }
    for(i=0;i<=n;i++){
        for(j=1;)
    }

}