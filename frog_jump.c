#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

int frog(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return frog(n - 1) + frog(n - 2);
	}
}

int main()
{
	int x = 0;

	scanf("%d", &x);

	int ret = frog(x);

	printf("�����ܹ���%d������", ret);

	return 0;
}