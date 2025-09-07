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

bool excluirElementoPilha(Pilha* p, REGISTRO* reg) 
{ 
    if (pilhaVazia(p)) 
    {
        return false;
    }

    *reg = p->pilha[p->topo]; 
    p->topo = p->topo - 1; 

    return true;
}

int main(){}