#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//冒泡排序 
void bubbleSort()
{
	int arr[8] = { 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("请输入%d个整数据\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]); 
	}

	//冒泡排序
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

	}

	//遍历
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}


void arrDemo()
{
	int arr[5] = { 10,20,30,40,50 };
	printf("sizeof(arr) = %d\n", sizeof(arr));

	printf("&arr[0] = %u\n", &arr[0]);
	printf("&arr[1] = %u\n", &arr[1]);
	printf("arr = %u\n", arr);
	printf("arr + 1 = %u\n", arr + 1);

	printf("&arr = %u\n", &arr);
	printf("&arr+1 = %u\n", &arr + 1);
}

//二维数组
void twoArr()
{
	int arr[3][4];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
}

void twoArrInit()
{
	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };//分段初始化

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("------------------------------------\n");
	//连续初始化 ，自动切割 
	int arr1[4][5] = { 10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}

void twoArrDemo()
{
	//二维数组 可以省略行数，但是不能省略列数
	int arr[][4] = { 1,2,3,4,5,6,7,9,8 };

	printf("sizeof(arr) = %d\n", sizeof(arr));

	printf("------------------------------\n");

	int arr1[2][3] = { {2,23},{12} };//分段部分初始化，
	int arr2[3][4] = { 1,2,3 };//连续部分初始化
	
	printf("arr1[1][2] + arr2[2][3] = %d\n", arr1[1][2] + arr2[2][3]);

}


//二维数组元素操作
void twoArrOperate()
{
	int arr[3][4] = { 0 };//定义二维数组并初始化
	//二维数组的长度，3*4
	printf("请输入%d个整型数据\n", 3 * 4);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		
	}

	printf("--------------------------\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}

}


//二维数组名.
void twoArrName()
{
	int arr[3][4];
	printf("sizeof(arr) = %d\n", sizeof(arr));
	printf("sizeof(arr[0]) = %d\n", sizeof(arr[0]));
	printf("sizeof(arr[0][0] = %d\n", sizeof(arr[0][0]));
	printf("行数：row = sizeof(arr)/sizeof(arr[0]) = %d\n", sizeof(arr) / sizeof(arr[0]));
	printf("列数：col = sizeof(arr[0])/sizeof(arr[0][0]) = %d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("二维数组长度: row * col == n == sizeof(arr)/sizeof(arr[0][0]) = %d\n", sizeof(arr) / sizeof(arr[0][0]));
}

//二维数组demo
void twoArrDemo2()
{
	int arr[4][5] = { 0 };
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);

	printf("请输入%d个整型数据：\n", row*col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	printf("--------------------------\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//用二维数组求一组数的平均值 
void getAvgNum()
{
	int arr[3][3] = { 0 };
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	int sum = 0, avg = 0;
	
	printf("请输入%d个整型数据，要求大于0小于等于100\n", row*col);

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			scanf("%d", &arr[i][j]);
		}

	}
	//假设第一个元素为最大值和最小值 
	int max = arr[0][0], min = arr[0][1];

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			sum += arr[i][j];
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}

			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}

	printf("这一组数的总和为：%d,平均值为: %d\n",sum, sum /( row * col));
	printf("最大值为：%d\n", max);
	printf("最小值为：%d\n", min);
}


//字符数组
void charArr()
{
	//逐个元素初始化
	char arr[5] = { 'h','e','l','l','o' };
	int n = sizeof(arr) / sizeof(arr[0]);
	//遍历
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %c\n",i, arr[i]);
	}
	//可以使用%s整体输出字符数组，空间起始地址，遇到'\0'结束输出
	printf("char arr = %s\n", arr);
}


//以字符串的方式进行初始化
void charArrInitByString()
{
	char arr[12] = "hello world";
	printf("arr = %s\n", arr);
	int n = sizeof(arr) / sizeof(arr[0]);

	for (size_t i = 0; i < n; i++)
	{
		printf("arr[%d] = %c\n", i, arr[i]);
	}

}

int main(int argc, char *argv[])
{
	//bubbleSort();
	//arrDemo();

	//twoArr();
	//twoArrInit();
	//twoArrDemo();
	//twoArrOperate();
	//twoArrName();
	//twoArrDemo2();
	//getAvgNum();
	//charArr();
	charArrInitByString();
	system("pause");
	return 0;
}