#include<stdio.h>
void main(){
	int n,i=1,s,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	while(i<=n){
		s=i*i;
		sum=sum+s;
		i++;
	}
	printf("Sum = %d\n",sum);
}
