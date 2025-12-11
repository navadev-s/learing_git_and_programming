#include<stdio.h>
int sum();
int sum(){
	int a,b;
	printf("Enter 2 numbers :\n");
	scanf("%d%d",&a,&b);
	printf("Sum = %d\n",a+b);
	return a+b;
}
int main(){
	int s;
	s=sum();
	return 0;
}	


