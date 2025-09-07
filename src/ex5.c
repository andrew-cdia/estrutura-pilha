#include <stdio.h>
#include "pilha.h"

typedef int bool;
#define true 1
#define false 0

bool pilhaVazia(Pilha *p)
{
    if (p->topo == -1)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n <= 0)
    {
        return 1;
    }

    Pilha p = init_pilha();

    while (n > 0)
    {
        push(&p, n % 2);
        n /= 2;
    }

    int binary = 0;
    int resto;

    while (!pilhaVazia(&p))
    {
        binary *= 10;
        pop_res(&p, &resto);
        binary += resto;
    }

    printf("%d\n", binary);
}