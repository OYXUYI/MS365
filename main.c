#include <stdio.h>
#include "function.h"

void main()
{
	int i, j = 1; // i:循环 j:选择
	for (i = 0; i < 30; i++)
		printf("-");
	printf("\n过程原理及设备 传热计算\n");
	printf("首页  OUYANGXUYI2024\n");
	for (i = 0; i < 30; i++)
		printf("-");
	printf("\n");

	do
	{
		printf("\n请按照以下提示输入序号，然后按下Enter键确认\n");
		printf("0 退出程序\n");
		printf("1 流体无相变传热-管内\n");
		printf("2 流体无相变传热-管外（适用于列管式换热器）\n");
		printf("3 流体无相变传热-大空间自然对流\n");
		printf("4 蒸气冷凝传热-水平管\n");
		printf("5 蒸气冷凝传热-竖直管\n");
		printf(">> ");
		scanf("%d", &j);
		if (j == 0)
			j = 0;
		else if (j == 1)
			j = f1();
		else if (j == 2)
			j = f2();
		else if (j == 3)
			j = f3();
		else if (j == 4)
			j = f4();
		else if (j == 5)
			j = f5();
		else
			printf("输入错误，请重新输入，或按0退出\n");
	} while (j != 0);
	// 循环实现换热类型的选择

	for (i = 0; i < 30; i++)
		printf("-");
	printf("\n程序终止\n");
	for (i = 0; i < 30; i++)
		printf("-");
}
