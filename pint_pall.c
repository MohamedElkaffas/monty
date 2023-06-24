#include "monty.h"
/**
 * s_pint - prints the value at the top of the stack
 * @stack: pointer to head/top
 * @line_number: current line number
 */
void s_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL)
	{
		free(global.content);
		fclose(global.file);
		free_stack(stack);
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", temp->n);
}

/**
 * s_pall - prints all the values on the stack,
 * starting from the top of the stack
 * @stack: head
 * @line_number: current line number
 */
void s_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (temp == NULL)
		return;
	if (line_number)
		while (temp)
			printf("%d\n", temp->n), temp = temp->next;
}
