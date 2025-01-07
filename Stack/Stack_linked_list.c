#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top;
//push
void push()
{
    int value;
    printf("\nEnter Value to insert : ");
    scanf("%d",&value);
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = value;
    if(top==NULL)
    {
        newNode->next = NULL;//means 1st node
    }
    else
    {
        newNode->next = top;
    }
    top = newNode;
    printf("\n%d is inserted.",value);
}
//traverse
void display()
{
    if(top==NULL)
    {
        printf("\nStack is empty");
        return;
    }
    struct node *temp = top;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
//pop
void pop()
{
    if(top==NULL)
    {
        printf("\nStack is empty");
        return;
    }
    struct node *temp = top;
    top = temp->next;
    free(temp);
    printf("\nValue Deleted!\n");
}

int main()
{
    int choice;
    while(1)
    {
        printf("\nEnter your choice:");
        printf("\n\t\t1.push");
        printf("\n\t\t2.display");
        printf("\n\t\t3.pop");
        printf("\nOption: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            display();
            break;
        case 3:
            pop();
            break;
        default:
            printf("\nInvalid Choice.");
            getchar;
            break;
        }

    }

}
