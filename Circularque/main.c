#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1;
int rear=-1;

void enqueue(int item)
{
    if((rear+1)%SIZE==front)
        printf("Queue is full");
    else
    {
        if(rear==-1&&front==-1)
        {
            rear=0;
            front=0;
        }
        else
        {
            rear=(rear+1)%SIZE;
        }
        queue[rear]=item;
        printf("\n%d is inserted\n",item);
    }
}

int dequeue()
{
    int value;
    if(rear==-1&&front==-1)
    {
    printf("\nIt is empty\n");
    return -1;
    }
    else
    {
        value=queue[front];
        if (rear==front)
        {
            rear=-1;
            front=-1;
        }
        else
        {
            front=(front+1)%SIZE;
        }
        return value;
    }
}

void display(int queue[])
{
    int i;
    printf("\n");
    if (front > rear)
    {
        for (i = front; i < SIZE; i++)
        {
             printf("Queue[%d]=%d\n",i,queue[i]);
        }
        for (i = 0; i <= rear; i++)
             printf("Queue[%d]=%d\n",i,queue[i]);
    }
    else
    {
        for (i = front; i <= rear; i++)
             printf("Queue[%d]=%d\n",i,queue[i]);
    }
}


int main()
{
    int item,choise;
    do
    {
    printf("\n Press 1 for insert");
    printf("\n press 2 for delete");
    printf("\n Press 3 for display");
    printf("\n Press 4 for exit");
    printf("\n your choise:");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1:printf("Enter a value:");
            scanf("%d",&item);
            enqueue(item);
            break;
        case 2:item=dequeue();
        if(item!=1)
        printf("\n%d is deleted\n",item);
            break;
        case 3:display(queue);
            break;

}
}
    while (choise!=4);
    getch();
    return 0;

}
