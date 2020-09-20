#include "circular_queue.h"

circular *create_circular_queue(int capacity)
{
    circular *ptr = (circular *)malloc(sizeof(circular));
    ptr->head = -1;
    ptr->tail = -1;
    ptr->capacity = capacity;
    ptr->arr = (int *)malloc(ptr->capacity * sizeof(int));
    return ptr;
}

int is_queue_full(circular *ptr)
{
    return ((ptr->head==0 && ptr->tail==ptr->capacity-1) || ptr->head==ptr->tail+1);
}

int is_queue_empty(circular *ptr)
{
    return (ptr->head==-1 && ptr->tail==-1);
}


void add_to_queue(circular *ptr,int data)
{
    if(is_queue_full(ptr))
    {
        printf("the queue is already full !!\n");
        return;
    }
    else if(is_queue_empty(ptr))
    {
        ptr->head=0;
        ptr->tail=0;
        ptr->arr[ptr->tail] = data;
        return;
    }
    ptr->tail = (ptr->tail + 1) % ptr->capacity;
    ptr->arr[ptr->tail] = data;
}

void delete_from_queue(circular *ptr)
{
    if(is_queue_empty(ptr))
    {
        printf("the queue is already empty !!\n");
        return;
    }
    else if(ptr->head == ptr->tail)
    {
        ptr->head = -1;
        ptr->tail = -1;
        return;
    }
    ptr->head = (ptr->head + 1) % ptr->capacity;
}

void print_circular_queue(circular *ptr)
{
    int i;
    if(is_queue_empty(ptr))
    {
        printf("the queue is already empty !!\n");
        return;
    }
    printf("circular queue : ");
    for(i=ptr->head; i != ptr->tail; i=(i+1) % ptr->capacity)
    {
        printf("%i\t",ptr->arr[i]);
    }
    printf("%i",ptr->arr[i]);
    printf("\n");
}
