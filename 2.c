#include<stdio.h>
int main()
{
    int i,sum,arr[10],key;
    printf("enter the elements: ");
    for (int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter value for key:");
    scanf("%d",&key);
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(arr[i]*arr[i]+arr[j]*arr[j]==key)
            {
                printf("i=%d j=%d",i,j);
            }
        }
    }
    return 0;
}