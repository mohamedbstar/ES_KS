#include <stdio.h>

void ex1(){
	printf("%s\n","C programming");
}

void ex2(){
	int input;
	printf("%s: ","Enter a number");
	scanf("%d", &input);
	printf("%s%d\n", "You entered ", input);
}

void ex3(){
	int a,b;
	printf("%s: ","Enter first number" );
	scanf("%d", &a);
	printf("%s: ","Enter second number" );
	scanf("%d", &b);
	printf("a+b= %d\n", a+b);
}

void ex4(){
	float a, b;
	printf("Enter first number: ");
	scanf("%f", &a);
	printf("Enter second number: ");
	scanf("%f", &b);

	printf("a*b= %f\n", a*b);
}

void ex5(){
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	printf("ascii value= %d\n", c);
}

void ex6(){
	int a,b,tmp;
	printf("enter first number: ");
	scanf("%d",&a);
	printf("enter second number: ");
	scanf("%d",&b);

	tmp = a;
	a = b;
	b = tmp;
	printf("after swapping values:\n");
	printf("a = %d, b = %d\n",a,b);
}
