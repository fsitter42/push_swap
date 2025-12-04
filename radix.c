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
    while (max_runs >= i)
    {
        j = 0;
        while (j++ < size) // entwede hier j++ falls es hier nicht passt einfach f_call_radix wo ich max_runs ausführe und and f_radix(sa, sb, mr) übergebe
        {
            if (stack_a->top->index & (1 << i))
                ra(stack_a);
            else
                pb(stack_a, stack_b);
            // j++; // oder hier j++;

        }
        while (stack_b->size != 0)
            pa(stack_a, stack_b);
        if (f_is_sorted(stack_a))
            break;
        i++;
    }
}

int f_is_sorted(t_stack *stack_a)
{
    t_number *current;

    current = stack_a->top;
    while (current && current->next)
    {
        if (current->index > current->next->index)
            return (0);
        current = current->next;
    }
    return (1);
}
