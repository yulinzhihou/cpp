#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  signedOrUnsigned()
{
	int num = 0;
	printf("������һ�����֣�\n");
	scanf("%d",&num);
	printf("�з����� num = %d\n", num);
	printf("�޷����� num = %u\n", num);
	printf("�з���long�� num = %ld\n", num);
	printf("�޷���long�� num = %lu\n", num);
	printf("%lu\n", 10LU);
	printf("%u\n", 10U);
	printf("%ld\n", 10L);
	printf("%d\n", 10);
}

void signedOrUnsignedVariable()
{
	//�����з��ŵı���num
	int num = 10;
	printf("num = %d\n", num);
	unsigned int num1 = 0;
	printf("������һ����ֵ��\n");
	scanf("%d", &num1);
	printf("���������ֵ���޷�����ֵ num1 = %u\n", num1);
}

void chConst()
{
	char ch = 'a';
	printf("��������ַ�����Ϊ��ch = %c\n", ch);
}

void chInput()
{
	unsigned int numb = 0;
	printf("������һ����ֵ��\n");
	scanf("%d", &numb);
	printf("���������ֵ��Ӧ���ַ�asciiΪ��%c\n",numb);
	printf("���������ֵ��Ӧ���ַ�������СΪ %d\n", sizeof(numb));
	char ch = 99;
	printf("ch �ַ�����Ϊ %c\n", ch);
	printf("ch �ַ������Ĵ�СΪ %d\n", sizeof(ch));
}

void chToNum()
{
	char ch = 'a';
	printf("�ַ����� ch = %c\n", ch);
	printf("�ַ����� ch ��Ӧ����ֵΪ��%u\n", ch);
	char ch1 = ch + 1;
	printf("�ַ����� ch1 = %c\n", ch1);
	printf("�ַ����� ch1 ��Ӧ����ֵΪ��%u\n", ch1);
	printf("�ַ����� ch + 1 ��Ӧ���ַ�Ϊ %c\n", ch + 1);
	printf("�ַ����� ch1 �Ĵ�СΪ��%d\n", sizeof(ch1));
	printf("�ַ����� ch �Ĵ�СΪ: %d\n", sizeof(ch));

}

/*
��Сд�ַ�ת��
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
	//ת���ַ� 
	// \a ��ʾ������
	printf("%c\n", '\a');
	// \n ��ʾ ���С�
	printf("$$$%c$$$\n", '\n');
	// '\t'��ʾ�Ʊ��
	printf("###%c###\n", '\t');
	// '\r' �ص�����
	printf("123%c456\n", '\r');//�൱�������123�ٻص����ף���456�滻��123��λ���ϣ������ֻ���456�ļ���
	// '\\' ��ʾһ�� \;
	printf("a\\b\\c\\d\n");
	// %90����Ҫ��� %90��
	printf("%%%d\n", 90);
}

void zero()
{
	printf("�����κη��ŵ� 0  = %d\n", 0);
	printf("�������ŵ�\'0\' = %d\n", '0');
	printf("����б��0����� : %d\n", '\0');
}


//�����ַ������͵��ֽڴ�С
void sizeCharAndInt()
{
	char ch = 'b';
	printf("sizeof(ch) = %u\n", sizeof(ch));
	printf("sizeof(\'b\') = %u\n", sizeof('a'));
}

//ʮ������˽���ʮ�����Ƶ�ת��
void decToOctOrHex()
{
	unsigned int num = 0;
	printf("����һ����������:\n");
	scanf("%d", &num);
	printf("��ֵnum = %u\n", num);
	printf("��ֵnum ת�˽��� num = %#o\n", num);
	printf("��ֵnum תʮ������ num = %#x\n", num);
}

//���Ƶ�ת���Լ�������Χ
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