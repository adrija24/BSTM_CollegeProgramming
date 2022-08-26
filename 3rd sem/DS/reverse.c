#include <stdio.h>
#include <stdlib.h>

void create(int);
void display();
void reverse();
struct node
{
    int info;
    struct node *link;
} * start;

void main()
{
    int ch, n, i, j, elm, pos;
    start = NULL;
    while (1)
    {
        printf("\n---------MENU----------\n");
        printf("1. Create \n");
        printf("2. Dispaly \n");
        printf("3. Reverse \n");
        printf("4. Exit \n");
        printf("\nEnter your choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the no. of nodes to create: \n");
            scanf("%d", &n);
            printf("Enter informations:\n");
            for (i = 1; i <= n; i++)
            {
                scanf("%d", &elm);
                create(elm);
            }
            break;
        case 2:
            display();
            break;
        case 3:
            reverse();
            break;
        case 4:
            printf("\nExit\n\n");
            exit(0);
            break;
        default:
            printf("\nInvalid Choise\n");
            break;
        }
    }
}
void create(int data)
{
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        q = start;
        while (q->link != NULL)
        {
            q = q->link;
        }
        q->link = temp;
    }
}

void display()
{
    struct node *q;
    if (start == NULL)
    {
        printf("\nList is Empty\n");
        return;
    }
    q = start;
    printf("\nThe elements are : \n");
    while (q != NULL)
    {
        printf("%d ", q->info);
        if (q->link != NULL)
            printf("-> ");
        q = q->link;
    }
    printf("\n");
}
void reverse()
{
    struct node *p, *q, *r;
    if (start == NULL)
    {
        return;
    }
    p = start;
    q = p->link;
    r = q->link;
    p->link = NULL;
    q->link = p;
    while (r != NULL)
    {
        p = q;
        q = r;
        r = r->link;
        q->link = p;
    }
    start = q;
    display();
}
