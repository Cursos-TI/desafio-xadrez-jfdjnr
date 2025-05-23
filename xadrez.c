#include <stdio.h>

int main() {
    
    int numcasas, i;

    //tela de apresentação 
    printf("Bem Vindo ao jogo de Xadrez\n");
    printf("Vamos começar?\n");

    //entrada do usuario para escolha do numero de casas.
    printf("Escolha o numero de casas que deseja mover a Rainha: \n");
    scanf("%d", &numcasas);

    //estrutura FOR para movimento da rainha.
    for (i = 0; i <= numcasas; i++){
        printf("Esquerda!\n");
    }
    
    //seta as variaveis para valor 0.
    numcasas = 0;
    i = 0;

     //entrada do usuario para escolha do numero de casas.
    printf("Agora escolha o numero de casas que deseja mover a Torre: \n");
    scanf("%d", &numcasas);

    //Estrutura while para movimento da torre.
    while (i <= numcasas)
    {
        printf("Direita!\n");
        i++;
    }
        //seta as variaveis para valor 0.
        numcasas = 0;
        i = 0;

         //entrada do usuario para escolha do numero de casas.
        printf("Agora escolha o numero de casas que deseja mover o Bispo: \n");
        scanf("%d", &numcasas);

        //estrutura do-while para movimento do bispo.
    do {
        printf("Superior!\n");
        printf("Direita!\n");
        i++;     

    } while (i <= numcasas);

    return 0;
}
