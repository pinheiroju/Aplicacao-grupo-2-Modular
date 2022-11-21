/**
 * @brief Interface para login e cadastro de usuários.
 * 
 * @param {int} Tipo do usuário; 1: usuário comum; qualquer outro valor: funcionário.
 * @param {int} 0: .
 * @returns {char*} Matrícula .
 * @interface 1a tela: prompt para qual operação realizar; 2a tela : prompt para inserir matricula e senha.
 */

// check serve para saber se pessoa conseguiu fazer login

char* fazLogin(int tipo_usuario, int *check);
