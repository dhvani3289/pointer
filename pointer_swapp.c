#include<stdio.h>
main(){
	
	int a,b;

	printf("Enter first number : ");
	scanf("%d",&a);
	
	printf("Enter second number : ");
	scanf("%d",&b);

	int *c,*d;                     
   	a=a-b;                                
   	b=a+b;
   	a=b-a;
	                                             
	c=&a;  
	d=&b;
	printf("\nThe swapped numbers are : \n");
	printf("The value of first no. is :%d \n",*c);
	printf("The value of second no. is :%d ",*d);
}

