#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;

void push(int value)
{
    struct node *newNode = malloc(sizeof(struct node));

    newNode->data = value;
    newNode->next = NULL;

    newNode->next = top;
    top = newNode;
    printf("\n%d is added",value);

}
void display()
{
    if(top==NULL)
        {printf("\nEmpty");
        return;
        }
    struct node *temp = top;
        printf("\nDisplay : ");
    while(temp != NULL)
          {
              printf("%d ",temp->data);
              temp = temp->next;
          }
}
void pop()
{
     if(top==NULL)
        {printf("\nUnderflow");
        return;
        }
    struct node *temp = top;
    printf("\n%d is deleted",top->data);
    top = top->next;
    free(temp);
    temp=NULL;

}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    pop();
    pop();
    pop();
    pop();

}
