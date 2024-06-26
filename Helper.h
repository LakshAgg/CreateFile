/**
 * @file Helper.h
 * @author Laksh Aggarwal (aggarwallaksh54@gmail.com)
 * @version 0.1
 */
// Header include guards
#ifndef HELPER_H
#define HELPER_H
#include <stdlib.h>

typedef struct {
    char *s;
    unsigned long len, alloc;
} *string;

string new_string();
char string_append_char(string *sp, char *s2);
string new_string_from_char(char *s);
void empty_s(string s);
char append_char(string *s, char c);
char string_append(string *s, string s2);
void trim(string s);

#endif // Header include guard