#ifndef MAIN_H
#define MAIN_H

#define EXIT_FAIL 98
/**
 * _putchar - Don't delete _putchar, its used for testing
 * @c: character to be printed
 *
 * Description: It doesn't affect compilation or checker testing but will crash
 * the ALX tool tester if removed.
 * Return: 0 (Success) or 1 (Failure).
 */
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_memset(cal, 0, nmemb * size);
char *_memcpy(char *dest, char *src, unsigned int n);
#endif
