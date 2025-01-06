#include<stdio.h>
int main()
{
    int arr[100],value,position,num;
    printf("Enter total numbers: ");
    scanf("%d",&num);
    for(int i= 1; i<=num; i++)
    {
        printf("Enter Number %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nInputted Numbers : ");
    for(int i=1; i<=num; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\nEnter deleted Number position: ");
    scanf("%d",&position);
    for(int i=position; i<=num; i++)
    {
        arr[i]=arr[i+1];
    }
    printf("\nResultant array is : ");
    for(int i=1; i<=num-1; i++)
        printf("%d ",arr[i]);

}
