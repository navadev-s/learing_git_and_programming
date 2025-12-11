#include<stdio.h>
int main(){
	int a[100],i,s,n,flag=0;
	printf("Enter your array size : ");
	scanf("%d",&n);
	printf("Enter the elements : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the number to be searched : ");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(s==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("Item found at postion %d.\n",i+1);
	}
	else{
		printf("Item not found!\n");
	}
	printf("Array = [");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		if(i==n-1){
			break;
		}
		else{
			printf(",");
		}
	}
	printf("]\n");
}
