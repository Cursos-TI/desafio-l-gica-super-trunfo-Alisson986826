#include <stdio.h>
#include <string.h>


int main() {

    printf(" Desafio cadastro de cartas\n");
    printf("Novo commit\n");

    //variaveis carta 1
    int carta1;
    char Estado1[13];
    char Código1[13];
    char Cidade1[13];
    unsigned long int População1;
    float Área_em_km1;
    float Pib1;
    int Número_de_pontos_turísticos1;
    float Densidade_populacional1;
    float Pib_per_capit1;
    float Super_poder1;

    //variaveis carta 2
    int carta2;
    char Estado2[30];
    char Código2[30];
    char Cidade2[30];
    unsigned long int População2;
    float Área_em_km2;
    float Pib2;
    int Número_de_pontos_turísticos2;
    float Densidade_populacional2;
    float Pib_per_capit2;
    float Super_poder2;

    // cadastro carta1
    printf("Digite o nome do estado 1: \n");
    scanf("%s", &Estado1);
    printf("Digite o código 1: \n");
    scanf("%s", &Código1);
    printf("Digite a cidade 1: \n");
    scanf("%s", &Cidade1);
    printf("Digite a população do estado 1: \n");
    scanf("%d", &População1);
    printf("Digite a área do estado 1 (em Km): \n");
    scanf("%f", &Área_em_km1);
    printf("Digite o Pib do estado 1: \n");
    scanf("%f", &Pib1);
    printf("Digite o número de pontos turísticos do estado 1: \n");
    scanf("%d", &Número_de_pontos_turísticos1);
    
    //cadastro carta2
    printf("Digite o nome do estado 2: \n");
    scanf("%s", &Estado2);
    printf("Digite o código 2: \n");
    scanf("%s", &Código2);
    printf("Digite a cidade 2: \n");
    scanf("%s", &Cidade2);
    printf("Digite a população do estado 2: \n");
    scanf("%d", &População2);
    printf("Digite a área do estado 2: \n");
    scanf("%f", &Área_em_km2);
    printf("Digite o Pib do estado 2: \n");
    scanf("%f", &Pib2);
    printf("Digite o número de pontos turísticos do estado 2: \n");
    scanf("%d", &Número_de_pontos_turísticos2);

    // calculo da carta1
    Densidade_populacional1 = População1 / Área_em_km1;
    Pib_per_capit1 = (Pib1 * 1000000000) / População1;
    Super_poder1 = População1 + Área_em_km1 + Pib1 + Número_de_pontos_turísticos1 + Pib_per_capit1 +
    (1 / Densidade_populacional1);


    //calculo da carta2
    Densidade_populacional2 = População2 / Área_em_km2;
    Pib_per_capit2 = (Pib2 * 1000000000) / População2;
     Super_poder2 = População2 + Área_em_km2 + Pib2 + Número_de_pontos_turísticos2 + Pib_per_capit2 +
    (1 / Densidade_populacional2);

    int escolha;
    printf("***Menu de comparação***\n");
    printf("Escolha o atributo para comparar!\n");
    printf("1- Nome do estado(apenas para exibição)\n");
    printf("2- População\n");
    printf("3- Área em km\n");
    printf("4- Pib\n");
    printf("5- Número de ponto turísticos\n");
    printf("6- Densidade populacional\n");
    printf("Digite sua escolha!\n");
    scanf("%d", &escolha);

    printf("***Resultado***");
    printf("Estado 1: %s\n",Estado1);
    printf("Estado 2: %s\n",Estado2);
    
    switch (escolha) {
    
    case 1:
        printf("Comparação por: Nomedo  estado(exibição)\n");
    
        break;
    case 2:
        printf("comparação por população\n");
        printf("População %s: %lu\n", Estado1, População1);
        printf("População %s: %lu\n", Estado2, População2);
        if(População1 > População2) {
            printf("Resultado: %svenceu!\n", Estado1);
        } else if(População2 > População1){
            printf("Resultado: %svenceu!\n", Estado2);
        } else{
            printf("Empate!\n");
        }

        break;
case 3:
        printf("Comparação por Área em km\n");
        printf("Área em km %s: %.2f\n", Estado1, Área_em_km1);
        printf("Área em km %s: %.2f\n", Estado2, Área_em_km2);
        if(Área_em_km1 > Área_em_km2) {
            printf("Resultado: %svenceu!\n", Estado1);
        } else if(Área_em_km2 > Área_em_km1){
            printf("Resultado: %svenceu!\n", Estado2);
        } else{
            printf("Empate!\n");
        }
        break;
case 4:
        printf("Comparação por: Pib\n");
        printf("Pib %s: %.2f\n", Estado1, Pib1);
        printf("Pib %s: %.2f\n", Estado2, Pib2);
        if(Pib1 > Pib2) {
            printf("Resultado: %svenceu!\n", Estado1);
        } else if(Pib2 > Pib1){
            printf("Resultado: %svenceu!\n", Estado2);
        } else{
            printf("Empate!\n");
        }
        break;
case 5:
        printf("Comparação por: Número de pontos turísticos\n");
        printf("Número de pontos turísticos %s: %d\n", Estado1, Número_de_pontos_turísticos1);
        printf("Número de pontos turísticos %s: %d\n", Estado2, Número_de_pontos_turísticos2);
        if(Número_de_pontos_turísticos1 > Número_de_pontos_turísticos2) {
            printf("Resultado: %svenceu!\n", Estado1);
        } else if(Número_de_pontos_turísticos2 > Número_de_pontos_turísticos1){
            printf("Resultado: %svenceu!\n", Estado2);
        } else{
            printf("Empate!\n");
        }
        break;
case 6:
        printf("Comparação por: Densidade populacional\n");
        printf("Densidade populacional %s: %.2f\n", Estado1, Densidade_populacional1);
        printf("Densidade populacional %s: %.2f\n", Estado2, Densidade_populacional2);
        if(Densidade_populacional1 < Densidade_populacional2) {
            printf("Resultado: %svenceu!\n", Estado1);
        } else if(Densidade_populacional2 < Densidade_populacional2){
            printf("Resultado: %svenceu!\n", Estado2);
        } else{
            printf("Empate!\n");
        }
        break;
        default:
        printf("Opção invalida!\n");
        break;
    }

    return 0;
    }

