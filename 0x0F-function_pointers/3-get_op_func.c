#include "3-calc.h"
#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>

=======
#include "3-calc.h"
>>>>>>> d8d9c1980e9f93fde897e444a8da9f59e0bbbe9d
/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 *
 * @s: is the operator passed as argument to the program
 *
 * Return: returns a pointer to the function
 * that corresponds to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
