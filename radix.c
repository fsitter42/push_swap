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
    int i;

    i = 0;
    max_runs = f_max_runs(f_find_max_index(stack_a));
    while (max_runs > i)
    {
        if (stack_a->top->index >> i == 0)
            

    }

}