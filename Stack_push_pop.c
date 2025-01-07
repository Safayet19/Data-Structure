//10,20,30,40,50

#include<stdio.h>
int top=-1;
int size = 10;

int stack[10];

void push(int value)
{
    if(top == size-1)
    {
        printf("\nStack is Full");
        return;
    }
    top =top+1;
    stack[top] = value;
    printf("\nValue %d is added",value);

}
//traverse
void traverse()
{
    printf("\nElements :");
    for(int i =top; i>=0; i--)
    {
        printf("%d ",stack[i]);
    }
}
//pop
void pop()
{
    if(top ==-1)
    {
        printf("\nEmpty");
        return;
    }
    printf("\nDeleted element is %d",stack[top]);
    top = top-1;
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    traverse();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    traverse();
}
