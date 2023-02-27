#include<stdio.h>
main(){
	
	int a;

	printf("Enter a number : ");
	scanf("%d",&a);

	int *b;
	b=&a;

	printf("The square of %d is : %d",a,(*b)*(*b));
}

