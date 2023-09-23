#include<stdio.h>
int main()
{
    int sum,arr[10],key;
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
            for(int k=0;k<10;k++)
            {
                if(arr[i]+arr[j]+arr[k]==key)
                {
                    printf("i=%d j=%d k=%d\n",i,j,k);
                }
            }
        }
    }
    return 0;
}