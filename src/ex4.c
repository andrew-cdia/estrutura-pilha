#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main()
{
    char expressao[50];
    gets(expressao);
    char *ptr = &expressao;

    Pilha p = init_pilha();

    while (*ptr != '\0')
    {
        if (*ptr == '{' || *ptr == '[' || *ptr == '(')
        {
            push(&p, 1);
        }
        else if (*ptr == '}' || *ptr == ']' || *ptr == ')')
        {
            pop(&p);
        }
        ptr++;
    }

    if (len(&p) == 0)
    {
        printf("EXPRESSAO CORRETA");
    }
    else
    {
        printf("EXPRESSAO INCORRETA");
    }
}