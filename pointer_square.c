#include<stdio.h>
main(){
	
	int a;

	printf("Enter a number : ");
	scanf("%d",&a);

	int *b;
	b=&a;
	*b = a*a;
	printf("The square of the number is : %d",*b);
}

