#include<stdio.h>
#define N 10  //此处可以自定义N，按需求改变数组的大小
int main()
{
    int a[N]={0};
    int i,j,temp=0;
    printf("请输入要比较的值：");
    for(i=0;i<N;i++)           //遍历数组给入值
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)        
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];     //常规的比较交换，用到一个中间变量，存值
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++)        //遍历数组输出
    {
        printf("%d\n",a[i]);
    }
    return 0;
}