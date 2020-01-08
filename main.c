#include <stdio.h>

int add(int x,int y);
int sub(int x,int y);
int div(int x,int y);
int multi(int x,int y);

int main()
{

	int a,b,c;
	char operator;

	printf("please enter a expression(ex> 1 + 2)\n \n");

	scanf("%d%c%d",&a,&operator,&b);

	switch(operator)
	{
		case '+':
				c= add(a,b);
				break;
		case '-':
				c= sub(a,b);
				break;
		case '*':
				c= multi(a,b);
				break;
	}
	printf("%d",c);
}
int add(int x,int y)
{
	return x+y;
}

int div(int x,int y)
{
	return x/y;
}

int sub(int x, int y)
{
	return x-y;
}
int multi(int x,int y)
{
	return x*y;
}
