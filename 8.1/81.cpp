#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int k = 8;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int z = 0;//���±�
	int y = sz - 1;//���±�
	while (z <=y) 
	{
		int zj = (z + y) / 2;//�м�Ԫ���±�
			if (arr[zj] > k)
		{
				y = zj - 1;
		}
			else if (arr[zj]<k)
			{
				z = zj + 1;
			}
			else
			{
				printf("�ҵ��ˣ��±��ǣ�%d/n", zj);
				break;
			}
	}
	if (z > y)
	{
		printf("�Ҳ���/n");
	}
	return 0;
}