#include<stdio.h>
int main(){
	int i,j,n,m,a[10][10],b[10][10];
	printf("Enter the number of rows and columns of the matrices :\n");
	scanf("%d%d",&n,&m);
	printf("Enter the elements of the first matrix :\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the second matrix :\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Matrices :\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\t");
		for(j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("Sum :\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}

