#include<stdio.h>
#include<stdlib.h>

//create a node structure
struct Node{
    int data;
    struct Node *next;
};

//print linklist

void PrintLinkList(struct Node *ptr){
    while(ptr != NULL){
    printf("-> %d ",ptr->data);
    ptr = ptr->next;
}}

//insert element at first

struct Node *InsertAtFirst(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main() {
    //assign size
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    //assign value andf next appay ptr
    head->data = 66;
    head->next = second;

    second->data = 33;
    second->next= third;

    third->data = 77;
    third->next = NULL;

    PrintLinkList(head);
    printf("\n");
    head = InsertAtFirst(head, 22);
    printf("\n");
   PrintLinkList(head);
    return 0;
}