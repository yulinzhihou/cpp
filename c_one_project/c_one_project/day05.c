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

int main(int argc, char *argv[])
{
	//bubbleSort();
	//arrDemo();
	//twoArr();
	//twoArrInit();
	//twoArrDemo();
	twoArrOperate();
	system("pause");
	return 0;
}