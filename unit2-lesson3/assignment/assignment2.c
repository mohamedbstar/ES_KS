#include <stdio.h>

//odd or even
void odd_or_even(int a){
	if (a % 2 == 0)
	{
		printf("Even\n");
	}else{
		printf("Odd\n");
	}
}

//print consonant or vowel
void consonent_or_vowel(){
	char c;
	printf("Enter a character\n");
	scanf("%c", &c);
	switch(c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Vowel\n");
			break;
		default:
			printf("Consonent\n");
			break;
	}
}

void max_among_three(){
	float a, b, c;
	printf("Enter Three numbers: \n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	if (a > b)
	{
		if (a > c)
		{
			printf("%f is biggest\n", a);
		}else{
			printf("%f is biggest\n", c);
		}
	}else{
		if (b > c)
		{
			printf("%f is biggest\n",b);
		}else{
			printf("%f is biggest\n", c);
		}
	}
}

void positive_or_negative(){
	float a;
	printf("%s\n","Enter a number");
	scanf("%f", &a);
	if (a > 0)
	{
		printf("%s\n","Positive");
	}else if (a < 0 )
	{
		printf("%s\n","Negative");
	}else{
		printf("%s\n","You Entered 0");
	}
}

void is_alphabet(){
	char c;
	printf("%s\n","Enter a character");
	scanf("%c", &c);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		printf("%s\n","Alphabetic" );
	}else{
		printf("%s\n","Non Alphabetic" );
	}
}

void sum_to_n(){
	int i;
	printf("%s\n","Enter a number");
	scanf("%d", &i);
	int sum = 0;
	for (int i = 1; i <= i; ++i)
	{
		sum += i;
	}

	printf("sum = %d\n",sum);
}

void factorial(){
	int i;
	printf("%s\n","Enter a number");
	scanf("%d", &i);
	int fact = 0;
	for (int i = 1; i <= i; ++i)
	{
		fact *= i;
	}

	printf("factorial of %d = %d\n",i,fact );
}

void calculator(){
	int a,b;
	char op;
	printf("%s\n","Enter first number");
	scanf("%d", &a);
	printf("%s\n","Enter operation");
	scanf("%c", &op);
	printf("%s\n","Enter second number");
	scanf("%d", &b);

	switch(op){
		case '*':
			printf("%d * %d = %d\n",a,b,a*b);
			break;
		case '/':
			if (b == 0)
			{
				printf("%s\n","can't divide by 0");
				return;
			}
			printf("%d / %d = %d\n",a,b,a/b);
			break;
		case '+':
			printf("%d + %d = %d\n",a,b,a+b);
			break;
		case '-':
			printf("%d - %d = %d\n",a,b,a-b);
			break;
	}
}
