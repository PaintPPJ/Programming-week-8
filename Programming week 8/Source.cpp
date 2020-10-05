#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int k, j;
	char x[10][5][5] =
	{
		{
			"xxxx",
			"x  x",
			"x  x",
			"x  x",
			"xxxx"
		},
		{
			"   x",
			"   x",
			"   x",
			"   x",
			"   x"
		},
		{
			"xxxx",
			"   x",
			"xxxx",
			"x   ",
			"xxxx"
		},
		{
			"xxxx",
			"   x",
			"xxxx",
			"   x",
			"xxxx"
		},
		{
			"x  x",
			"x  x",
			"xxxx",
			"   x",
			"   x"
		},
		{
			"xxxx",
			"x   ",
			"xxxx",
			"   x",
			"xxxx"
		},
		{
			"xxxx",
			"x   ",
			"xxxx",
			"x  x",
			"xxxx"
		},
		{
			"xxxx",
			"   x",
			"   x",
			"   x",
			"   x"
		},
		{
			"xxxx",
			"x  x",
			"xxxx",
			"x  x",
			"xxxx"
		},
		{
			"xxxx",
			"x  x",
			"xxxx",
			"   x",
			"xxxx"
		},
	};
	int num, temp[100], i=0, count=0;
	scanf("%d", &num);
	if (num < 1000000000&&num>0) {
		while (num > 0)
		{
			temp[i] = num % 10;
			num = num / 10;
			i++;
		}
		count = i;
		for (k = 0; k < 5; k++)
		{
			for (i = count - 1; i >= 0; i--)
			{
				printf("%s\t", x[temp[i]][k]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Error");
	}
	return 0;
}