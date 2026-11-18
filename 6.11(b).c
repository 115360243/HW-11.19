#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("chcp 65001>nul");
    int n[10];
    int temp,x=0;
    printf("請輸入十個數字:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
    }

    for(int a=0;a<10;a++)
    {
        for(int i=0;i<9-a;i++)
        {
            if(n[i]>n[i+1])
            {
                temp=n[i+1];
                n[i+1]=n[i];
                n[i]=temp;
                x=1;
            }
        }
        if(x=0)
            break;
    }

    for(int i=0;i<10;i++)
    {
        printf("%d ",n[i]);
    }
    return 0;
}