#include<stdio.h>
int main(){
	int c;
	printf("1 for Sunday\n2 for Monday\n3 for Tuesday\n4 for Wednesday\n5 for Thursday\n6 for Friday\n7 for Saturday\nEnter your Choice: ");
	scanf("%d",&c);
	switch(c){
	case 1:
		printf("Sunday\n");
		break;
	case 2:
		printf("Monday\n");
		break;
	case 3:
		printf("Tuesday\n");
		break;
	case 4:
		printf("Wednesday\n");
		break;
	case 5:
		printf("Thursday\n");
		break;
	case 6:
		printf("Friday\n");
		break;
	case 7:
		printf("Saturday\n");
		break;
	default:
		printf("Invalid Entry!\n");
		break;
	}
}
