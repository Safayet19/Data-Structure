#include<stdio.h>
int main()
{
 int arr[50],i,num,position,value;
 printf("Enter The Total Number : ");
 scanf("%d",&num);

 for(i=1;i<=num;i++)
 {
     printf("Enter Number %d = ",i);
    scanf("%d",&arr[i]);
    }

printf("\nInputted array :");
for(i=1;i<=num;i++)
{
    printf("%d ",arr[i]);
}
printf("\nEnter The Position Number :");
scanf("%d ",&position );
printf("Enter The Value :");
scanf("%d ",&value );

for(i=num;i<=position;i--)

{
    arr[i+1]=arr[i];

}

arr[position]=value;
printf("\nInputted array :");
for(i=1;i<=num;i++)
{
    printf("%d ",arr[i]);
}
}


