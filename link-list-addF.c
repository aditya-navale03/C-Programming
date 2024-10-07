//linklist add first
#include<stdio.h>
#include<stdlib.h>

//create node
struct Node{
    int data;
    struct Node *next;
};

//print linklist
void LinkListPrint(struct Node *ptr){
    while(ptr != NULL){
    printf("|Elements: %d |\n---------------\n",ptr->data);
    ptr = ptr->next;
    }
}

//create node to add at first
struct Node *InsertAtFirst(struct Node *head,int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main() {

//assign memory 

struct Node *head;
struct Node *second;
struct Node *third;

head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));

//assign value and address of next
head->data= 66;
head->next = second;

second->data = 77;
second->next = third;

third->data = 44;
third->next = NULL;

printf("link list at first\n");
LinkListPrint(head);
head = InsertAtFirst(head, 22);
printf("link list after insert at first\n\n");
LinkListPrint(head);


}