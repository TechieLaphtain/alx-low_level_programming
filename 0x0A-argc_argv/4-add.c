#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if a string contains only digits
 * @str: input string
 *
 * Return: 1 if all characters in the string are digits, 0 otherwise
 */
int check_num(char *str)
{
    unsigned int count = 0;

    while (count < strlen(str))
    {
        if (!isdigit(str[count])) /* check if the character is a digit */
        {
            return (0);
        }
        count++;
    }

    return (1);
}

/**
 * main - Print the sum of valid integers in the input arguments
 * @argc: Count of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
    int count;
    int str_to_int;
    int sum = 0;

    count = 1;
    while (count < argc)
    {
        if (check_num(argv[count]))
        {
            str_to_int = atoi(argv[count]); /* Convert string to int */
            sum += str_to_int;
        }
        else
        {
            printf("Error\n");
            return (1);
        }

        count++;
    }

    printf("%d\n", sum);

    return 0;
}
