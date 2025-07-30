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
