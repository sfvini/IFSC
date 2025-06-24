// #include <stdio.h>

// // fahrenheit.c
// // int main()
// // {
// //     float temp;

// //     printf("Entre com a temperatura em Fahrenheit: ");
// //     scanf("%f", &temp);

// //     temp = (temp - 32) / 1.8;

// //     printf("Temperatura em Celsius: %.1f\n", temp);

// //     return 0;
// // }

// // ean13.c
// int main()
// {
//     int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, dv;

//     printf("Entre com a primeira parte (1 dígito): ");
//     scanf("%d", &n1);

//     printf("Entre com a segunda parte (6 dígitos): ");
//     scanf("%1d%1d%1d%1d%1d%1d", &n2, &n3, &n4, &n5, &n6, &n7);

//     printf("Entre com a terceira parte, sem o dígito verificador (5 dígitos): ");
//     scanf("%1d%1d%1d%1d%1d", &n8, &n9, &n10, &n11, &n12);

//     dv = (n1 + n3 + n5 + n7 + n9 + n11); 
//     dv = dv + 3 * (n2 + n4 + n6 + n8 + n10 + n12);
//     dv = dv - 1;
//     dv = dv % 10;
//     dv = 9 - dv;

//     printf("Dígito verificador: %d\n", dv);

//     return 0;
// }