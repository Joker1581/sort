#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	int arr[10] = { 9,2,1,3,5,4,10,8,6,7 };
	int flag = 0, i = 0,j = 0;
 
	printf("排列前：");
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n\n");
 
	for (i = 1; i < 10; i++)
	{
		flag = arr[i];   //记录arr[i] 的值
		for (j = i - 1; j >= 0 && arr[j] > flag;j--)  //当arr[i]前面的一个数字比a[i]大时
		{
			arr[j + 1] = arr[j];  //将arr[i] 和其前一个数字进行交换
		}
		arr[j + 1] = flag;
 
	}
 
	printf("排列后：");
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n\n");
 
	system("pause");
	return 0;
}