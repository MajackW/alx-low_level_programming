#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: name
 * @f: pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
