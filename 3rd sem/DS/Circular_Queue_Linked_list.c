// Circular queue implementation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
} *front = NULL, *rear = NULL;
void in_eque(int);
void del_eque();
void display();
void main()
{
    int ch, elm;
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
            printf("Enter the information: ");
            scanf("%d", &elm);
            in_eque(elm);
            break;
        case 2:
            del_eque();
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
void in_eque(int data)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    if ((front == NULL) && (rear == NULL))
    {
        tmp->link = NULL;
        front = tmp;
        rear = tmp;
    }
    else
    {
        rear->link = tmp;
        tmp->link = front;
        rear = tmp;
    }
}
void del_eque()
{
    struct node *q;
    int item;
    if(front == NULL)
    {
        printf("Queue Empty\n");
        return;
    }
    else{
        if(front == rear)
        {
            item = front->info;
            free(front);
            front = NULL;
            rear = NULL;
        }
        else{
            q = front;
            item = q->info;
            front = front->link;
            rear->link = front;
            free(q);
        }
    }
}
void display()
{
    struct node *p, *q;
    p = front;
    q = NULL;
    while(p != q)
    {
        if(p->link == NULL)
        {
            printf("%d ", p->info);
            return;
        }
        printf("%d ", p->info);
        p = p->link;
        q = front;
    }
}