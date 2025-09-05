#include <stdio.h>

#define MAX_SIZE 100
#define REGISTRO int

typedef struct
{
    REGISTRO pilha[MAX_SIZE];
    int topo;
} Pilha;

void push(Pilha *p, REGISTRO n)
{
    if (p->topo < MAX_SIZE - 1)
    {
        p->topo++;
        p->pilha[p->topo] = n;
    }
    return;
}

void pop_res(Pilha *p, REGISTRO* reg)
{
    if (p->topo > -1)
    {
        *reg = p->pilha[p->topo];
        p->topo--;
    }
}

void pop(Pilha *p)
{
    if (p->topo > -1)
    {
        p->topo--;
    }
}

int len(Pilha *p)
{
    return p->topo + 1;
}

void percorre(Pilha *p)
{
    for (int i = 0; i <= p->topo; i++)
    {
        printf("%d\n", p->pilha[i]);
    }
}

void percorreLIFO(Pilha *p)
{
    for (int i = p->topo; i > -1; i--)
    {
        printf("%d\n", p->pilha[i]);
    }
}

Pilha init_pilha()
{
    Pilha p;
    p.topo = -1;
    return p;
}

void reinit(Pilha *p)
{
    p->topo = -1;
}