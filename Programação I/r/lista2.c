// // // collatz.c
// // #include <stdio.h>
// // int main()
// // {
// // long long termo;
// // int passos = 0;
// // printf("Entre com o termo inicial: ");
// // scanf("%lld", &termo);
// // if (termo != 1)
// // {
// // printf("Sequência de Collatz: [%lld, ", termo);
// // while (termo > 1)
// // {
// // if (termo % 2 == 0)
// // {
// // termo /= 2;
// // }
// // else
// // {
// // termo = termo * 3 + 1;
// // }
// // printf("%lld", termo);
// // if (termo != 1)
// // {
// // printf(", ");
// // }
// // passos++;
// // }
// // printf("]\n");
// // printf("Número de passos: %d\n", passos);
// // }
// // else
// // {
// // printf("Sequência de Collatz: [1]\n");
// // printf("Número de passos: 0\n");
// // }
// // return 0;
// // }

// // palavras.c
// // #include <stdio.h>
// // int main()
// // {
// // char cat, can = ' ';
// // int qnt = 0;
// // printf("Entre com um texto: ");
// // do
// // {
// // scanf("%c", &cat);
// // if (cat != ' ' && cat != '\n' && can == ' ')
// // {
// // qnt++;
// // }
// // can = cat;
// // } while (cat != '\n');
// // printf("Número de palavras: %d\n", qnt);
// // return 0;
// // }

// // rpg.c
// #include <stdio.h>
// int nivel_minimo(int v0, int inc, int v)
// {
// int nivel = 0;
// int vitalidade = v0;
// while (vitalidade < v)
// {
// nivel++;
// if (nivel % 5 == 0)
// {
// vitalidade += 2 * inc;
// }
// else
// {
// vitalidade += inc;
// }
// }
// return nivel;
// }
// int main()
// {
// int classe, v, nm;
// int v0, inc;
// printf("Entre com a classe (1-arqueiro, 2-bárbaro, 3-druida, 4-mago): ");
// scanf("%d", &classe);
// switch (classe)
// {
// case 1:
// v0 = 150;
// inc = 10;
// break;
// case 2:
// v0 = 200;
// inc = 15;
// break;
// case 3:
// v0 = 100;
// inc = 5;
// break;
// case 4:
// v0 = 100;
// inc = 5;
// break;
// default:
// printf("Classe inválida\n");
// return 0;
// }
// printf("Entre com a vitalidade desejada: ");
// scanf("%d", &v);
// nm = nivel_minimo(v0, inc, v);
// printf("Nível necessário: %d\n", nm);
// return 0;
// }

// acesso.c
// #include <stdio.h>
// #define TENTATIVAS 3
// #define SENHA 314159
// int main()
// {
// int t = TENTATIVAS, senha;
// while (t > 0)
// {
// printf("Entre com a senha: ");
// scanf("%d", &senha);
// if (senha == SENHA)
// {
// printf("Acesso autorizado\n");
// break;
// }
// else
// {
// printf("Acesso negado (senha incorreta)\n");
// t--;
// }
// }
// if (t == 0)
// {
// printf("Sistema bloqueado\n");
// }
// return 0;
// }

// maior.c
// #include <stdio.h>
// int main()
// {
// int num_maior = 0, qnt = 0, n;
// printf("Entre com inteiros positivos. Entre com 0 ou um inteiro negativo para terminar.\n");
// do
// {
// printf("> ");
// scanf(" %d", &n);
// if (n > num_maior)
// {
// num_maior = n;
// qnt = 1;
// }
// else if (n == num_maior)
// {
// qnt++;
// }
// } while (n > 0);
// if (qnt == 1)
// {
// printf("O maior inteiro foi %d, que ocorreu apenas uma vez.\n", num_maior);
// }
// else
// {
// printf("O maior inteiro foi %d, que ocorreu %d vezes.\n", num_maior, qnt);
// }
// return 0;
// }