#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
* main - Entry point //ZAKARIA
* @argc: Number of cmd args
* @argv: Array of args
*
* Return: 0 on success or fail
*/
int main(int argc, char *argv[])
{
if (argc != 2 || argv[1])
{
fprintf(stderr, "Usage: monty file\n");
exit(EXIT_FAILURE);
}
return (0);
}

