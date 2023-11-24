#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
unsigned int convert(const char *s, int n);
unsigned int pw(int a, int b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
