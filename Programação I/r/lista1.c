// fahrenheit.c
// #include <stdio.h>
// int main()
// {
// float temp;
// printf("Entre com a temperatura em Fahrenheit: ");
// scanf("%f", &temp);
// temp = (temp - 32) / 1.8;
// printf("Temperatura em Celsius: %.1f\n", temp);
// return 0;
// }

// ean13.c
// int main()
// {
// int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, dv;
// printf("Entre com a primeira parte (1 dígito): ");
// scanf("%d", &n1);
// printf("Entre com a segunda parte (6 dígitos): ");
// scanf("%1d%1d%1d%1d%1d%1d", &n2, &n3, &n4, &n5, &n6, &n7);
// printf("Entre com a terceira parte, sem o dígito verificador (5 dígitos): ");
// scanf("%1d%1d%1d%1d%1d", &n8, &n9, &n10, &n11, &n12);
// dv = (n1 + n3 + n5 + n7 + n9 + n11);
// dv = dv + 3 * (n2 + n4 + n6 + n8 + n10 + n12);
// dv = dv - 1;
// dv = dv % 10;
// dv = 9 - dv;
// printf("Dígito verificador: %d\n", dv);
// return 0;
// }

// moedas.c
// #include <stdio.h>
// int main()
// {
// int valor, moedas;
// printf("Entre com a quantidade de centavos: ");
// scanf("%d", &valor);
// moedas = (int)valor / 50;
// printf("Moedas de 50 centavos: %d\n", moedas);
// valor %= 50;
// moedas = (int)valor / 25;
// printf("Moedas de 25 centavos: %d\n", moedas);
// valor %= 25;
// moedas = (int)valor / 10;
// printf("Moedas de 10 centavos: %d\n", moedas);
// valor %= 10;
// moedas = (int)valor / 5;
// printf("Moedas de 5 centavos: %d\n", moedas);
// valor %= 5;
// moedas = (int)valor / 1;
// printf("Moedas de 1 centavo: %d\n", moedas);
// return 0;
//  }

// bissexto.c
// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
// int ano;
// printf("Entre com um ano: ");
// scanf("%d", &ano);
// bool bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
// printf("Ano bissexto: %d", bissexto);
// return 0;
// }

// triangulos.c
// #include <stdio.h>
// int main()
// {
// float a, b, c;
// printf("Entre com os lados do triângulo: ");
// scanf("%f %f %f", &a, &b, &c);
// if (a + b > c && a + c > b && b + c > a)
// {
// if (a == b && b == c)
// {
// printf("Triângulo equilátero");
// }
// else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
// {
// printf("Triângulo isósceles");
// }
// else
// {
// printf("Triângulo escaleno");
// }
// }
// else
// {
// printf("Triângulo inválido");
// }
// return 0;
// }

// hms.c
// #include <stdio.h>
// int main()
// {
// int seg, min, hr;
// printf("Entre com a quantidade de segundos: ");
// scanf("%d", &seg);
// hr = (int)((int)seg / 60) / 60;
// min = (int)seg / 60 - 60 * hr;
// seg -= (60 * min + 60 * (60 * hr));
// if (hr > 0)
// {
// if (hr > 1)
// {
// printf("%d horas", hr);
// }
// else
// {
// printf("%d hora", hr);
// }
// }
// if (min > 0)
// {
// if (hr != 0)
// {
// printf(", ");
// }
// if (min > 1)
// {
// printf("%d minutos", min);
// }
// else
// {
// printf("%d minuto", min);
// }
// }
// if (seg > 0)
// {
// if (min != 0 || hr != 0)
// {
// printf(", ");
// }
// if (seg > 1)
// {
// printf("%d segundos", seg);
// }
// else
// {
// printf("%d segundo", seg);
// }
// }
// return 0;
// }

// corretagem.c
// #include <stdio.h>
// int main()
// {
// float valor, taxa;
// printf("Entre com o valor negociado: ");
// scanf("%f", &valor);
// if (valor < 2500)
// {
// taxa = 30 + (valor * 0.017);
// }
// else if (valor >= 2500 && valor < 6250)
// {
// taxa = 56 + (valor * 0.0066);
// }
// else if (valor >= 6250 && valor < 20000)
// {
// taxa = 76 + (valor * 0.0034);
// }
// else if (valor >= 20000 && valor < 50000)
// {
// taxa = 100 + (valor * 0.0022);
// }
// else if (valor >= 50000 && valor < 500000)
// {
// taxa = 155 + (valor * 0.0011);
// }
// else
// {
// taxa = 255 + (valor * 0.0009);
// }
// if (taxa < 39)
// {
// taxa = 39;
// }
// printf("Taxa de corretagem: $%.2f", taxa);
// return 0;
// }

// extenso.c
// #include <stdio.h>
// int main()
// {
// int num, dezena, unidade;
// char *extenso1 = "", *extenso2 = "";
// printf("Entre com um inteiro de 1 a 99: ");
// scanf("%d", &num);
// if (num >= 10 && num <= 19)
// {
// switch (num)
// {
// case 10:
// extenso1 = "dez";
// break;
// case 11:
// extenso1 = "onze";
// break;
// case 12:
// extenso1 = "doze";
// break;
// case 13:
// extenso1 = "treze";
// break;
// case 14:
// extenso1 = "catorze";
// break;
// case 15:
// extenso1 = "quinze";
// break;
// case 16:
// extenso1 = "dezesseis";
// break;
// case 17:
// extenso1 = "dezessete";
// break;
// case 18:
// extenso1 = "dezoito";
// break;
// case 19:
// extenso1 = "dezenove";
// break;
// }
// printf("Número por extenso: \"%s\"\n", extenso1);
// return 0;
// }
// dezena = (int)num / 10;
// unidade = num % 10;
// switch (dezena)
// {
// case 2:
// extenso1 = "vinte";
// break;
// case 3:
// extenso1 = "trinta";
// break;
// case 4:
// extenso1 = "quarenta";
// break;
// case 5:
// extenso1 = "cinquenta";
// break;
// case 6:
// extenso1 = "sessenta";
// break;
// case 7:
// extenso1 = "setenta";
// break;
// case 8:
// extenso1 = "oitenta";
// break;
// case 9:
// extenso1 = "noventa";
// break;
// }
// switch (unidade)
// {
// case 1:
// extenso2 = "um";
// break;
// case 2:
// extenso2 = "dois";
// break;
// case 3:
// extenso2 = "três";
// break;
// case 4:
// extenso2 = "quatro";
// break;
// case 5:
// extenso2 = "cinco";
// break;
// case 6:
// extenso2 = "seis";
// break;
// case 7:
// extenso2 = "sete";
// break;
// case 8:
// extenso2 = "oito";
// break;
// case 9:
// extenso2 = "nove";
// break;
// }
// if (unidade == 0)
// printf("Número por extenso: \"%s\"\n", extenso1);
// else if (dezena == 0)
// printf("Número por extenso: \"%s\"\n", extenso2);
// else
// printf("Número por extenso: \"%s e %s\"\n", extenso1, extenso2);
// return 0;
// }

// avaliacoes.c
// #include <stdio.h>
// float maximo(float x, float y)
// {
// return y < 0 ? x : x >= y ? x : y;
// }
// float media(float x, float y, float z)
// {
// return (x + y + z) / 3;
// }
// int arredonda(float x)
// {
// float y = x - (int)x;
// if (y >= 0.5)
// {
// x = (int)x + 1;
// }
// else
// {
// x = (int)x;
// }
// return x;
// }
// int main()
// {
// float p1, r1, p2, r2, p3, r3, freq;
// int res;
// printf("Entre com P1 e R1: ");
// scanf("%f %f", &p1, &r1);
// p1 = maximo(p1, r1);
// printf("Entre com P2 e R2: ");
// scanf("%f %f", &p2, &r2);
// p2 = maximo(p2, r2);
// printf("Entre com P3 e R3: ");
// scanf("%f %f", &p3, &r3);
// p3 = maximo(p3, r3);
// printf("Entre com a frequência (%%): ");
// scanf("%f", &freq);
// if (freq < 75)
// {
// res = 0;
// }
// else
// {
// res = arredonda(media(p1, p2, p3));
// }
// printf("Resultado final: %d\n", res);
// res < 6 ? printf("Situação: reprovado\n") : printf("Situação: aprovado\n");
// return 0;
// }

// arruela.c
// #include <stdio.h>
// #include <math.h>
// float circulo(float r)
// {
// return M_PI * (r * r);
// }
// float anel(float rIn, float rEx)
// {
// return (circulo(rEx / 2) - circulo(rIn / 2));
// }
// float massa(float d1, float d2, float h, float rho)
// {
// return anel(d1, d2) * h * rho;
// }
// int main()
// {
// float d1, d2, h, rho, m;
// int qnt;
// printf("Entre com o diâmetro interno (cm): ");
// scanf("%f", &d1);
// printf("Entre com o diâmetro externo (cm): ");
// scanf("%f", &d2);
// printf("Entre com a espessura (cm): ");
// scanf("%f", &h);
// printf("Entre com a densidade (g/cm³): ");
// scanf("%f", &rho);
// printf("Entre com o número de arruelas: ");
// scanf("%d", &qnt);
// m = massa(d1, d2, h, rho) * qnt;
// printf("Massa total: %.2f g\n", m);
// return 0;
// }

// temperatura.c
// #include <stdio.h>
// float cF(float t)
// {
// return 1.8 * t + 32;
// }
// float cK(float t)
// {
// return t + 273.15;
// }
// float fC(float t)
// {
// return (5.0 / 9.0) * (t - 32);
// }
// float fK(float t)
// {
// return (5.0 / 9.0) * (t - 32) + 273.15;
// }
// float kF(float t)
// {
// return (t - 273.15) * 1.8 + 32;
// }
// float kC(float t)
// {
// return t - 273.15;
// }
// float converter(float t, char origem, char destino)
// {
// switch (origem)
// {
// case 'C':
// if (destino == 'F')
// {
// t = cF(t);
// }
// else if (destino == 'K')
// {
// t = cK(t);
// }
// else
// {
// t = t;
// }
// break;
// case 'F':
// if (destino == 'C')
// {
// t = fC(t);
// }
// else if (destino == 'K')
// {
// t = fK(t);
// }
// else
// {
// t = t;
// }
// break;
// case 'K':
// if (destino == 'F')
// {
// t = kF(t);
// }
// else if (destino == 'C')
// {
// t = kC(t);
// }
// else
// {
// t = t;
// }
// break;
// default:
// break;
// }
// return t;
// }
// int main()
// {
// float t;
// char origem, destino;
// printf("Entre com o valor da temperatura: ");
// scanf("%f", &t);
// printf("Entre com a escala de origem (C, F, K): ");
// scanf(" %c", &origem);
// printf("Entre com a escala de destino (C, F, K): ");
// scanf(" %c", &destino);
// if ((origem != 'C' && origem != 'F' && origem != 'K') || (destino != 'C' && destino != 'F' && destino != 'K'))
// {
// printf("Entrada inválida");
// return 1;
// }
// t = converter(t, origem, destino);
// printf("Temperatura convertida: %.2f", t);
// return 0;
// }

// seno.c
// #include <stdio.h>
// #include <math.h>
// #define PI 3.141592653f
// float bhaskara(float x)
// {
// if (x > 180)
// {
// x = 360 - x;
// return -(4 * x * (180 - x)) / (40500 - x * (180 - x));
// }
// return (4 * x * (180 - x)) / (40500 - x * (180 - x));
// }
// float real(float x)
// {
// return sin(x * PI / 180);
// }
// int main()
// {
// float angulo;
// printf("Entre com o valor do ângulo em graus: ");
// scanf("%f", &angulo);
// printf("Valor aproximado do seno: %.4f\n", bhaskara(angulo));
// printf("Valor real do seno: %.4f\n", real(angulo));
// return 0;
// }

// cpf.c
// #include <stdio.h>
// #include <stdbool.h>
// bool valido(int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9, int d10, int d11)
// {
// int x = (10 * d1) + (9 * d2) + (8 * d3) + (7 * d4) + (6 * d5) + (5 * d6) + (4 * d7) + (3 * d8) + (2 * d9);
// x *= 10;
// x %= 11;
// if (x == 10)
// {
// x = 0;
// }
// int y = (11 * d1) + (10 * d2) + (9 * d3) + (8 * d4) + (7 * d5) + (6 * d6) + (5 * d7) + (4 * d8) + (3 * d9) + (2 * d10);
// y *= 10;
// y %= 11;
// if (y == 10)
// {
// y = 0;
// }
// return x == d10 && y == d11;
// }
// void cpf(int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9, int d10, int d11)
// {
// printf("Formato padrão: %d%d%d.%d%d%d.%d%d%d-%d%d\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
// }
// void ufs(int regiao)
// {
// switch (regiao)
// {
// case 1:
// printf("Unidades federativas: DF, GO, MT, MS, TO");
// break;
// case 2:
// printf("Unidades federativas: AC, AP, AM, PA, RO, RR");
// break;
// case 3:
// printf("Unidades federativas: CE, MA, PI");
// break;
// case 4:
// printf("Unidades federativas: AL, PB, PE, RN");
// break;
// case 5:
// printf("Unidades federativas: BA, SE");
// break;
// case 6:
// printf("Unidades federativas: MG");
// break;
// case 7:
// printf("Unidades federativas: ES, RJ");
// break;
// case 8:
// printf("Unidades federativas: SP");
// break;
// case 9:
// printf("Unidades federativas: PR, SC");
// break;
// default:
// printf("Unidades federativas: RS");
// break;
// }
// }
// int main()
// {
// int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
// printf("Entre com o CPF (somente números): ");
// scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);
// if (valido(d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11))
// {
// printf("CPF válido\n");
// cpf(d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
// ufs(d9);
// }
// else
// {
// printf("CPF inválido\n");
// }
// return 0;
// }

// evento.c
// #include <stdio.h>
// int minutos(int h, int m)
// {
// return h * 60 + m;
// }
// void horario(int min, int *h, int *m)
// {
// *h = min / 60;
// *m = min % 60;
// }
// void duracao(int hi, int mi, int hf, int mf, int *hd, int *md)
// {
// int inicio = minutos(hi, mi);
// int fim = minutos(hf, mf);
// int total = fim - inicio;
// if (total < 0)
// {
// total += 24 * 60;
// }
// horario(total, hd, md);
// }
// int main()
// {
// int hi, mi, hf, mf, hd, md;
// printf("Entre com o horário de início (HH:MM): ");
// scanf("%d:%d", &hi, &mi);
// printf("Entre com o horário de término (HH:MM): ");
// scanf("%d:%d", &hf, &mf);
// if (hi == hf && mi == mf)
// {
// printf("Duração do evento: 24:00\n");
// }
// else
// {
// duracao(hi, mi, hf, mf, &hd, &md);
// printf("Duração do evento: %02d:%02d\n", hd, md);
// }
// return 0;
// }

// si.c
// #include <stdio.h>
// #include <stdbool.h>
// bool prefixo(float x, char *p, float *y)
// {
// if (x >= 1e9)
// {
// *y = x / 1e9;
// *p = 'G';
// }
// else if (x >= 1e6)
// {
// *y = x / 1e6;
// *p = 'M';
// }
// else if (x >= 1e3)
// {
// *y = x / 1e3;
// *p = 'k';
// }
// else if (x >= 1)
// {
// *y = x;
// *p = ' ';
// }
// else if (x >= 1e-3)
// {
// *y = x * 1e3;
// *p = 'm';
// }
// else if (x >= 1e-6)
// {
// *y = x * 1e6;
// *p = 'u';
// }
// else if (x >= 1e-9)
// {
// *y = x * 1e9;
// *p = 'n';
// }
// else
// {
// return false;
// }
// return true;
// }
// int main()
// {
// float x, y;
// char p;
// printf("Entre com um número real: ");
// scanf("%f", &x);
// if (x < 1e-9 || x >= 1e12)
// {
// printf("Número fora do intervalo\n");
// }
// else
// {
// prefixo(x, &p, &y);
// printf("Representação com prefixo: %g%c\n", y, p);
// }
// return 0;
// }