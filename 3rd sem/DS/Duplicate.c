#include<stdio.h>
#include<stdlib.h>
void create(int);
void display();
void delDuplicates();
int count();
struct node {
    int info;
    struct node *link;
} *start;
void main()
{
    int ch, n, elm;
    while(1)
    {
        printf("\n------MENU------\n");
        printf("1. Create \n");
        printf("2. Display \n");
        printf("3. Delete Duplicate Nodes \n");
        printf("4. Exit \n");
        printf("\nEnter your Choise: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the no. of nodes: ");
            scanf("%d",&n);
            printf("Enter the informations: ");
            for(int i = 1; i <= n; i++)
            {
                scanf("%d", &elm);
                create(elm);
            }
            break;
        case 2:
            display();
            break;
        case 3:
            delDuplicates();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Enter correct choise\n");
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
        if(q->link != NULL)
            printf("-> ");
        q = q->link;
    }
    printf("\n");
}
void delDuplicates()
{
    struct node *p, *q, *temp;
    p = start;
    while(p->link != NULL)
    {
        q = p;
        while (q->link != NULL)
        {
            if(p->info == q->link->info) {
                temp = q->link;
                q->link = q->link->link;
                free(temp);
            }
            q = q->link;
        }
        p = p->link;
    }
    display();
}