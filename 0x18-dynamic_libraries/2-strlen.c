#include <stdio.h>
#include "main.h"

/**
* _strlen - Function for counting the length of string
* @s: a pointer for counting the string length
* Return: int i
*/

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);
}
