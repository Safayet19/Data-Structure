 #include<stdio.h>

dividing(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        dividing(arr,start,mid);
        dividing(arr,mid+1,end);
        merging(arr,start,mid,end);
    }
}

merging(int arr[],int start,int mid, int end)

{
    int temp[end+1];
    int i=start;
    int j=mid+1;
    int k=0;

    while((i<=mid)&& (j<=end))
    {
        if(arr[i]<=arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }
    while(i<=mid)
    temp[k++]=arr[i++];
    while(j<=end)
    temp[k++]=arr[j++];

    for(i=start; i<=end; i++)
    {
        arr[i]=temp[i-start];
    }
}

int main() {
    int num, i;
    printf("Enter total numbers: ");
    scanf("%d", &num);
    int arr[num];
    for (i = 1; i <= num; i++) {
        printf("Enter number %d : ", i );
        scanf("%d", &arr[i]);
    }
    printf("\nInputted array: ");
    for (i = 1; i <= num; i++)
        {
        printf("%d ", arr[i]);
        }
    dividing(arr,1,num);
    printf("\nSorted array: ");
    for(i=1; i<=num; i++)
    {
        printf("%d ",arr[i]);
    }
}
