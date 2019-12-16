#include <stdio.h>
#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS

void singleFLoat()
{
	printf("sizeof(3.14) = %u\n",sizeof(3.14));
	printf("sizeof(3.14f) = %u\n",sizeof(3.14f));
}

void floatVariable()
{
	float fl = 0.0f;
	printf("f = %f\n", fl);
	double d = 0.0;
	printf("d = %lf\n", d);
	printf("请输入一个小数：\n");
	scanf("%f", &fl);
	printf("fl = %f\n", fl);
	printf("请再输入这个小数一次：\n");
	scanf("%lf", &d);
	printf("d = %lf\n", d);

}

void nagetive()
{
	int num = -1000;
	printf("有符号输出 num =%d\n", num);
	printf("无符号输出 num = %u\n", num);
}
 
void hexNum()
{
	char num1 = 0x9b;
	printf("有符号的十六进制数输出为 num1 = %d\n", num1);
	printf("无符号的十六进制数输出为 num1 = %x\n", num1);
}

void dataFlow()
{
	int num = 0xff + 2;
	printf("十六进制数0xff与2相加，有符号取，num = %d\n", num);
	printf("十六进制数0xff与2相加，无符号取，num = %#2x\n", num);
}

void unsignedVarible()
{
	unsigned char num = 0xff;
	printf("%x\n", num);
	printf("%d\n", num);
	printf("%u\n", num);
	printf("%d\n", (char)num);//将数值型强转成字符型
}

void constVariable()
{
	const unsigned int num = 123;
	printf("num = %u\n", num);
	//只读变量，只能在定义时初始化赋值，不能重复写
	//num = 2344;
	printf("num = %u\n", num);
}

void regVariable()
{
	//寄存器变量，高频使用的变量，备份一份到寄存器中，
	register int num = 100;
	num = 10001;
	printf("num = %d\n", num);//寄存器变量，不能通过此方法取到值。
}

void volatileVariable()
{
	volatile unsigned int num = 1000;
	num = 100;
	num = 100;
	num = 100;

	num = 300;
	printf("num = %u\n", num);
}

void strVariable()
{
	printf("%u\n", sizeof("hello"));//字符5个，加个结束符号 \0；
	printf("%s\n", "hello world");//输出从首元素开始，一直到\0结束
	printf("%p\n", "hello world");//取字符串首元素地址
	printf("%s\n", "hello world" + 2);//字符串+2，相当于从 首元素开始往后的第三个元素开始输出，前面2个不输出 
	printf("%s\n", "hello\0world");//字符串常量中间有\0,遇到\0则输出结束
	printf("%s\n", "\0hello world");//字符串常量如果开头就是\0，则直接输出空
}

void strVariable1()
{
	printf("%u\n", sizeof('\0'));
	printf("%u\n", sizeof('0'));
	printf("%u\n", sizeof(0));
	printf("%u\n", sizeof("0"));
}

void getcharVar()
{
	printf("请输入一个字符\n");
	char ch = 0;
	
	ch = getchar();//获取的字符通过返回值返回
	printf("ch = %c\n", ch);

	getchar();
	ch = getchar();
	printf("ch = %c\n",ch);

}

void putcharVar()
{
	printf("%c\n", 'a');
	putchar('a');
	putchar(97);
	putchar(123);
}

void formatPrint()
{
	printf("#####################################\n");
	//%md m表示所占终端的显示位宽为M，默认是右对齐显示 
	printf("####%8d####\n", 1234);
	printf("####%9d####\n", 1234);
	//%0md 表示所占终端的显示位宽为M，默认右对齐，突出的部分补0
	printf("####%09d####\n", 1234);
	//%-md 表示所占终端的显示位宽为m，左对齐
	printf("####%-9d####\n", 1234);
	// - 和 0 不能一起存在，%-0md无效
	printf("####%-08d####\n", 1234);
	// %m.nf 表示所占终端的显示位宽为m，n表示小数的位数。5.3表示 保留3位小数，剩下的四舍五入
	printf("####%9.3f####\n", 3.141592657);

	/*
	#####################################
	####    1234####
	####     1234####
	####000001234####
	####1234     ####
	####1234    ####
	####    3.142####
	*/
}


void arithmetic()
{
	printf("%d\n", 5 / 3);
	printf("%d\n", 5 % 3);
	printf("%d\n", 6 % 2);
	
	if (5 % 2 == 0)
	{
		printf("5被2整除\n");
	}
	else
	{
		printf("5不能被2整除\n");
	}

	unsigned int num = 123456789;
	//分别取出 千，百，十，个位的数
	printf("亿位上的数为：%d\n", num / 100000000);
	printf("千万位上的数为：%d\n", num % 100000000 / 10000000);
	printf("百万位上的数为：%d\n", num % 10000000 / 1000000);
	printf("十万位上的数为：%d\n", num % 1000000 / 100000);
	printf("万位上的数为：%d\n", num % 100000 / 10000);
	printf("千位上的数为：%d\n", num % 10000 / 1000);
	printf("百位上的数为：%d\n", num % 1000 / 100);
	printf("十位上的数为：%d\n", num % 100 / 10);
	printf("个位上的数为：%d\n", num % 10);
	
}

void selfAdd()
{
	unsigned int num = 12;
	num++;
	printf("num = %u\n", num);
	
	unsigned int num1 = 23;
	++num1;
	printf("num1 = %u\n", num1);

	unsigned int num2 = 33;
	num2--;
	printf("num2 = %u\n", num2);

	unsigned int num3 = 34;
	--num3;
	printf("num3 = %u\n", num3);
	// ++ -- 作为独立语句的时候， ++ 或者 -- 在变量左右两边没有区别
	// 如果在赋值语句中， ++在标识符前的，先执行++ 或者 -- 再计算

}

void addOrMinusUsedGive()
{
	unsigned int num = 0;
	unsigned int num2 = 10;
	num2 = num++;
	printf("num = %u,num2 = %u\n", num, num2);
	
	num = --num2;
	printf("num = %u,num2 = %u\n", num, num2);

}

void leftValOrRightVal()
{
	// = 将等号右边的值赋值给等号左边的值 。num = 12;
	// 左值，右值
	// 左值 ，能在等号左边的值，（能被写操作）的就叫左值。并不一定是指变量，指的是位置。

	int num = 12;
	num = 100;
	//右值 ，不能在等号左边，只能在等号右边的叫右值，通常指的是常量，不能变化的，不能被写操作的值
	const int data = 10;
	int num2 = 0;
	num2 = num;
}


void evalVariable()
{
	int num = 100;
	num *= 100;
	printf("num = %d\n", num);

	int i = 9;
	i *= 3 + 5;
	printf("i = %d\n", i);
}


void compareArithmetic()
{
	printf("%d\n", 3 > 5 && 5 < 3);//0
	printf("%d\n", 3 < 5 && 5 < 3);//0 
	printf("%d\n", 3 < 5 && 5 > 3);//1

	//true 短路运算符，&& 只有两边条件全为真整个表达式才为真，否则全为假
	4 < 3 && printf("false\n");
	4 > 3 && printf("true\n");

	//false1 || 逻辑或，只有两边条件全为假的时候才为假，如果前面条件为真，后面条件则不会判断 
	4 > 3 || printf("true1\n");
	4 < 3 || printf("false1\n");
}


//int main(int argc, char *argv[])
//{
	//singleFLoat();
	//floatVariable();
	//nagetive();
	//hexNum();
	//dataFlow();
	//unsignedVarible();
	//constVariable();
	//regVariable();
	//volatileVariable();
	//strVariable1();
	//getcharVar();
	//putcharVar();
	//formatPrint();
	//addOrMinusUsedGive();
	//evalVariable();
	//compareArithmetic();
	//system("pause");
	//return 0;
//}