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
	printf("������һ��С����\n");
	scanf("%f", &fl);
	printf("fl = %f\n", fl);
	printf("�����������С��һ�Σ�\n");
	scanf("%lf", &d);
	printf("d = %lf\n", d);

}

void nagetive()
{
	int num = -1000;
	printf("�з������ num =%d\n", num);
	printf("�޷������ num = %u\n", num);
}
 
void hexNum()
{
	char num1 = 0x9b;
	printf("�з��ŵ�ʮ�����������Ϊ num1 = %d\n", num1);
	printf("�޷��ŵ�ʮ�����������Ϊ num1 = %x\n", num1);
}

void dataFlow()
{
	int num = 0xff + 2;
	printf("ʮ��������0xff��2��ӣ��з���ȡ��num = %d\n", num);
	printf("ʮ��������0xff��2��ӣ��޷���ȡ��num = %#2x\n", num);
}

void unsignedVarible()
{
	unsigned char num = 0xff;
	printf("%x\n", num);
	printf("%d\n", num);
	printf("%u\n", num);
	printf("%d\n", (char)num);//����ֵ��ǿת���ַ���
}

void constVariable()
{
	const unsigned int num = 123;
	printf("num = %u\n", num);
	//ֻ��������ֻ���ڶ���ʱ��ʼ����ֵ�������ظ�д
	//num = 2344;
	printf("num = %u\n", num);
}

void regVariable()
{
	//�Ĵ�����������Ƶʹ�õı���������һ�ݵ��Ĵ����У�
	register int num = 100;
	num = 10001;
	printf("num = %d\n", num);//�Ĵ�������������ͨ���˷���ȡ��ֵ��
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
	printf("%u\n", sizeof("hello"));//�ַ�5�����Ӹ��������� \0��
	printf("%s\n", "hello world");//�������Ԫ�ؿ�ʼ��һֱ��\0����
	printf("%p\n", "hello world");//ȡ�ַ�����Ԫ�ص�ַ
	printf("%s\n", "hello world" + 2);//�ַ���+2���൱�ڴ� ��Ԫ�ؿ�ʼ����ĵ�����Ԫ�ؿ�ʼ�����ǰ��2������� 
	printf("%s\n", "hello\0world");//�ַ��������м���\0,����\0���������
	printf("%s\n", "\0hello world");//�ַ������������ͷ����\0����ֱ�������
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
	printf("������һ���ַ�\n");
	char ch = 0;
	
	ch = getchar();//��ȡ���ַ�ͨ������ֵ����
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
	//%md m��ʾ��ռ�ն˵���ʾλ��ΪM��Ĭ�����Ҷ�����ʾ 
	printf("####%8d####\n", 1234);
	printf("####%9d####\n", 1234);
	//%0md ��ʾ��ռ�ն˵���ʾλ��ΪM��Ĭ���Ҷ��룬ͻ���Ĳ��ֲ�0
	printf("####%09d####\n", 1234);
	//%-md ��ʾ��ռ�ն˵���ʾλ��Ϊm�������
	printf("####%-9d####\n", 1234);
	// - �� 0 ����һ����ڣ�%-0md��Ч
	printf("####%-08d####\n", 1234);
	// %m.nf ��ʾ��ռ�ն˵���ʾλ��Ϊm��n��ʾС����λ����5.3��ʾ ����3λС����ʣ�µ���������
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
		printf("5��2����\n");
	}
	else
	{
		printf("5���ܱ�2����\n");
	}

	unsigned int num = 123456789;
	//�ֱ�ȡ�� ǧ���٣�ʮ����λ����
	printf("��λ�ϵ���Ϊ��%d\n", num / 100000000);
	printf("ǧ��λ�ϵ���Ϊ��%d\n", num % 100000000 / 10000000);
	printf("����λ�ϵ���Ϊ��%d\n", num % 10000000 / 1000000);
	printf("ʮ��λ�ϵ���Ϊ��%d\n", num % 1000000 / 100000);
	printf("��λ�ϵ���Ϊ��%d\n", num % 100000 / 10000);
	printf("ǧλ�ϵ���Ϊ��%d\n", num % 10000 / 1000);
	printf("��λ�ϵ���Ϊ��%d\n", num % 1000 / 100);
	printf("ʮλ�ϵ���Ϊ��%d\n", num % 100 / 10);
	printf("��λ�ϵ���Ϊ��%d\n", num % 10);
	
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
	// ++ -- ��Ϊ��������ʱ�� ++ ���� -- �ڱ�����������û������
	// ����ڸ�ֵ����У� ++�ڱ�ʶ��ǰ�ģ���ִ��++ ���� -- �ټ���

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
	// = ���Ⱥ��ұߵ�ֵ��ֵ���Ⱥ���ߵ�ֵ ��num = 12;
	// ��ֵ����ֵ
	// ��ֵ �����ڵȺ���ߵ�ֵ�����ܱ�д�������ľͽ���ֵ������һ����ָ������ָ����λ�á�

	int num = 12;
	num = 100;
	//��ֵ �������ڵȺ���ߣ�ֻ���ڵȺ��ұߵĽ���ֵ��ͨ��ָ���ǳ��������ܱ仯�ģ����ܱ�д������ֵ
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

	//true ��·�������&& ֻ����������ȫΪ���������ʽ��Ϊ�棬����ȫΪ��
	4 < 3 && printf("false\n");
	4 > 3 && printf("true\n");

	//false1 || �߼���ֻ����������ȫΪ�ٵ�ʱ���Ϊ�٣����ǰ������Ϊ�棬���������򲻻��ж� 
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