#include<stdio.h>
int top=-1;
int size=10;
int stack[10];
//push
void push(int value)
  {
      if(top==size-1)
        printf("Stack is full\n");
      else
        {
            top=top+1;
            stack[top] = value;
            printf("Pushed Element is : %d\n",value);
        }
    }

//pop()
void pop()
{
    if(top==-1)
        printf("Stack is Empty");
    else
        printf("\nPopped Elemnt is : %d",stack[top]);
        top=top-1;

}
//traverse
void traverse()
{
    if(top==-1)
        printf("Stack is empty\n");
    else
        for(int i =top; i>=0; i--)
        printf("%d ",stack[i]);
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

}
