#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n,c,r_w,r_v,flag[10];
	float w[10],v[10],d[10],tempw,tempv,sum_w=0.0,sum_v=0.0,used[10];
	clrscr();
	printf("Enrollment no.: 191130116085\n");
	printf("Fractional KNAPSACK problem\n");
	printf("Enter the no. of objects:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the weight of object %d:",i+1);
		scanf("%f",&w[i]);
		printf("Enter the value of bojects %d:",i+1);
		scanf("%d",v[i]);
		flag[i]=1;
		used[i]=0.0;
		d[i]=v[i]/w[i];
	}
	printf("\nEnter the capacity of a bag:");
	scanf("%d",&c);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(d[i]<d[j]){
				tempw = w[i];
				w[i] = w[j];
				w[j] = tempw;

				tempv = v[i];
				v[i] = v[j];
				v[j] = tempv;
			}
		}
	}
	r_w = c;
	while(r_w!=0){
		for(i=0;i<n;i++){
			if(sum_w<c){
				if(r_w>=w[i]){
					sum_w = sum_w + w[i];
					sum_v= sum_v+v[i];
					r_w=r_w-w[i];
					flag[i]=0;
					used[i]=1.0;
				}
			}

		else{
			break;
			}
		}
	}
	for(i=0;i<n;i++){
		if(flag[i]==1){
			sum_w = sum_w+(r_w*w[i]/w[i]);
			sum_v = sum_v+(r_w*v[i]/w[i]);
			used[i] = r_w/w[i];
			r_w = r_w - (r_w*w[i]/w[i]);
		}
	}
	printf("\nMaximum value with weight %f is %f",sum_w,sum_v);
	printf("\n\n The Objects used:");
	for(i=0;i<n;i++){
		if(used[i]!=0){
			if(used[i]==1){
				printf("\n\nWhole object of weight %f has been used.",w[i]);
				}
		else{
			printf("\n\n%f of object of weight %f has been used.",used[i],w[i]);
		}
		}
	}
	getch();
}