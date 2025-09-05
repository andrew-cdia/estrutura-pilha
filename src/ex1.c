#include "pilha.h"

typedef int bool;
#define true 1
#define false 0

bool pilhaCheia(Pilha *p)
{
    if (p->topo == MAX_SIZE - 1)
    {
        return true;
    }
    return false;
}

bool inserirElementoPilha(Pilha *p, REGISTRO reg) 
{ 
    if (pilhaCheia(p))
    {
        return false;
    }

    p->topo = p->topo+1; 
    p->pilha[p->topo] = reg;

    return true;
}