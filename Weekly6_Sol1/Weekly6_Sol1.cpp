#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int sum = 1;						//Problem 45, Solution 1, ID Student 65010902

int factorial(int num)
{
	
	for (int i = num; i > 0; i--)
	{
		sum = sum * i;
	}
	return sum;
}

int main()
{
	int num;
	scanf("%d", &num);

	if(num >= 0)
		printf("%d", factorial(num));
	return 0;
}