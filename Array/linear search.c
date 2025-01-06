#include<stdio.h>
int main()
{
    int size,num,position=0,value;
    printf("Enter total numbers: ");
    scanf("%d",&num);
    int array[num];
    for(int i=1;i<=num;i++)
    {
        printf("Enter Number %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("\nEnter the value u want to search: ");
    scanf("%d",&value);
    for(int i=1;i<=num;i++)
    {
       if(value==array[i])
       {
       position=i;
        break;
       }
    }
  if(position==0)
    printf("Item Not Found!");
  else
    printf("\nNumber %d is in position : ",value);
        printf("%d ",position);
}

