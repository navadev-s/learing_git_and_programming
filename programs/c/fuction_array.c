#include<stdio.h>
int getArray(int);
int displayArray(int);
int main(){
	int l;
	printf("Enter the limit : ");
	scanf("%d",&l);
	getArray(l);
	displayArray(l);
}
int getArray(int n){
	int a[100],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
} 
int displayArray(int n){
	int i,a[100];
	printf("Array : [");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		if(i==n-1){break;}
		else{printf(",");}
	}
	printf("]\n");
}


