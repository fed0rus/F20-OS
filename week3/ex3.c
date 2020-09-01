#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};

void insert_node(struct node* head, int val, int* len) {
    struct node* currentNode = head;

    for (int i = 0; i < *len; i++) {
        currentNode = currentNode->next;
    }

    *len += 1;
    struct node* nextNode = malloc(sizeof(struct node));
    nextNode->val = val;
    currentNode->next = nextNode;
}

void print_list(struct node* head, int len) {
    struct node* currentNode = head;

    for (int i = 0; i < len; i++) {
        currentNode = currentNode->next;
        printf("%d ", currentNode->val);
    }
}

void delete_node(struct node* head, int* len, int value) {
    struct node* currentNode = head;
    struct node* prev;

    for (int i = 0; i < *len; i++) {
        prev = currentNode;
        currentNode = currentNode->next;
        if (currentNode->val == value) {
            prev->next = currentNode->next;
            *len -= 1;
        }
    }
}

int main() {
    int len = 0;
    struct node* head = malloc(sizeof(struct node));

    insert_node(head, 5, &len);
    insert_node(head, 10, &len);
    printf("List printing example: \n");
    print_list(head, len);
    printf("\nInsertion example: add 15\n");
    insert_node(head, 15, &len);
    print_list(head, len);
    printf("\nDeletion example: remove 10\n");
    delete_node(head, &len, 10);
    print_list(head, len);
}