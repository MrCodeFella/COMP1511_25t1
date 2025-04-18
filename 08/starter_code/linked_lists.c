// linked_list.c
// This program was written by YOUR-NAME (zID)
// Implementation for simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

struct node *create_node(int data) {
    // TODO
    
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

struct node *insert_head(struct node *head, int data) {
    // TODO
    
    struct node *new_node = create_node(data);
    
    if (head == NULL) {
        return new_node;
    }

    new_node->next = head;
    head = new_node;
    return head;

}

struct node *insert_tail(struct node *head, int data) {
    // TODO
    struct node *new_node = create_node(data);

    if (head == NULL) {
        return new_node;
    }

    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = new_node;

    return head;

}

void print_list(struct node *head) {
    // Set current to be the first node in the list
    struct node *current = head;
    
    // Traverse the linked list and print each node 
    // until we reach the end of the list
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

int list_length(struct node *head) {
    // TODO
    
    if (head == NULL) {
        return 0;
    }

    int count = 0;

    struct node *current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    
    return count;

}
