#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *start = NULL;

void display()
{
    struct node *q;
    if (start == NULL)
        printf("List is empty!!\n");
    else
    {
        printf("Elements in Linked List:\n");
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
    int data;
    char ch;
    struct node *q, *tmp;

    do
    {
        printf("Enter an element: ");
        scanf("%d", &data);

        tmp = malloc(sizeof(struct node));
        tmp->info = data;
        tmp->link = start; 
        start = tmp;

        printf("Do you want to insert more elements? (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    display();

    return 0;
}
