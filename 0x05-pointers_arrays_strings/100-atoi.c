#include "main.h"

/**
 * _atoi - convert string to an integer
 * @s: Pointer to a character string
 *
 * Return: void
 */

int _atoi(char *s)
{
	int sigh;
	unsigned int num;
	char "temp;

	temp = s;
	num = 0;
	sign = 1;
	while
		(*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp =='-')
			sigh *= -1;
		temp++;
	}
	if (*temp !=x'\0')
	{
		do{
			num = num * 10 + (*temp - '0');
			temp++;
		}
		while (*temp >= '0' && *temp <= '9');
	}
	return (num *sign);
}

