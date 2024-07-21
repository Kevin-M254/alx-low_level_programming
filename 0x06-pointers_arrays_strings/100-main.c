#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[] = "One full sentence please\n";
	char *p;

	p = rot13(s);
	printf("%s\n", p);
	printf("%s\n", s);
	return (0);
}
