#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ð������ 
void bubbleSort()
{
	int arr[8] = { 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("������%d��������\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]); 
	}

	//ð������
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

	//����
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

//��ά����
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
	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };//�ֶγ�ʼ��

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("------------------------------------\n");
	//������ʼ�� ���Զ��и� 
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
	//��ά���� ����ʡ�����������ǲ���ʡ������
	int arr[][4] = { 1,2,3,4,5,6,7,9,8 };

	printf("sizeof(arr) = %d\n", sizeof(arr));

	printf("------------------------------\n");

	int arr1[2][3] = { {2,23},{12} };//�ֶβ��ֳ�ʼ����
	int arr2[3][4] = { 1,2,3 };//�������ֳ�ʼ��
	
	printf("arr1[1][2] + arr2[2][3] = %d\n", arr1[1][2] + arr2[2][3]);

}


//��ά����Ԫ�ز���
void twoArrOperate()
{
	int arr[3][4] = { 0 };//�����ά���鲢��ʼ��
	//��ά����ĳ��ȣ�3*4
	printf("������%d����������\n", 3 * 4);
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


//��ά������.
void twoArrName()
{
	int arr[3][4];
	printf("sizeof(arr) = %d\n", sizeof(arr));
	printf("sizeof(arr[0]) = %d\n", sizeof(arr[0]));
	printf("sizeof(arr[0][0] = %d\n", sizeof(arr[0][0]));
	printf("������row = sizeof(arr)/sizeof(arr[0]) = %d\n", sizeof(arr) / sizeof(arr[0]));
	printf("������col = sizeof(arr[0])/sizeof(arr[0][0]) = %d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("��ά���鳤��: row * col == n == sizeof(arr)/sizeof(arr[0][0]) = %d\n", sizeof(arr) / sizeof(arr[0][0]));
}

//��ά����demo
void twoArrDemo2()
{
	int arr[4][5] = { 0 };
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);

	printf("������%d���������ݣ�\n", row*col);
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

//�ö�ά������һ������ƽ��ֵ 
void getAvgNum()
{
	int arr[3][3] = { 0 };
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	int sum = 0, avg = 0;
	
	printf("������%d���������ݣ�Ҫ�����0С�ڵ���100\n", row*col);

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			scanf("%d", &arr[i][j]);
		}

	}
	//�����һ��Ԫ��Ϊ���ֵ����Сֵ 
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

	printf("��һ�������ܺ�Ϊ��%d,ƽ��ֵΪ: %d\n",sum, sum /( row * col));
	printf("���ֵΪ��%d\n", max);
	printf("��СֵΪ��%d\n", min);
}


//�ַ�����
void charArr()
{
	//���Ԫ�س�ʼ��
	char arr[5] = { 'h','e','l','l','o' };
	int n = sizeof(arr) / sizeof(arr[0]);
	//����
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d] = %c\n",i, arr[i]);
	}
	//����ʹ��%s��������ַ����飬�ռ���ʼ��ַ������'\0'�������
	printf("char arr = %s\n", arr);
}


//���ַ����ķ�ʽ���г�ʼ��
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