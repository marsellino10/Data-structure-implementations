#include <stdio.h>
#include <stdlib.h>
typedef struct STACK
{
    int top;
    unsigned int size;
    int *arr;
}stack;

stack *create_stack(unsigned int size)
{
    stack *ptr = (stack *)malloc(sizeof(stack));
    ptr->size = size;
    ptr->top = -1;
    ptr->arr = (int*)malloc(ptr->size * sizeof(int));
    return ptr;
}

int is_stack_full(stack *ptr)
{
    return (ptr->top == ptr->size -1);
}

int is_stack_empty(stack *ptr)
{
    return (ptr->top == -1);
}

void push_to_stack(stack *ptr,int data)
{
    if(is_stack_full(ptr))
    {
        printf("the stack is already full !!\n");
        return;
    }
    ptr->top ++;
    ptr->arr[ptr->top] = data;

}

void pop_from_stack(stack *ptr)
{
    if(is_stack_empty(ptr))
    {
        printf("the stack is already empty !!\n");
        return;
    }
    ptr->top --;
}

void print_stack(stack *ptr)
{
    if(is_stack_empty(ptr))
    {
        printf("the stack is already empty !!\n");
        return;
    }
    printf("stack :");
    for(int i=0;i<=ptr->top;i++)
    {
        printf("%i\t",ptr->arr[i]);
    }
    printf("\n");
}
int main()
{
     stack *st = create_stack(5);
     push_to_stack(st,4);
     push_to_stack(st,2);
     push_to_stack(st,2002);
     print_stack(st);
     push_to_stack(st,4);
     push_to_stack(st,2);
     push_to_stack(st,2002);
     print_stack(st);
     pop_from_stack(st);
     pop_from_stack(st);
     print_stack(st);
     pop_from_stack(st);
     print_stack(st);
     pop_from_stack(st);
     print_stack(st);
     pop_from_stack(st);
     print_stack(st);
     pop_from_stack(st);
     push_to_stack(st,4);
     push_to_stack(st,2);
     push_to_stack(st,2002);
     print_stack(st);
    return 0;
}
