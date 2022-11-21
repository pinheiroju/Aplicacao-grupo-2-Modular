#include <stdio.h>
#include <string.h>
#include "login.h"
#define TAMUSU 21
#define TAMSE 15


int buscaArq(FILE *arq, char *usuario, char *senha)
{
    int cmp; // pega retorno de strcmp 
    char usuarioArq[TAMUSU], senhaArq[TAMSE];
    while (!feof(arq))
    {
        fscanf(arq, "%[^,], %[^\n]\n", usuarioArq, senhaArq);
        cmp = strcmp(usuario, usuarioArq);
        // primeiro procuro usuario
        if (cmp == 0)
        {
            cmp = strcmp(senha, senhaArq);
            if (cmp == 0)
                return 0;
        }
    }
    return 1;
}
