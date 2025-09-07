#include <stdio.h>
#include "pilha.h"

int main()
{
    int n;

    printf("Tamanho: ");
    scanf("%d", &n);

    if (n > MAX_SIZE)
    {
        return 1;
    }

    Pilha p = init_pilha();

    int elemento;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &elemento);
        push(&p, elemento);
    }

    percorreLIFO(&p);

    return 0;
}