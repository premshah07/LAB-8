#include<stdio.h>
void main(){
	int n,i=1;
	printf("enter the number n:");
	scanf("%d",&n);
	while(i<=n){
		printf("odd numbers:%d\n",i);
		i=i+2;
	}
}
