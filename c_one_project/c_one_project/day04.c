#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void threeUnit()
{
	//三目运算符 表达式 ？ 值1 ： 值2 
	//表达式为真，结果为值1，否则为值2
	printf("%d\n", 3 > 4 ? 3 : 4);

	3>4 ? printf("表达式１\n") : printf("表达式2\n");
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

}


int main(int argc, char *argv[])
{
	//threeUnit();
	//commaOperator();
	//typeAutoTransform();
	//forceTransformType();
	typeOverflow();
	system("pause");
	return 0;
}