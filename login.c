#include <stdio.h>
#include <string.h>
#include "login.h"
#define TAMUSU 21
#define TAMSE 15


/* usa funcao de busca para encontrar se o login inserido existe dentro do arquivo,
caso seja encontrado retorna 0
caso nao seja encontrado retorna 1
na main 1 enviara mensagem de erro "login ou senha invalido"
0 entrara na aplicacao*/
// recebe da busca 0 se existe e 1 se nao existe

// manda arquivo ja aberto que contem todos os logins ja cadastrados
// para testar 

int buscaArq(FILE *arq, char *usuario, char *senha)
{
    int cmp1, cmp2; // pega retorno de strcmp 
    char usuarioArq[TAMUSU], senhaArq[TAMSE];
    while (!feof(arq))
    {
        fscanf(arq, "login: %[^,], senha: %[^\n]\n", usuarioArq, senhaArq);
        cmp1 = strcmp(usuario, usuarioArq);
        // primeiro procuro usuario
        if (cmp1 == 0)
        {
            cmp2 = strcmp(senha, senhaArq);
            if (cmp2 == 0)
                return 0;
        }
    }
    if (cmp1 == 0)
        printf("Senha invalida\n");
    else 
        printf("Usuario invalido\n");
    return 1;
}
