#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  signedOrUnsigned()
{
	int num = 0;
	printf("请输入一下数字：\n");
	scanf("%d",&num);
	printf("有符号数 num = %d\n", num);
	printf("无符号数 num = %u\n", num);
	printf("有符号long型 num = %ld\n", num);
	printf("无符号long型 num = %lu\n", num);
	printf("%lu\n", 10LU);
	printf("%u\n", 10U);
	printf("%ld\n", 10L);
	printf("%d\n", 10);
}

void signedOrUnsignedVariable()
{
	//定义有符号的变量num
	int num = 10;
	printf("num = %d\n", num);
	unsigned int num1 = 0;
	printf("请输入一个数值：\n");
	scanf("%d", &num1);
	printf("你输入的数值是无符号数值 num1 = %u\n", num1);
}

void chConst()
{
	char ch = 'a';
	printf("你输入的字符常量为：ch = %c\n", ch);
}

void chInput()
{
	unsigned int numb = 0;
	printf("请输入一个数值：\n");
	scanf("%d", &numb);
	printf("你输入的数值对应的字符ascii为：%c\n",numb);
	printf("你输入的数值对应的字符常量大小为 %d\n", sizeof(numb));
	char ch = 99;
	printf("ch 字符常量为 %c\n", ch);
	printf("ch 字符常量的大小为 %d\n", sizeof(ch));
}

void chToNum()
{
	char ch = 'a';
	printf("字符变量 ch = %c\n", ch);
	printf("字符变量 ch 对应的数值为：%u\n", ch);
	char ch1 = ch + 1;
	printf("字符变量 ch1 = %c\n", ch1);
	printf("字符变量 ch1 对应的数值为：%u\n", ch1);
	printf("字符变量 ch + 1 对应的字符为 %c\n", ch + 1);
	printf("字符变量 ch1 的大小为：%d\n", sizeof(ch1));
	printf("字符变量 ch 的大小为: %d\n", sizeof(ch));

}

/*
大小写字符转换
*/
void chToCH()
{
	char ch1 = 'a';
	printf("ch1 = %c\n", ch1);
	char ch2 = ch1 - 32;
	printf("ch2 = %c\n", ch2);
	char ch3 = 'A';
	printf("ch3 = %c\n", ch3);
	char ch4 = ch3 + 32;
	printf("ch4 = %c\n", ch4);
}

void transforMeans()
{
	//转义字符 
	// \a 表示警报声
	printf("%c\n", '\a');
	// \n 表示 换行。
	printf("$$$%c$$$\n", '\n');
	// '\t'表示制表符
	printf("###%c###\n", '\t');
	// '\r' 回到行首
	printf("123%c456\n", '\r');//相当于输出了123再回到行首，将456替换到123的位置上，造成了只输出456的假像
	// '\\' 表示一个 \;
	printf("a\\b\\c\\d\n");
	// %90，需要输出 %90，
	printf("%%%d\n", 90);
}

void zero()
{
	printf("不带任何符号的 0  = %d\n", 0);
	printf("带单引号的\'0\' = %d\n", '0');
	printf("带反斜杠0的输出 : %d\n", '\0');
}


//测试字符与整型的字节大小
void sizeCharAndInt()
{
	char ch = 'b';
	printf("sizeof(ch) = %u\n", sizeof(ch));
	printf("sizeof(\'b\') = %u\n", sizeof('a'));
}

//十进制与八进制十六进制的转换
void decToOctOrHex()
{
	unsigned int num = 0;
	printf("输入一个整型数据:\n");
	scanf("%d", &num);
	printf("数值num = %u\n", num);
	printf("数值num 转八进制 num = %#o\n", num);
	printf("数值num 转十六进制 num = %#x\n", num);
}

//进制的转换以及超出范围
void asciiLimit()
{
	printf("%d\n", '\123');
	printf("%d\n", '\34');
	printf("%d\n", '\12345');
	printf("%d\n", '\55');

	printf("%d\n", '\x12');
	pirntf("%d\n", '\xab');
	printf("%d\n", '\xabc');
	printf("%d\n", '\xah');
}

//int main(int argc, char *argv[])
//{
	//signedOrUnsigned();
	//signedOrUnsignedVariable();
	//chConst();
	//chInput();
	//chToNum();
	//chToCH();
	//transforMeans();
	//zero();
	//sizeCharAndInt();
	//asciiLimit();
	//system("pause");
	//return 0;
//}