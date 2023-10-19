#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - list
 * @str: string
 * @len: length
 * @next: next
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
