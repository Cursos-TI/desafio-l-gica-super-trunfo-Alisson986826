#include <stdio.h>


int main() {

    printf(" Desafio cadastro de cartas\n");
    printf("Novo commit\n");

    //variaveis carta 1
    int carta1;
    char Estado1[30];
    char Código1[30];
    char Cidade1[30];
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




    //exibindo as cartas
    printf("Todas as cartas \n");
    printf("Carta 1\n");
    printf("Estado:%s\n", Estado1);
    printf("Código:%s\n", Código1);
    printf("Cidade:%s\n", Cidade1);
    printf("População:%lu\n", População1);
    printf("Área em Km:%.4f\n",Área_em_km1);
    printf("Pib:%f\n", Pib1);
    printf("Número de pontos turísticos:%d\n", Número_de_pontos_turísticos1);
    printf("Densidade populacional:%f\n", Densidade_populacional1);
    printf("Pib per capita:%.2f\n", Pib_per_capit1);
    printf("Super poder:%.2f\n", Super_poder1);

    printf("Carta 2\n");
    printf("Estado:%s\n", Estado2);
    printf("Código:%s\n", Código2);
    printf("Cidade:%s\n", Cidade2);
    printf("População:%lu\n", População2);
    printf("Área em Km:%.4f\n", Área_em_km2);
    printf("Pib:%f\n", Pib2);
    printf("Número de pontos turísticos:%d\n", Número_de_pontos_turísticos2);
    printf("Densidade populacional:%f\n", Densidade_populacional2);
    printf("Pib per capita:%.2f\n", Pib_per_capit2);
    printf("Super poder:%.2f\n", Super_poder2);

    //Comparações
    if (População1 >  População2){
        printf("População: Carta1 venceu!\n");
    } else {
        printf("População: Carta2 venceu!\n");
    }
    if(Área_em_km1 > Área_em_km2){
        printf("Área em km: Carta1 venceu!\n");
    } else {
        printf("Área em km: Carta2 venceu!\n");
    }
    if(Pib1  > Pib2){
        printf("Pib: Carta1 venceu!\n");
    } else {
        printf("Pib: Carta2 venceu!\n");
    }
    if(Número_de_pontos_turísticos1 > Número_de_pontos_turísticos2){
        printf("Número de ponto turísticos: Carta1 venceu!\n");
    } else {
        printf("Número de ponto turísticos: Carta2 venceu!\n");
    }
    if(Densidade_populacional1 <  Densidade_populacional2){
        printf("Densidade populacional: Carta1 venceu!\n");
    } else {
        printf("Densidade populacional: Carta2 venceu!\n");
    }
    if(Pib_per_capit1 > Pib_per_capit2){
        printf("Pib per capita: Carta1 venceu!\n");
    } else {
        printf("Pib per capita: Carta2 venceu!\n");
    }
    if(Super_poder1 > Super_poder2){
        printf("Super poder: Carta1 venceu!\n");
    } else {
        printf("Super poder: Carta2 venceu!\n");
    }





    return 0;

    
}


