#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void threeUnit()
{
	//��Ŀ����� ���ʽ �� ֵ1 �� ֵ2 
	//���ʽΪ�棬���Ϊֵ1������Ϊֵ2
	printf("%d\n", 3 > 4 ? 3 : 4);

	3>4 ? printf("���ʽ��\n") : printf("���ʽ2\n");
	3 > 4 ? printf("���ʽ1\n") : 4 > 5 ? printf("���ʽ2\n") : printf("���ʽ3\n");

}

//���������
void arithmeticOperator()
{
	int num = 8;
	num += num -= num *= num /= 2;
	printf("num = %d\n", num);
}


//���������
void commaOperator()
{
	int num = 0;//�������岢��ʼ��
	num = 1, 3, 4, 5, 6;//������ֵ
	printf("num = %d\n", num);// num = 1

	//������Ż��������С����
	int num1 = 0;
	num1 = (2, 3, 4, 5, 6);
	printf("num1 = %d\n", num1);// num1 = 6
}

//�����Զ�ת������֤���Ȳ��ᶪʧ
void typeAutoTransform()
{
	//signed int ===> unsigned int

	int num1 = -10;
	unsigned int num2 = 5;
	num1 + num2 > 0 ? printf("����0\n") : printf("С��0\n");
	printf("num = %d\n", num1 + num2);
}

//����ǿ��ת��
void forceTransformType()
{
	int num1 = 9;
	printf("num1/2 = %u\n", num1 / 2);//ǿ��ת�����޷������������ȶ�ʧ��
}


//���Ϳռ��С���������������
//char short ֻҪ�������㣬����������ת����int����
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