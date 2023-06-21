#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/* Function Prototypes */
void pall(stack_t **head);
void push_stack(stack_t **stack, int value);
void sint(stack_t **stack);
void free_s(stack_t *stack);
void process_f(const char *filename, stack_t **stack);
void pop_s(stack_t **stack);
void swap_swap(stack_t **stack);
void add_s(stack_t **stack);
void nop_g(stack_t **stack);

#endif /* MONTY_H */
