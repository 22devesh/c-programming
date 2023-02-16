//take input from user and print month

#include<stdio.h>
int main(){
int a;
printf("Enter the number of months: ");
scanf("%d",&a);
switch(a){
	case 1:
		printf("\n Janurary");
		break;
	case 2:
		printf("\n Feburary");
		break;
	case 3:
		printf("\n March");
		break;
	case 4:
		printf("\n April");
		break;
	case 5:
		printf("\n May");
		break;
	case 6:
		printf("\n June");
		break;	
	case 7:
		printf("\n July");
		break;
	case 8:
		printf("\n August");
		break;
	case 9:
		printf("\n September");
		break;
	case 10:
		printf("\n October");
		break;
	case 11:
		printf("\n November");
		break;
	case 12:
		printf("\n December");
		break;
}	
}

