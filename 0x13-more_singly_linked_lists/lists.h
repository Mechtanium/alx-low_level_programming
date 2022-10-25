#ifndef MAIN_H /* You may change this (e.g. main.h becomes MAIN_H)*/
#define MAIN_H /* You may change this (e.g. main.h becomes MAIN_H)*/
#define SIGNED_FLAG 0
#define UNSIGNED_FLAG 1
#define UPPER_CASE 1
#define LOWER_CASE 0

/**
 * buffer - Structure buffer.
 * @buf: write buffer
 * @pos: position
 *
 * Description: Holds buffer pointer and size.
 */
typedef struct buffer
{
	char *buf;
	int pos;
} buffer;

/*Prototypes*/
int _putchar(char c);
int _printf(const char *format, ...);
void format_writter(const char *format, int *n, va_list ls, buffer *b);
void revstr(char *str1);
void itoa(long int n, char *s, int base);
void char_writer(char *str, buffer *b);
void number_writer(va_list ls, int base, int sign_flag, int case_, buffer *b);
char get_alpha(long int index);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);



#endif
