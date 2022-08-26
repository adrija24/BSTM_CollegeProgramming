#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *link;
} * start, *start1;

void create(int);
void create1(int);
void display();
void display1();
void merge();
void sort();
int count();
void main()
{
	int i, j, ch, m, n;
	start = NULL;
	start1 = NULL;
	while (1)
	{
		printf("\n1.Create\n");
		printf("\n2.Display\n");
		printf("\n3. Merge\n");
		printf("\n4.Exit\n");
		printf("Enter Your Choice:");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			printf("Enter No of Nodes for list-1:");
			scanf("%d", &n);
			printf("Enter Info for list-1:");
			for (i = 0; i < n; i++)
			{
				scanf("%d", &m);
				create(m);
			}
			printf("\nEnter No of Nodes for List-2:");
			scanf("%d", &n);
			printf("Enter Info for list-2:");
			for (i = 0; i < n; i++)
			{
				scanf("%d", &m);
				create1(m);
			}
			break;
		case 2:
			display();
			display1();
			break;
		case 3:
			merge();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Invalid No!");
			break;
		}
	}
}

	void create(int data)
{
	struct node *tmp, *q;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->info = data;
	tmp->link = NULL;

	if (start == NULL)
	{
		start = tmp;
	}
	else
	{
		q = start;
		while (q->link != NULL)
		{
			q = q->link;
		}
		q->link = tmp;
	}
}
void create1(int data)
{
	struct node *tmp, *q;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->info = data;
	tmp->link = NULL;

	if (start1 == NULL)
	{
		start1 = tmp;
	}
	else
	{
		q = start1;
		while (q->link != NULL)
		{
			q = q->link;
		}
		q->link = tmp;
	}
}
void display()
{
	struct node *q;
	if (start == NULL)
	{
		printf("List-1 is Empty!");
	}
	q = start;
	printf("\n");
	printf("Elements of the list-1:\n");
	while (q != NULL)
	{
		printf("%d", q->info);
		if (q->link != NULL)
			printf("-> ");
		q = q->link;
	}
	printf("\n");
}
void display1()
{
	struct node *q;
	if (start1 == NULL)
	{
		printf("List-2 is Empty!");
	}
	q = start1;
	printf("\n");
	printf("Elements of the list-2:\n");
	while (q != NULL)
	{
		printf("%d", q->info);
		if (q->link != NULL)
			printf("-> ");
		q = q->link;
	}
	printf("\n");
}
void merge()
{
	struct node *p;
	p = start;

	while (p->link != NULL)
	{
		p = p->link;
	}
	p->link = start1;
	sort();
	display();
}
void sort()
{
	int i, j, k, temp, x;
	struct node *p, *q;
	k = count();
	x = k;
	for (int i = 0; i < x - 1; i++)
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
		k--;
	}
}
int count()
{
	struct node *q;
	q = start;
	int c = 0;
	while (q != NULL)
	{
		c++;
		q = q->link;
	}
	return c;
}