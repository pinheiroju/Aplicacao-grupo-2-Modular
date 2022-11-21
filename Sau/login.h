/**
 * @brief Usa funcao de busca para encontrar se o login (par matrícula e senha) inserido existe dentro do arquivo com os cadastros de login.
 * 
 * @param {char*} Nome do arquivo com todos os cadastros de login.
 * @param {char*} Matrícula inserida pelo usuário.
 * @param {char*} Senha inserida pelo usuário.
 * @returns {int} 0: caso encontrar; 1: caso não encontrar.
 */

/*
na main
 1: enviara mensagem de erro "login ou senha invalido"
 0: entrara na aplicacao*/
 
 int buscaArq(FILE *arq, char *usuario, char *senha);
