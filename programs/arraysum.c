#include<stdio.h>
int main(){
	int a[100],n,i,s=0;
	printf("Enter the array size: ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("Entered elements are : ");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		if(i==n-1){
			break;
		}
		else{
			printf(",");
		}		
	}
	printf("\n");
	printf("Sum = %d\n",s);
}
