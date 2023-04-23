#include<stdio.h>
#define N 10
int main()
{
    int a[N]={0};
    int i,j,temp=0;
    printf("请输入要比较的值：");
    for(i=0;i<N;i++)           
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)        
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];     
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++)       
    {
        printf("%d\n",a[i]);
    }
    return 0;
}