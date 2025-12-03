
int	t_rotate(t_stack *stack)
{
	t_number	*first;
	t_number	*last;
	t_number	*second;
	t_number	*prev_last;

	if (stack->size < 3 || !stack->top || !stack->bottom)
		return (0);
	first = stack->top;
	last = stack->bottom;
	second = first->next;
	prev_last = stack->bottom->previous;
	stack->top = last;
	stack->top->next = second;
	prev_last->next = first;
	first->next = NULL;
	return (1);
}
