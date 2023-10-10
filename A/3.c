#include<stdio.h>
void main(){
	int n,m;
	printf("enter the number n:");
	scanf("%d",&n);
	printf("enter the number m:");
	scanf("%d",&m);
	n++;
	while(n<m){
		if(n%2==0){
			printf("%d is divisible by 2\n",n);
			}
	      n++;  
     }
 }
