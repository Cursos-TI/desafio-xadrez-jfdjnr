#include <stdio.h>

void torre(int casas, int dir){
    if (casas > 0)
    {
        switch (dir)
        {
        case 1: 
            printf("Direita!\n");
            break;
        case 2:
            printf("Esquerda!\n");
            break;
        case 3:
            printf("Cima!\n");
            break;
        case 4:
            printf("Baixo!\n");
            break;
        default:
            printf("Você digitou uma opção inválida...\n");
            break;
        }
    torre(casas - 1, dir);
    }
}

void rainha(int casas, int dir){
    if (casas > 0)
    {
        switch (dir)
        {
        case 1: 
            printf("Direita!\n");
            break;
        case 2:
            printf("Esquerda!\n");
            break;
        case 3:
            printf("Cima!\n");
            break;
        case 4:
            printf("Baixo!\n");
            break;
        case 5:
            printf("Direita!\n");
            printf("Cima!\n");
            break;
        case 6:
            printf("Esquerda!\n");
            printf("Cima!\n");
            break;
        case 7:
            printf("Direita!\n");
            printf("Baixo!\n");
            break;
        case 8:
            printf("Esquerda!\n");
            printf("Baixo!\n");
            break;
        default:
            printf("Você digitou uma opção inválida...\n");
            break;
        }
    rainha(casas - 1, dir);
    }
}

void bispo(int casas, int dir){
    if (casas > 0)
    {
        switch (dir)
        {
        case 1: 
            printf("Direita!\n");
            printf("Cima!\n");
            break;
        case 2:
            printf("Esquerda!\n");
            printf("Cima!\n");
            break;
        case 3:
            printf("Direita!\n");
            printf("Baixo!\n");
            break;
        case 4:
            printf("Esquerda!\n");
            printf("Baixo!\n");
            break;
        default:
            printf("Você digitou uma opção inválida...\n");
            break;
        }
    bispo(casas - 1, dir);
    }
}
    

void cavalo(int casas){
    if (casas > 0){
        printf("Cima!\n");
    } else 
        printf("Direita!\n");
    cavalo(casas - 1);
}
int main(){

    int casas, dir;
    printf("###Bem Vindos ao Jogo de Xadrez###\n");
    printf("\n");
    printf("Vamos Mover a torre! \n");
    printf("Escolha uma das opções abaixo: \n");
    printf("1. Mover para a Direita. \n");
    printf("2. Mover para a Esquerda. \n");
    printf("3. Mover para Cima. \n");
    printf("4. Mover para Baixo. \n");
    scanf("%d", &dir);
    printf("Digite o Numero de Casa: \n");
    scanf("%d", &casas);
    torre(casas, dir);

    casas = 0;
    dir = 0;

    printf("\n");
    printf("Vamos Mover o Bispo! \n");
    printf("Escolha uma das opções abaixo: \n");
    printf("1. Mover para a Direita Superior. \n");
    printf("2. Mover para a Esquerda Superior . \n");
    printf("3. Mover para a Direita Inferior. \n");
    printf("4. Mover para a Esquerda Inferior. \n");
    scanf("%d", &dir);
    printf("Digite o Numero de Casa: \n");
    scanf("%d", &casas);
    bispo(casas, dir);

    casas = 0;
    dir = 0 ;

    printf("\n");
    printf("Vamos Mover a Rainha! \n");
    printf("Escolha uma das opções abaixo: \n");
    printf("1. Mover para a Direita. \n");
    printf("2. Mover para a Esquerda. \n");
    printf("3. Mover para Cima. \n");
    printf("4. Mover para Baixo. \n");
    printf("5. Mover para a Direita Superior. \n");
    printf("6. Mover para a Esquerda Superior . \n");
    printf("7. Mover para a Direita Inferior. \n");
    printf("8. Mover para a Esquerda Inferior. \n");
    scanf("%d", &dir);
    printf("Digite o Numero de Casa: \n");
    scanf("%d", &casas);
    rainha(casas, dir);

    casas = 0;
    dir = 0;

    printf("\n");
    printf("Vamos Mover o Cavalo! \n");
    casas = 2;
    cavalo(casas);

    return 0;


}