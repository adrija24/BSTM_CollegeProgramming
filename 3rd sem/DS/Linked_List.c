#include <stdio.h>
#include <stdlib.h>

void create(int);
void display();
void insertAtBeg(int);
void insertInBetween(int, int);
void insertAtLast(int);
void del(int);
void sort();
int count();
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
        printf("3. Insert at begining \n");
        printf("4. Insert in between \n");
        printf("5. Insert at last \n");
        printf("6. Delete \n");
        printf("7. Sorting \n");
        printf("8. Reverse \n");
        printf("9. Exit \n");
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
            printf("Enter the value of new node: \n");
            scanf("%d", &elm);
            insertAtBeg(elm);
            break;
        case 4:
            printf("Enter information: \n");
            scanf("%d", &elm);
            printf("Enter the position: \n");
            scanf("%d", &pos);
            insertInBetween(elm, pos);
            break;
        case 5:
            printf("Enter information: \n");
            scanf("%d", &elm);
            insertAtLast(elm);
            break;
        case 6:
            printf("Enter the value which you want to delete: \n");
            scanf("%d", &elm);
            del(elm);
            break;
        case 7:
            sort();
            break;
        case 8:
            reverse();
            break;
        case 9:
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

void insertAtBeg(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
    display();
}

void insertInBetween(int data, int pos)
{
    struct node *temp, *q;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    q = start;
    int i;
    for (i = 1; i < pos - 1; i++)
    {
        q = q->link;
    }
    if (q->link == NULL)
    {
        printf("Insertion not possible.");
        return;
    }

    temp->link = q->link;
    q->link = temp;
    display();
}

void insertAtLast(int val)
{
    struct node *temp, *q;
    q = start;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = val;
    temp->link = NULL;
    while (q->link != NULL)
    {
        q = q->link;
    }
    q->link = temp;
    display();
}

void del(int val)
{
    struct node *temp, *q;
    if (start->info == val)
    {
        temp = start;
        start = start->link;
        free(temp);
        display();
        return;
    }
    q = start;
    while (q->link->link != NULL)
    {
        if (q->link->info == val)
        {
            temp = q->link;
            q->link = temp->link;
            free(temp);
            display();

            return;
        }
        q = q->link;
    }
    if (q->link->info == val)
    {
        temp = q->link;
        q->link = NULL;
        free(temp);
    }
    display();
}

void sort()
{
    int x, i, j, k, temp;
    struct node *p, *q;
    k = count();
    x = k;
    for (i = 1; i < x; i++)
    {
        p = start;
        q = p->link;
        for (j = 1; j < k; j++)
        {
            if (p->info > q->info)
            {
                temp = p->info;
                p->info = q->info;
                q->info = temp;
            }
            p = p->link;
            q = q->link;
        }
        k -= 1;
    }
    display();
}
int count()
{
    int c = 0;
    struct node *q;
    q = start;
    while (q != NULL)
    {
        c++;
        q = q->link;
    }
    return c;
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
