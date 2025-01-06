//bublle sorting//
#include<stdio.h>
int main()
{
    int num,pass,compare,i,position,temp;
    printf("Enter total numbers: ");
    scanf("%d",&num);
    int arr[num];
    for(i=1; i<=num; i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nInputted Array: ");
    for(i=1; i<=num; i++)
    {
        printf("%d ",arr[i]);
    }
    for(pass=1; pass<=num-1; pass++)
    {
        for(compare=1; compare<=num-pass; compare++)
        {
            if(arr[compare]>arr[compare+1])
            {
                temp=arr[compare];
                arr[compare]=arr[compare+1];
                arr[compare+1]= temp;
            }
        }
    }
    printf("\nArray after sorting: ");
    for(i=1; i<=num; i++)
    {
        printf("%d ",arr[i]);
    }


}
