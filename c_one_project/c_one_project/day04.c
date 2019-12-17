#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS

//��Ŀ�����
void threeUnit()
{
	//��Ŀ����� ���ʽ �� ֵ1 �� ֵ2 
	//���ʽΪ�棬���Ϊֵ1������Ϊֵ2
	printf("%d\n", 3 > 4 ? 3 : 4);

	3 > 4 ? printf("���ʽ��\n") : printf("���ʽ2\n");
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
	printf("%u\n", sizeof(ch1 + sh1));

}


//�Զ�����ת����
void floatToIntOrDouble()
{
	float fl = 3.14f;
	int num = 0;
	printf("num = %d\n", num);
	printf("f = %f\n", fl);
	printf("#############################\n");
	//printf("fl--> int %d\n", fl);//С���Զ�ת�������ͣ����ȶ�ʧ
	printf("fl --> double %lf\n", fl);
}

//ǿ������ת��
void forceTypeToInt()
{
	float fl = 3.14f;
	int num1 = 0;
	//ǿ������ת��ֻ����ʱ�ı�ԭ������ֵ 
	num1 = (int)fl;
	printf("num1 = %d\n", num1);
	printf("fl = %f\n", fl);
}

//˳�����̽ṹ ��if ,if����else ,if ���� else if ����
void ifStructure()
{
	int num = 0;
	printf("������һ��������\n");
	scanf("%d", &num);
	if (num % 3 == 0)
	{
		printf("%d�ܱ�3����\n", num);
	}
	else
	{
		printf("%d���ܱ�3����\n", num);
	}

	printf("--------------------------------------------\n");
	if (num % 2 == 0)
	{
		printf("%d��2������Ϊ%d\n", num,num%2);
	}
	else
	{
		printf("%d��2������Ϊ%d\n", num,num%2);
	}
}


void ifStructure1()
{
	if (3 > 4);//if�������Ų����зֺ�
	{
		printf("3����4\n");
	}

	if (4 > 3)
		printf("4����3\n");
	printf("4С��3\n");//���ifû��{}��ֻ��ʶ�������һ�����

	int num1 = 5;

	if (num1 = 6)//���ܽ�= ��д�� ==�ˣ���Ȼ���������
	{
		printf("���������\n");
	}

}

//switch��֧�ṹ
void switchStructure()
{
	int num = 0;
	printf("������һ��int������:\n");
	scanf("%d", &num);
	int n = 1;
	switch (num % 3)
	{
	case 0:
		printf("����������3ȡ����Ϊ0\n");
		break;
	case 1:
		printf("�����������3ȡ����Ϊ1\n");
		break;
	case 2:
		printf("�����������3ȡ����Ϊ2\n");
		break;
	default:
		break;
	}
}

//switch�ṹ��û��break��ÿ����֧�����ȥ��
void switchStructure1()
{
	int num = 0;
	printf("������һ��int�����ݣ�\n");
	scanf("%d", &num);
	int n = 1;
	switch (num % 3)
	{
	case 0:
		printf("num��3������Ϊ0\n");
	case 1:
		printf("num��3������Ϊ1\n");
	case 2:
		printf("num��3������Ϊ2\n");
	default:
		break;
	}
}

//switch demo����Ϸ����ʶ�����
void switchStructureDemo()
{
	char ch = '\0';
	while (1)
	{
		printf("������һ���ַ���");
		ch = getchar();
		getchar();
		switch (ch)
		{
		case 'w':
		case 'W':
			printf("��ǰ�ƶ�\n");
			break;
		case 'a':
		case 'A':
			printf("�����ƶ�\n");
			break;
		case 'd':
		case 'D':
			printf("�����ƶ�\n");
			break;
		case 's':
		case 'S':
			printf("�����ƶ�\n");
			break;
		default:
			printf("������wasd�ĸ��ַ��е�һ��\n");
			break;
		}
	}
}

//for ѭ���ṹ
void forStructure()
{
	int sum = 0;

	for (int i = 0; i <= 100; i++)
	{
		sum += i;
	}

	printf("sum = %d\n", sum);
}

//forѭ���ṹ�������������for�ṹ�������ʼ������
void forStructure1()
{
	//�������
	int sum, i;

	for (i = 0,sum = 0; i <= 100 && i >= 0; i++)
	{
		sum += i;
	}
	printf("sum = %d\n", sum);
}

//forѭ������
void forStructure2()
{
	int sum = 0;
	int i = 0;
	for (;;)//��ѭ����
	{
		sum += i;//ִ������߼�
		i++;//ִ�е���
		if (i >100)//�ж��˳�ѭ������
		{
			break;
		}
	}
	printf("sum = %d\n", sum);
}


//��1-100�����������
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

//for ѭ��Ƕ��
void forToFor()
{
	/*
	��ӡͼ��
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

//for ѭ��ת����while
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

//do while ���if����
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

//goto ʵ��ѭ��
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

//goto��ת
void gotoStructure()
{
	printf("------------001-----------------\n");
	printf("------------002-----------------\n");
	goto b;
	printf("------------003-----------------\n");
	b:
	printf("------------004-----------------\n");
}


//һά���� 
void oneArray()
{
	int arr[5] = {10,20,30,40,50};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("sizeof(arr) = %d\n", sizeof(arr));//���������Ĵ�С
	printf("sizeof(arr[0] = %d\n", sizeof(arr[0]));//��ÿ�������е�Ԫ�صĴ�С
	for (int i = 0; i < n; i++)
	{
		printf("sizeof(arr[%d] = %d\n", i, sizeof(arr[i]));
		printf("arr[%d] = %d\n", i, arr[i]);
	}

}

//���ݶ��壬δ��ʼ����
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

// һά���鲿�ֳ�ʼ��
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


//һά���鲿�ֳ�ʼ����ָ���±��ʼ��
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

//һ������Ԫ�ز�����
void oneArrDemo()
{
	int arr[5] = { 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("n = %d\n", n);
	
	//����Ԫ�ؿ��Ը�ֵ
	arr[2] = 1234;

	//num++
	arr[2]++;


	arr[3] = arr[2];

	//����Ԫ�ؿ��ԴӼ��̻�ȡ
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}


//һ�����鰸��������10��int ��ֵ����ƽ��ֵ �����ֵ ����Сֵ ��
void oneArrDemo01()
{
	int avg;
	int max;
	int min;
	int arr[10] = { 0 };

	int n = sizeof(arr) / sizeof(arr[0]);

	printf("������%d��int����:\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	avg = 0;
	for (int i = 0; i < n; i++)
	{
		avg += arr[i];
	}

	printf("�������ƽ��ֵavg = %d\n", avg / n);

	//�����ֵ 
	max = arr[0];//���������һ��ֵ Ϊ���ֵ 
	for (int i = 0; i < n; i++)
	{
		//��ʾ��������ֵ��������Ԫ��Ҫ�٣���ô�ͽ������ֵ�Ľ���
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	printf("��������ֵ max = %d\n", max);

	//����Сֵ ��
	min = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	printf("�������СֵΪ min = %d\n", min);

}



//�Ż��ϸ�����һ�����鰸��������10��int ��ֵ����ƽ��ֵ �����ֵ ����Сֵ ��
void oneArrDemo02()
{
	int sum = 0 ,min = 0,max = 0;
	int arr[10] = { 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("������%d��int����:\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i == 0)
		{
			max = min = arr[0];
		}
		sum += arr[i];
		//��ʾ��������ֵ��������Ԫ��Ҫ�٣���ô�ͽ������ֵ�Ľ���
		if (max < arr[i])
		{
			max = arr[i];
		}

		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("�������ƽ��ֵavg = %d\n", sum / n);
	printf("��������ֵ max = %d\n", max);
	printf("�������СֵΪ min = %d\n", min);

}

//����Ԫ������
void arrReverse()
{
	int arr[5] = { 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("������%d��int�����ݣ�\n",n);
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