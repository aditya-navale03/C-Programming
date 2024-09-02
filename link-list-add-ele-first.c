#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
} *start = NULL;

void display()
{
    struct node *q;
    if (start == NULL)
        printf("List is empty!!\n");
    else
    {
        printf("*Elements in Linked List*\n");
        q = start;
        while (q != NULL)
        {
            printf("%d\t", q->info);
            q = q->link;
        }
        printf("\n");
    }
}

int main(void)
{
    setbuf(stdout, NULL);
    int data, n;
    char ch;
    struct node *q, *tmp;

    
    printf("How many elements do you want to insert? ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &data);
        tmp = malloc(sizeof(struct node));
        tmp->info = data;
        tmp->link = NULL;
        if (start == NULL)
            start = tmp;
        else
        {
            q = start;
            while (q->link != NULL)
                q = q->link;
            q->link = tmp;
        }
    }

    
    display();

    
    do
    {
        printf("Do you want to insert a new element at the start? (y/n): ");
        scanf(" %c", &ch);

        if (ch == 'y' || ch == 'Y')
        {
            printf("Enter the new element:\n");
            scanf("%d", &data);

            tmp = malloc(sizeof(struct node));
            tmp->info = data;
            tmp->link = start;
            start = tmp;

            
            display();
        }
    } while (ch == 'y' || ch == 'Y');

    return 0;
}
