void reset_to_98(int *n);
void swap_int(int *a, int *);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void rev_string(char *s);
void print_rev(char *s);
void puts2(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
