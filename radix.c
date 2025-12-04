#include "push_swap.h"

int f_max_runs(int max_index)
{
    int i;

    i = 0;
    while (max_index >> i != 0)
        i++;
    return (i);
}