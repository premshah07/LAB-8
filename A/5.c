#include<stdio.h>
void main(){
	int n,i=1,e=0,o=0;
	printf("enter the number n:");
		while(i<=10){
				scanf("%d",&n);
		if(i%2==0){
			 e=e+1;
		}
		else{
		     o=o+1;
		}
		i++;
		
	}
	printf("%d=even count\n",e);
	printf("%d=odd count",o);
}
	
