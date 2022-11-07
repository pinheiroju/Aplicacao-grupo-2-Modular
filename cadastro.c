#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cadastro.h"
#include "login.h"
#define TAMUSU 21
#define TAMSE 15

// retorna 0 para ja existe
// retorna 1 para cadastrado 
int cadastrar(FILE *arq, char *usuario, char *senha)
{
    // primeiro busco para ver se ja nao existe 
    int retorno;
    retorno = buscaArq(arq, usuario, senha);
    if(retorno==0) // foi encontrado
        return retorno;
    fprintf(arq, "login: %s, senha: %s\n", usuario, senha);
    return 1;
}


