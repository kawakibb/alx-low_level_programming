#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string
 * @str: array char
 *
 * Return: 0
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count argv array
 * @argv: Arguments array
 * Return: 0
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int transf;
	int S = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			transf = atoi(argv[count]); /*ATOI --> convert string to int*/
			S += transf;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", S); /*print S*/

	return (0);
}
