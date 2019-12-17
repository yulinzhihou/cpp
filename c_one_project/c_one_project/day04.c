#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS

//三目运算符
void threeUnit()
{
	//三目运算符 表达式 ？ 值1 ： 值2 
	//表达式为真，结果为值1，否则为值2
	printf("%d\n", 3 > 4 ? 3 : 4);

	3 > 4 ? printf("表达式１\n") : printf("表达式2\n");
	3 > 4 ? printf("表达式1\n") : 4 > 5 ? printf("表达式2\n") : printf("表达式3\n");

}

//算术运算符
void arithmeticOperator()
{
	int num = 8;
	num += num -= num *= num /= 2;
	printf("num = %d\n", num);
}


//逗号运算符
void commaOperator()
{
	int num = 0;//变量定义并初始化
	num = 1, 3, 4, 5, 6;//变量赋值
	printf("num = %d\n", num);// num = 1

	//运算符优化级，结合小括号
	int num1 = 0;
	num1 = (2, 3, 4, 5, 6);
	printf("num1 = %d\n", num1);// num1 = 6
}

//类型自动转换，保证精度不会丢失
void typeAutoTransform()
{
	//signed int ===> unsigned int

	int num1 = -10;
	unsigned int num2 = 5;
	num1 + num2 > 0 ? printf("大于0\n") : printf("小于0\n");
	printf("num = %d\n", num1 + num2);
}

//类型强制转换
void forceTransformType()
{
	int num1 = 9;
	printf("num1/2 = %u\n", num1 / 2);//强制转换成无符号整数，精度丢失。
}


//类型空间大小，运算中容易溢出
//char short 只要参与运算，编译器会先转换成int类型
void typeOverflow()
{
	char ch1 = 10;
	short sh1 = 20;
	printf("%u\n", sizeof(ch1 + ch1));
	printf("%u\n", sizeof(sh1 + sh1));
	printf("%u\n", sizeof(ch1 + sh1));
	printf("%u\n", sizeof(ch1 + sh1));

}


//自动类型转换。
void floatToIntOrDouble()
{
	float fl = 3.14f;
	int num = 0;
	printf("num = %d\n", num);
	printf("f = %f\n", fl);
	printf("#############################\n");
	//printf("fl--> int %d\n", fl);//小数自动转换成整型，精度丢失
	printf("fl --> double %lf\n", fl);
}

//强制类型转换
void forceTypeToInt()
{
	float fl = 3.14f;
	int num1 = 0;
	//强制类型转换只是临时改变原变量的值 
	num1 = (int)fl;
	printf("num1 = %d\n", num1);
	printf("fl = %f\n", fl);
}

//顺序流程结构 ，if ,if……else ,if …… else if ……
void ifStructure()
{
	int num = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
	if (num % 3 == 0)
	{
		printf("%d能被3整除\n", num);
	}
	else
	{
		printf("%d不能被3整除\n", num);
	}

	printf("--------------------------------------------\n");
	if (num % 2 == 0)
	{
		printf("%d对2的余数为%d\n", num,num%2);
	}
	else
	{
		printf("%d对2的余数为%d\n", num,num%2);
	}
}


void ifStructure1()
{
	if (3 > 4);//if后面括号不能有分号
	{
		printf("3大于4\n");
	}

	if (4 > 3)
		printf("4大于3\n");
	printf("4小于3\n");//如果if没有{}，只能识别最近的一条语句

	int num1 = 5;

	if (num1 = 6)//不能将= 号写成 ==了，不然条件恒成立
	{
		printf("条件恒成立\n");
	}

}

//switch分支结构
void switchStructure()
{
	int num = 0;
	printf("请输入一个int型数据:\n");
	scanf("%d", &num);
	int n = 1;
	switch (num % 3)
	{
	case 0:
		printf("输入数据与3取余数为0\n");
		break;
	case 1:
		printf("输入的数据与3取余数为1\n");
		break;
	case 2:
		printf("输入的数据与3取余数为2\n");
		break;
	default:
		break;
	}
}

//switch结构，没有break，每个分支都会进去。
void switchStructure1()
{
	int num = 0;
	printf("请输入一个int型数据：\n");
	scanf("%d", &num);
	int n = 1;
	switch (num % 3)
	{
	case 0:
		printf("num与3的余数为0\n");
	case 1:
		printf("num与3的余数为1\n");
	case 2:
		printf("num与3的余数为2\n");
	default:
		break;
	}
}

//switch demo，游戏按键识别键名
void switchStructureDemo()
{
	char ch = '\0';
	while (1)
	{
		printf("请输入一个字符：");
		ch = getchar();
		getchar();
		switch (ch)
		{
		case 'w':
		case 'W':
			printf("向前移动\n");
			break;
		case 'a':
		case 'A':
			printf("向左移动\n");
			break;
		case 'd':
		case 'D':
			printf("向下移动\n");
			break;
		case 's':
		case 'S':
			printf("向右移动\n");
			break;
		default:
			printf("请输入wasd四个字符中的一个\n");
			break;
		}
	}
}

//for 循环结构
void forStructure()
{
	int sum = 0;

	for (int i = 0; i <= 100; i++)
	{
		sum += i;
	}

	printf("sum = %d\n", sum);
}

//for循环结构，定义变量，在for结构体里面初始化变量
void forStructure1()
{
	//定义变量
	int sum, i;

	for (i = 0,sum = 0; i <= 100 && i >= 0; i++)
	{
		sum += i;
	}
	printf("sum = %d\n", sum);
}

//for循环分析
void forStructure2()
{
	int sum = 0;
	int i = 0;
	for (;;)//死循环，
	{
		sum += i;//执行相加逻辑
		i++;//执行递增
		if (i >100)//判断退出循环条件
		{
			break;
		}
	}
	printf("sum = %d\n", sum);
}


//求1-100里面的奇数和
void forContinueStatement()
{
	int sum = 0;
	int i = 0;
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		sum += i;
	}
	printf("sum = %d\n", sum);
}

//for 循环嵌套
void forToFor()
{
	/*
	打印图形
	*****
	 ****
	  ***
	   **
		*
	*/
	int n = 5;
	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
		{
			if (b<a)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");

	}
}

//for 循环转换成while
void forToWhile()
{
	int i = 0;
	int sum = 0;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	printf("sum = %d\n", sum);
}

//do while
void doWhile()
{
	int i = 100;
	int sum = 0;
	do
	{
		sum += i;
		i--;
	} while (i >0);
	printf("sum = %d\n", sum);
}

//do while 添加if条件
void doWhileAddIf()
{
	int sum = 0;
	int i = 100;
	do
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
		i--;
		
	} while (i > 0);
	printf("sum = %d\n", sum);
}

//continue while
void continueWhile()
{
	int i = 0;
	int sum = 0;
	while (i <= 100)
	{
		if (i == 50)
		{
			i++;
			continue;
		}

		sum += i;
		i++;
	}

	printf("sum = %d\n", sum);
}

//goto 实现循环
void gotoLoop()
{
	printf("------------001-----------------\n");
	printf("------------002-----------------\n");
	printf("------------003-----------------\n");
	a:
	printf("------------004-----------------\n");
	printf("------------005-----------------\n");
	goto a;
	printf("------------006-----------------\n");
	printf("------------007-----------------\n");
}

//goto跳转
void gotoStructure()
{
	printf("------------001-----------------\n");
	printf("------------002-----------------\n");
	goto b;
	printf("------------003-----------------\n");
	b:
	printf("------------004-----------------\n");
}


//一维数组 
void oneArray()
{
	int arr[5] = {10,20,30,40,50};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("sizeof(arr) = %d\n", sizeof(arr));//求数组名的大小
	printf("sizeof(arr[0] = %d\n", sizeof(arr[0]));//求每个数组中的元素的大小
	for (int i = 0; i < n; i++)
	{
		printf("sizeof(arr[%d] = %d\n", i, sizeof(arr[i]));
		printf("arr[%d] = %d\n", i, arr[i]);
	}

}

//数据定义，未初始化。
void oneArr01()
{
	int arr[4];

	int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("sizeof(arr) = %u\n", sizeof(arr));
	printf("sizeof(arr[0] = %u\n", sizeof(arr[0]));

	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n",i, arr[i]);
	}

}

// 一维数组部分初始化
void oneArr02()
{
	int arr[4] = { 10,11 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("n = %d\n", n);

	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}


//一维数组部分初始化，指定下标初始化
void oneArr03()
{
	int arr[5] = { [2] = 123,[1] = 12 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("n = %d\n", n);

	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

}

//一组数组元素操作，
void oneArrDemo()
{
	int arr[5] = { 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("n = %d\n", n);
	
	//数组元素可以赋值
	arr[2] = 1234;

	//num++
	arr[2]++;


	arr[3] = arr[2];

	//数组元素可以从键盘获取
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}


//一组数组案例，定义10个int 数值，求平均值 ，最大值 ，最小值 。
void oneArrDemo01()
{
	int avg;
	int max;
	int min;
	int arr[10] = { 0 };

	int n = sizeof(arr) / sizeof(arr[0]);

	printf("请输入%d个int数据:\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	avg = 0;
	for (int i = 0; i < n; i++)
	{
		avg += arr[i];
	}

	printf("此数组的平均值avg = %d\n", avg / n);

	//求最大值 
	max = arr[0];//假设数组第一个值 为最大值 
	for (int i = 0; i < n; i++)
	{
		//表示假设的最大值比数组中元素要少，那么就进行最大值的交换
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	printf("数组的最大值 max = %d\n", max);

	//求最小值 ，
	min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	printf("数组的最小值为 min = %d\n", min);

}



//优化上个例子一组数组案例，定义10个int 数值，求平均值 ，最大值 ，最小值 。
void oneArrDemo02()
{
	int sum = 0 ,min = 0,max = 0;
	int arr[10] = { 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("请输入%d个int数据:\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i == 0)
		{
			max = min = arr[0];
		}
		sum += arr[i];
		//表示假设的最大值比数组中元素要少，那么就进行最大值的交换
		if (max < arr[i])
		{
			max = arr[i];
		}

		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("此数组的平均值avg = %d\n", sum / n);
	printf("数组的最大值 max = %d\n", max);
	printf("数组的最小值为 min = %d\n", min);

}

//数组元素逆置
void arrReverse()
{
	int arr[5] = { 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("请输入%d个int型数据：\n",n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0,j=n-1; i < j; i++,j--)
	{
		int tmp = 0;
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}



	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//int main(int argc, char *argv[])
//{
	//threeUnit();
	//commaOperator();
	//typeAutoTransform();
	//forceTransformType();
	//typeOverflow();
	//floatToIntOrDouble();
	//forceTypeToInt();
	//ifStructure();
	//ifStructure1();
	//switchStructureDemo();
	//forStructure2();
	//forContinueStatement();
	//forToFor();
	//forToWhile();
	//doWhile();
	//doWhileAddIf();
	//continueWhile();
	//gotoLoop();
	//gotoStructure();
	//oneArray();
	//oneArr02();
	//oneArr03();
	//arrReverse();
	//system("pause");
	//return 0;
//}