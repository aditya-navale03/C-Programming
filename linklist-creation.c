//how to create a link list
#include<stdio.h>
#include<stdlib.h>
//create a node


struct Node{
    int data;
    struct Node *next
};

int main() {

//assign memeory

struct Node *head;
struct Node *second;
struct Node *third;

head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));

//assign data and next adddress to them

head->data = 7;
head->next = second;

second->data = 77;
second->next = third;

third->data = 66;
third->next = NULL;

return 0;
}