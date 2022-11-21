int buscaArq(FILE *arq, char *usuario, char *senha);

/** 
 * @param {char*} Nome do arquivo com os cadastros.
 * @param {char*} Matrícula inserida pelo usuário.
 * @param {char*} Senha inserida pelo usuário.
 * @returns {int} 1: para cadastro com sucesso; 2: se o par matrícula e senha ja esteja cadastrado; 0: caso já exista matrícula com outra senha.
 */
int cadastrar(FILE *arq, char *usuario, char *senha);
