#define _CRT_SECURE_NO_WARNINGS 1 
//n表示盘子的个数
//pos1表示起始位置
//pos2表示中转位置
//pos3表示目标位置
#include <stdio.h>

void move(char pos1, char pos2)
{
	printf(" %c --> %c ", pos1, pos2);
}

void Hanio(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		move(pos1, pos3);
	}
	else
	{
		Hanio(n - 1, pos1,pos3,pos2);
		move(pos1, pos3);
		Hanio(n - 1, pos2, pos1, pos3);
	}

}


int main()
{
	Hanio(1,'A','B','C');
	printf("\n");
	Hanio(2, 'A', 'B', 'C');
	printf("\n");
	Hanio(3, 'A', 'B', 'C');

	return 0; 
}