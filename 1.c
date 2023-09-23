#include<stdio.h>
int main()
{
    int n,arr[10];
    printf("enter the size of an array: ");
    scanf("%d",&n);
    printf("enter the elements of an array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    int m,a;
    printf("\nenter the elements to be searched: ");
    scanf("%d",&m);
    for(int i=0;i<10;i++)
    {
        if(arr[i]==m)
        {
             a=i;
            // break;
        }
    }
    printf("%d",a);
  // for(int i=0;i<n;i++)
    // if (arr[i]==arr[i+1])
    // {
    //     printf("%d",arr[i+1]);
    // }
    // else
    //     printf("%d",arr[i]);
    return 0;
}