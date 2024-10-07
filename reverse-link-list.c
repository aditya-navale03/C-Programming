#include<stdio.h>
#include<stdlib.h>

//create node
struct Node{
    int data;
    struct Node *next;
};

//print linkist
void PrintLinkList(struct Node *ptr){
    while(ptr != NULL){
    printf("%d\n",ptr->data);
    ptr = ptr->next;
}};

void FreeLinkList(struct Node* head) {
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp); // Release memory for each node
    }
}

//reverse linklist
struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* curr = head;
    struct Node* next;

    while (curr != NULL) {
        next = curr->next; // Store the next node
        curr->next = prev; // Reverse current node's next pointer
        prev = curr;       // Move pointers one position ahead
        curr = next;
    }

    return prev; // New head of reversed list
}
int main(){

    //assign 
struct Node *head;
struct Node *second;
struct Node *third;

head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));

//assign value and next ptr value
head->data= 44;
head->next = second;

second->data = 88;
second->next = third;

third->data = 22;
third->next = NULL;

PrintLinkList(head);
head = reverseList(head);
printf("after reverse:\n");
PrintLinkList(head);
//free memory when we use malloc or calloc
FreeLinkList(head);
    head = NULL;
printf("memeory freedup!");
return 0;

}