#include "push_swap.h"

int f_max_runs(int max_index)
{
    int i;

    i = 0;
    while (max_index >> i != 0)
        i++;
    return (i);
}

void    f_radix(t_stack *stack_a, t_stack *stack_b)
{
    int max_runs;
    int size;
    int i;
    int j;

    i = 0;
    size = stack_a->size;
    max_runs = f_max_runs(f_find_max_index(stack_a));
    while (max_runs > i)
    {
        j = 0;
        while (j < size)
        {
            if (stack_a->top->index >> i == 0)
                pb(stack_a, stack_b);
            else
                ra(stack_a);
            j++;
        }
        while (j > size / 2) //false bei ungerader anzahl
        {
            pa(stack_a, stack_b);
            j--;
        }
        i++;
    }
}
