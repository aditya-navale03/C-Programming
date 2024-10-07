#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // Include math.h to use the pow() function for exponentiation

struct Node {
    int coefficient;
    int exponent;
    struct Node* next;
};

struct Node* createNode(int coefficient, int exponent) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct Node** head, int coefficient, int exponent) {
    struct Node* newNode = createNode(coefficient, exponent);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display the polynomial
void displayPolynomial(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coefficient, temp->exponent);
        if (temp->next != NULL) {
            printf(" + ");
        }
        temp = temp->next;
    }
    printf("\n");
}

// Function to evaluate the polynomial at a given value of x
double evaluatePolynomial(struct Node* head, int x) {
    double result = 0.0;
    struct Node* temp = head;
    while (temp != NULL) {
        result += temp->coefficient * pow(x, temp->exponent);
        temp = temp->next;
    }
    return result;
}

int main() {
    struct Node* polynomial = NULL;
    int numTerms, coefficient, exponent, x;

    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &numTerms);

    for (int i = 0; i < numTerms; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coefficient, &exponent);
        insertNode(&polynomial, coefficient, exponent);
    }

    // Display the polynomial
    printf("The polynomial expression is: ");
    displayPolynomial(polynomial);

    // Ask the user for a value of x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Evaluate the polynomial at the given value of x
    double result = evaluatePolynomial(polynomial, x);
    printf("The result of the polynomial at x = %d is: %.2f\n", x, result);

    return 0;
}