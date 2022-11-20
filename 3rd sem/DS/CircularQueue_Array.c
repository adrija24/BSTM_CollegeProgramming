//Circular Queue using Array
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
void insert();
void del();
void display();
int a[MAX], front = -1, rear = -1;
void main()
{
    int ch;
    while (1)
    {
        printf("\n------MENU------\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    }
}
void insert()
{
    int m;
    printf("Enter the value: \n");
    scanf("%d", &m);
    if ((front == 0) && (rear == MAX - 1))
    {
        printf("\n Queue overflow");
        return;
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
        a[rear] = m;
    }
    else if((front > 0) && (rear == MAX -1))
    {
        rear = 0;
        a[rear] = m;
    }
    else if(rear = front = -1)
    {
        printf("\nOverflow");
        return;
    }
    else
    {
        rear++;
        a[rear] = m;
    }
}
void del()
{
    int m;
    if(front == -1)
    {
        printf("\nEmpty");
        return;
    }
    m = a[front];
    a[front] = NULL;
    printf("\nThe element deleted is %d", m);
    if(front == rear)
    {
        front = rear = -1;
        return;
    }
    else if(front == MAX - 1)
    {
        front = 0;
    }
    else
    front++;
}
void display()
{
    if(front == -1)
    {
        printf("\nEmpty");
        return;
    }
    printf("Queue elements are:\n");
    if(front <= rear)
    {
        while(front <= rear)
        {
            printf("%d", a[front]);
            front++;
        }
    }
    else if(front > rear)
    {
        while(front <= MAX -1)
        {
            printf("%d", a[front]);
            front++;
        }
        front = 0;
        while(front <= rear)
        {
            printf("%d", a[front]);
            front++;
        }
    }
}