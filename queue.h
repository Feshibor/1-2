#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef struct Node {
    long long int value;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct Queue {
    Node *head;
    Node *tail;
    long long int size;
} Queue;

Queue* createQueue(void);
Node* createNode(long long int value, Node *next, Node *prev);
void enqueue(Queue *queue, int value);
void printQueue(Queue *queue);
bool IsItEmpty(Queue *queue);
long long int Pop(Queue *queue);
void destroyQueue(Queue *queue);

int Prime(long long int Number);
long long int Prostoe(long long int Number);

#endif
