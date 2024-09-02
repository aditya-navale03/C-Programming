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
    }
}

int main(void)
{
    // setbuf(stdout, NULL);
    int data,j=1;
    char ch;
    struct node *q, *tmp;

    for(int i=0;i<j;i++)
    {
        printf("Enter an element:\n");
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

    printf("Do you want to insert more elements? (y/n): ");
    scanf(" %c",&ch);
    
    if(ch == 'y' || ch == 'Y'){
        j++;
    }}

    display();

    return 0;
}