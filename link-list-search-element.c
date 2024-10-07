#include <stdio.h>
#include <stdlib.h>

struct Node {
    int d;
    struct Node* n;
};

struct Node* createNode(int d) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->d = d;
    newNode->n = NULL;
    return newNode;
}

int search(struct Node* head, int key) {
    struct Node* current = head; 
    while (current != NULL) {
        if (current->d == key) {
            return 1;
        }
        current = current->n; 
    }
    return 0;  
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->d);
        current = current->n;
    }
    printf("NULL\n");
}

int main() {
    int num, data, choice, key;

    struct Node* head = NULL;
    struct Node* temp = NULL;

    printf("Enter how many elements you want to insert: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        struct Node* newNode = createNode(data);

        if (head == NULL) {
            head = newNode;
        } else {
            temp->n = newNode;
        }
        temp = newNode;
    }

    do {
        printf("Do you want to add more elements? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);

        if (choice) {
            printf("Enter new element: ");
            scanf("%d", &data);
            struct Node* newNode = createNode(data);
            temp->n = newNode;
            temp = newNode;
        }
    } while (choice);

    printList(head);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    if (search(head, key)) {
        printf("Element %d found in the list.\n", key);
    } else {
        printf("Element %d not found in the list.\n", key);
    }

    return 0;
}
