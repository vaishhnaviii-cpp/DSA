#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1 , rear = -1;
//enqueue (insert)
void enqueue(int value)
{
    if (rear==MAX - 1)
    {
       printf("queue overfloe\n");
    }
    else
    {
        if(front==-1)
        front = 0;
       rear++;
       queue[rear]=value;
       printf("%d inserted\n",value);
    }
    
} 
//dequeue
void dequeue()
{
    if(front==-1 || front > rear)
    {
        printf("queue underflow\n");
    }
    else
    {
        printf("% deleted\n",queue[front]);
        front++;
        if (front>rear)
        {
            front = rear = -1;
        }
    }
}
//peek
void peek()
{
    if(front==-1)
    {
        printf("queue is empty\n")
    }
    else
    {
        printf("front element is %d\n", queue[front];)
    }
}
//display queue
void display()
{
    int i;
    if (front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("queue elements:";)
        for(i=front;i<=rear;i++)
        {
            printf(%d;queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice, value;

    do
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Program Ended\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 5);

    return 0;
}
