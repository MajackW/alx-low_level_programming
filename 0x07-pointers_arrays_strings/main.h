#ifdef MAIN_H
#define MAIN_H

char *_strchr(char *s, char c);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

char *_strpbrk(char *s, char *accept);

void print_diagsums(int *a, int size);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

#endif
