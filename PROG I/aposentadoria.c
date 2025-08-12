#include <stdio.h>

int main(){
    int idade, tempo;

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Tempo de serviço: ");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)){
        printf("Tá podendo\n");
    }
    else {
        printf("Não tá podendo\n");
    }
    return 0;
}