#include<stdio.h>
int main(){
	int i,n,temp,a[100],b[100];
	printf("Enter the limit of the arrays : ");
	scanf("%d",&n);
	printf("Enter the elements in Array 1 :\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("Enter the elements in Array 2 :\n");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	printf("Original Arrays\n");
	printf("Array 1 : [");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		if(i==n-1){break;}
		else{printf(",");}
	}
	printf("]\n");
	printf("Array 2 : [");
	for(i=0;i<n;i++){
		printf("%d",b[i]);
		if(i==n-1){break;}
		else{printf(",");}
	}
	printf("]\n\n");
	for(i=0;i<n;i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	printf("After interchanging the values in the array...\n");
	printf("Array 1 : [");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		if(i==n-1){break;}
		else{printf(",");}
	}
	printf("]\n");
	printf("Array 2 : [");
	for(i=0;i<n;i++){
		printf("%d",b[i]);
		if(i==n-1){break;}
		else{printf(",");}
	}
	printf("]\n");
}	
