#include<stdio.h>
int main(){
	int i,n,s=0;
	printf("Enter you number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+i;
	}
	printf("Sum of numbers from 1 to %d is %d\n",n,s);
} 
