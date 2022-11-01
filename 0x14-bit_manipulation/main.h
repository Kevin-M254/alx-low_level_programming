#ifndef _MAIN_H
#define _MAIN_H

int _strlen(const char *s);
unsigned int binary_to_uint(const char *b);
int _putchar(char);
void _divide(unsigned long int n);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif
