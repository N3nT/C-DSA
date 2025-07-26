#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

void push_front(Node** head, int value){
    // Inserts a new node with 'value' at the beginning of the list
    // **head - pointer to pointer to the first node
    // value - the integer to insert

    Node* new_node = (Node *)malloc(sizeof(Node));

    if(!new_node){
        printf("Memory allocation error \n");
        return;
    }

    new_node->data = value;
    new_node->next = *head;

    *head = new_node;
}

void push_back(Node** head, int value){
    // Inserts a new node with 'value' at the end of the list
    // **head - pointer to pointer to the first node
    // value - the integer to insert

    Node* new_node = (Node *)malloc(sizeof(Node));

    if(!new_node){
        printf("Memory allocation error \n");
        return;
    }

    new_node->data = value;
    new_node->next = NULL;

    if(*head == NULL){
        *head = new_node;
        return;
    }

    Node* current = *head;
    while(current->next != NULL){
        current = current->next;
    }

    current->next = new_node;
}

void delete_node(Node** head, int value){
    // Delete the first node with data equal to 'value' from the list
    // **head - pointer to pointer to the first node
    // value - the integer to delete

    if(*head == NULL) return;

    Node* current = *head;
    Node* prev = NULL;

    while(current != NULL && current->data != value){
        prev = current;
        current = current->next;
    }

    if(current == NULL){
        printf("Not found!\n");
        return;
    }

    if(prev == NULL){
        *head = current->next;
    } else{
        prev->next = current->next;
    }
    
    free(current);
}

void print_list(Node* head){
    // Prints all elements in the list
    // **head - pointer to pointer to the first node

    Node* current = head;
    while(current != NULL){
        printf("%d, ", current->data);
        current = current->next;
    }
    printf("\n");
}

void free_list(Node** head){
    // Frees all memory alocated for the list and sets head to NULL.
    // **head - pointer to pointer to the first node

    Node* current = *head;
    while(current != NULL){
        Node* next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}