#include<stdio.h>
int main()
{
    int i,value,num,position;
    printf("Enter total numbers: ");
    scanf("%d",&num);
    int arr[num];
    for(i=1;i<=num;i++)
    {
        printf("Enter number %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nInputted array : ");
    for(i=1; i<=num; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter searching number: ");
    scanf("%d",&value);
    int start=1;
    int end=num;
    int mid;
    while(start<=end)
    {   mid=(start+end)/2;
        if(value==arr[mid])
        {
            printf("The number is %d is in position %d ",value,mid);
            break;
        }
        else if(value>arr[mid])
            start=mid+1;
        else
            end=mid-1;
    }
    if(start>end)
    {
        printf("Value not found! ");
    }
}
