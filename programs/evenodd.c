#include<stdio.h>
int main(){
	int i,l;
	printf("Enter your limit: ");
	scanf("%d",&l);
	printf("Odd numbers : ");
	for(i=1;i<l;i++){
		if(i%2==1){
			printf("%d ",i);
		}
	}
	printf("\n");	
	printf("Even numbers : ");
	for(i=2;i<l;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	printf("\n");
}

