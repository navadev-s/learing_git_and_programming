#include<stdio.h>
int sum(int,int);
int main(){
	int x,y,s;
	printf("Enter 2 numbers :\n");
	scanf("%d%d",&x,&y);
	s=sum(x,y);
	return 0;
}
int sum(int a,int b){
	int c;
	c=a+b;
	printf("Sum = %d\n",c);
	return c;
}
