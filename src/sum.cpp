/*
OVERVIEW: Write a function which takes two numbers as input and returns sum of two numbers.
		E.g.: sum(2, 3) returns 5.

INPUTS: Two numbers a, b;

OUTPUT: sum of the numbers a, b.

ERROR CASES:

NOTES:
*/#include<stdio.h>
#include<conio.h>

int sum(int a, int b)
{
	int ans;
	ans = a + b;
	printf("sum is %d",ans);
	return ans;
}
int main()
{
	int a, b,ans;
	printf("enter two numbers\n");
	scanf("%d%d", &a, &b);
	ans = sum(a, b);
	printf("sum is %d", ans);
	return 0;
}