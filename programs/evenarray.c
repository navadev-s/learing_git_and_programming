#include<stdio.h>
int main(){
	int i,n,a[100],count=0;
	printf("Enter the limit of the array : ");
	scanf("%d",&n);
	printf("Enter the elements in the array :\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){count++;}
	}
	printf("Array : [");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		if(i==n-1){break;}
		else{printf(",");}
	}
	printf("]\n");
	printf("There are %d even numbers in this array.\n",count);
}	
