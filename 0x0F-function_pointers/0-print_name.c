#include "function_pointers.h"
	#include <stdio.h>
/**
* print_name - print name as it is
* @name: string as input
* @f: pointer to fnction adress
* Return: return  nothing
**/
	void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;


		f(name);
	}
