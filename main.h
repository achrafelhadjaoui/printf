#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>



/**
 * struct flags - a struct
 * @s: string
 * @f: pointer function
 *
 */


typedef struct flags
{
	char *s;
	int (*f)(va_list arg);
} handle_flags;

int _printf(const char *format, ...);
int _string(va_list arg);
int _char(va_list arg);
int _decimal(va_list arg);
int to_char(int nb, int *count);
int to_bnr(unsigned int nb);
int _bnr(va_list arg);
int affiche_r(va_list arg);
int (*u_select(char *c))(va_list);

#endif

