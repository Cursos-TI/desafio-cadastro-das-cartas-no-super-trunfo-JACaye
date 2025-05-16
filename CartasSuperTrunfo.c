#include <stdio.h>

int main () {

    char NomeEstado_1 [50], NomeEstado_2 [50], Cidade_1[50], Cidade_2[50];
    int Populacao_1, Populacao_2, NumeroTuristicos_1, NumeroTuristicos_2;
    float Area_1, Area_2, PIB_1, PIB_2;
    char Codigo_1;
    char Codigo_2;

    // Inserir os dados da Carta 1
    
    printf("Preencha os dados da Carta 1 \n");// Orientando o usuário

    printf ("\n"); // quebra de linha 
    
    printf("Qual o nome do Estado?\n");
    scanf("%50s",NomeEstado_1);// limitando ao numero de caracteres 

    Codigo_1 = NomeEstado_1 [0];

    printf("Qual o nome da Cidade?\n");
    scanf("%s", Cidade_1);

    printf("Qual a população da Cidade?\n");
    scanf("%d",&Populacao_1);

    printf("Qual a área da Cidade?\n");
    scanf("%f",&Area_1);

    printf("Qual o PIB da Cidade?\n");
    scanf("%f",&PIB_1);

    printf("Quantos pontos turísticos?\n");
    scanf("%d",&NumeroTuristicos_1);

    printf ("\n"); // quebra de linha

    // Inserir os dados da Carta 2

    printf("Preencha os dados da Carta 2\n"); // Orientando o usuário

    printf ("\n"); // quebra de linha

    printf("Qual o nome do Estado?\n");
    scanf("%50s",NomeEstado_2);

    Codigo_2 = NomeEstado_2 [0];

    printf("Qual o nome da Cidade?\n");
    scanf("%s", Cidade_2);

    printf("Qual a população da Cidade?\n");
    scanf("%d",&Populacao_2);

    printf("Qual a área da Cidade?\n");
    scanf("%f",&Area_2);

    printf("Qual o PIB da Cidade?\n");
    scanf("%f",&PIB_2);

    printf("Quantos pontos turísticos?\n");
    scanf("%d",&NumeroTuristicos_2);

    printf ("\n"); // quebra de linha

    // Apresentação da resposta ao Usuário Carta 01  e 02 
    // Ao Códigos foi adicionado número 03 e 04 para identificação
    
    printf("\nCarta 01 \n- Estado: %.1s \n- Código: %c 03 \n- Nome da Cidade: %s\n- População: %i habitantes\n - Área: %.3f KM2\n- PIB: R$%.5f\n- Número de Pontos Turísticos: %d\n",
    NomeEstado_1, Codigo_1 , Cidade_1, Populacao_1, Area_1, PIB_1, NumeroTuristicos_1);

    printf("\nCarta 02 \n- Estado: %.1s \n- Código: %c 04 \n- Nome da Cidade: %s\n- População: %i habitantes\n- Área: %.3f KM2\n- PIB: R$%.5f\n- Número de Pontos Turísticos: %d\n",
     NomeEstado_2, Codigo_2, Cidade_2, Populacao_2, Area_2, PIB_2, NumeroTuristicos_2);

    printf ("\n");

    return 0;
}
