#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int queue[MAX];
int front=-1,rear=-1;
void insert(int element)
{
    if(front==-1)
    {
        front=rear=front+1;
        queue[front]=element;
        return;
    }
    if(rear==MAX-1)
    {
    printf("\nQueue is Full\n\n");
    }
    rear++;
    queue[rear]=element;
}
int del()
{
    int i;
    if(front==-1&&rear==-1)
    {
    printf("\nQueue is Empty\n\n");
    return;
    }
    if(front!=-1&&front==rear)
    {
    i=queue[front];
    front=rear=-1;
    return (i);
    }
    return (queue[front++]);
}
void display()
{
    int i;
    if(front==-1)
    {
    printf("\nQueue is Empty\n\n");
    return;
    }
    printf("\nQueue Elements are:\n\n");
    for(i=front;i<=rear;i++)
    {
    printf("%d\t",queue[i]);
    }
    printf("\n");
}
main()
{
int choice;
int num1=0,num2=0;
while(1)
{
    printf("1.Add an Element into the Queue\n");
    printf("2.Remove an Element from the Queue\n");
    printf("3.Display the Queue Elements\n");
    printf("4.Exit\n");
    printf("\nEnter your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nEnter the Element to be Added to the Queue:");
        scanf("%d",&num1);
        insert(num1);
        break;
    case 2:
        num2=del();
        printf("\nElement removed from the Queue:%d\n\n",num2);
        break;
    case 3:
        display();
        break;
    case 4:
        exit(-1);
    break;
    default:
        printf("\nEnter a Valid Choice:\n\n");
    }
}
}
