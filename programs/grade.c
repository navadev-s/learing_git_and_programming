#include<stdio.h>
int main(){
	float m;
	printf("Enter your mark : ");
	scanf("%f",&m);
	if(m>=90){
		printf("Your Grade is A.\n");
	}
	else if(m>=80){
		printf("Your Grade is B.\n");
	}
	else if(m>=70){
		printf("Your Grade is C.\n");
	}
	else if(m>=60){
		printf("Your Grade is D.\n");
	}
	else if(m>=50){
		printf("Your Grade is D.\n");
	}
	else if(m<50){
		printf("Failed.\n");
	}
}
	
	
