#include <stdio.h>
#include <stdlib.h>

void create(int);
void display();
void insertAtBegining(int);
void insertInBetween(int, int);
void insertAtLast(int);
void del(int);
void sort();
int count();
void reverse();
struct node
{
    int info;
    struct node *next;
    struct node *prev;

} * start;
int i, j, pos, val, num, ch;

void main()
{
    start = NULL;
    while (1)
    {
        printf("........Menu.......\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Insert at begining\n");
        printf("4. Inset in between\n");
        printf("5. Insert at last\n");
        printf("6. Delete\n");
        printf("7. Sorting\n");
        printf("8. Reverse\n");
        printf("9. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the number of nodes:\n");
            scanf("%d", &num);
            printf("Enter values:\n");
            for (i = 1; i <= num; i++)
            {
                scanf("%d", &val);
                create(val);
            }
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Enter the value of new node:\n");
            scanf("%d", &val);
            insertAtBegining(val);
            break;
        case 4:
            printf("Enter the value of new node:\n");
            scanf("%d", &val);
            printf("Enter the position:\n");
            scanf("%d", &pos);
            insertInBetween(val, pos);
            break;
        case 5:
            printf("Enter the value of new node:\n");
            scanf("%d", &val);
            insertAtLast(val);
            break;
        case 6:
            printf("Enter the position of the node to delete:\n");
            scanf("%d", &pos);
            del(pos);
            break;
        case 7:
            sort();
            break;
        case 8:
            reverse();
            break;
        case 9:
            exit(0);
            break;

        default:
            printf("Invalid choice.");
            break;
        }
    }
}
void create(int data)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = NULL;
    temp->prev = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        p = start;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
        temp->prev = p;
    }
}
void display()
{
    struct node *p;
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    p = start;
    printf("The elements are:\n");
    while (p != NULL)
    {
        printf("%d", p->info);
        if (p->next != NULL)
        {
            printf(" <-> ");
        }
        p = p->next;
    }
    printf("\n");
}
void insertAtBegining(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->next = start;
    temp->prev = NULL;
    start = temp;
    display();
}
void insertInBetween(int data, int pos)
{
    struct node *temp, *p;
    p = start;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    for (i = 1; i < pos - 1; i++)
    {
        p = p->next;
    }
    if (p->next == NULL)
    {
        printf("Insersion is not possible.\n");
    }
    else
    {
        temp->next = p->next;
        temp->prev = p;
        p->next = temp;
        display();
    }
}
void insertAtLast(int data)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    p = start;
    while (p->next != NULL)
    {
        p = p->next;
    }
    temp->info = data;
    temp->next = NULL;
    temp->prev = p;
    p->next = temp;
    display();
}
void del(int pos)
{
    struct node *temp, *p;
    int c = 1;
    temp = (struct node *)malloc(sizeof(struct node));
    if (c == pos)
    {
        temp = start;
        start = start->next;
        free(temp);
        display();
        return;
    }
    p = start;
    while (p->next->next != NULL)
    {
        c++;
        if (c == pos)
        {
            temp = p->next;
            p->next = temp->next;
            free(temp);
            display();
            return;
        }
        p = p->next;
    }
    if (pos - 1 == c)
    {
        temp = p->next;
        p->next = NULL;
        free(temp);
        display();
    }
}
void sort()
{
    struct node *p, *q;
    int i, j, k, x, temp;
    k = count();
    x = k;
    for (i = 1; i < x; i++)
    {
        p = start;
        q = p->next;
        for (j = 1; j < k; j++)
        {
            if (p->info > q->info)
            {
                temp = p->info;
                p->info = q->info;
                q->info = temp;
            }
            p = p->next;
            q = q->next;
        }
        k -= 1;
    }
    display();
}
int count()
{
    struct node *p;
    int c = 0;
    p = start;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}
void reverse()
{
    struct node *p;
    p = start;
    while (p->next != NULL)
    {
        p = p->next;
    }
    while (p != NULL)
    {
        printf("%d", p->info);
        if (p->prev != NULL)
        {
            printf(" <-> ");
        }
        p = p->prev;
    }
    printf("\n");
}