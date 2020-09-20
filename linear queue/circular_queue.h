#include <stdio.h>
#include <stdlib.h>

typedef struct QUEUE
{
    int head,tail;
    unsigned int capacity;
    int *arr;
}circular;

circular *create_circular_queue(int capacity);
int is_queue_full(circular *ptr);
int is_queue_empty(circular *ptr);
void add_to_queue(circular *ptr,int data);
void delete_from_queue(circular *ptr);
void print_circular_queue(circular *ptr);
