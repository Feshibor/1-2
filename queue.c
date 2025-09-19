#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "queue.h"

Queue* createQueue(void) {
    Queue *queue = malloc(sizeof(Queue));
    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;
    return queue;
}

Node* createNode(long long int value, Node *next, Node *prev) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = next;
    node->prev = prev;
    return node;
}

void enqueue(Queue *queue, int value) {
    Node *node = createNode(value, NULL, queue->tail);
    if (queue->tail == NULL) {
        queue->head = queue->tail = node;
    } else {
        queue->tail->next = node;
        queue->tail = node;
    }
    queue->size++;
}

void printQueue(Queue *queue) {
    Node *current = queue->head;
    while (current != NULL) {
        printf("%lld ", current->value);
        current = current->next;
    }
    printf("\n");
}

bool IsItEmpty(Queue *queue) {
    return queue->head == NULL;
}

long long int Pop(Queue *queue) {
    if (IsItEmpty(queue)) return 0;
    Node *toRemove = queue->head;
    int value = toRemove->value;
    queue->head = toRemove->next;
    if (queue->head != NULL) {
        queue->head->prev = NULL;
    }
    free(toRemove);
    queue->size--;
    return value;
}

void destroyQueue(Queue *queue) {
    Node *current = queue->head;
    while (current != NULL) {
        Node *next = current->next;
        free(current);
        current = next;
    }
    free(queue);
}

int Prime(long long int Number) {
    for (int i = 2; i <= sqrt(Number); ++i) {
        if (Number % i == 0) return 0;
    }
    return 1;
}

long long int Prostoe(long long int Number) {
    long long int b = 1;
    long long int a = 0;
    while (1) {
        if (a < 2) {
            b += 1;
        } else {
            b += 2;
        }
        if (Prime(b)) {
            a += 1;
            if (Number == a) {
                return b;
            }
        }
    }
}
