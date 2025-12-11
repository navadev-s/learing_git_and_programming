#include<stdio.h>
int main(){
	int a[100],i,n;
	printf("Enter the array size :");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Entered elements are : ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
