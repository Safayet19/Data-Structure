
#include<stdio.h>
int main()
{
    int arr[100],num,value,position;
    printf("Enter Number of elements: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        printf("Enter elements %d : ",i);
        scanf("%d",&arr[i]);

    }
    printf("\nInputted Array : ");
    for(int i=1; i<=num; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\nEnter the position you want to insert new number : ");
    scanf("%d",&position);
    printf("\nEnter the value: ");
    scanf("%d",&value);
    for(int i=num; i>=position; i--)
    {
        arr[i+1]=arr[i];

    }
    arr[position]=value;
    printf("Resultant array is : ");
    num=num+1;
    for(int i=1; i<=num; i++)
        printf("%d ",arr[i]);
    printf("\n\nEnter the position you want to delete new number : ");
    scanf("%d",&position);
    for(int i=position; i<=num; i++)
    {
        arr[i]=arr[i+1];

    }
    printf("\nResultant array is : ");
    num=num-1;
    for(int i=1; i<=num; i++)
        printf("%d ",arr[i]);


    if (arr[num] % 2 == 1)

    {
        printf("\nLast digit is odd.So It will be deleted.");
        num=num-1;

        printf("\n\nResultant array after odd number deletion: ");
        for (int i = 1; i <= num; i++)
            printf("%d ", arr[i]);
    }

    if (arr[num] % 2 == 0)
    {
        int new;
        printf("\nLast digit is Even.So,\nEnter New Number: ");
        scanf("%d", &new);
        arr[num+1] = new;
        num=num+1;

        printf("\nResultant array : ");
        for (int i = 1; i <= num; i++)
            printf("%d ", arr[i]);


    }
}
