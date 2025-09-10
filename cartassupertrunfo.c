#include <stdio.h> 

int main(){
    char estado1[3], estado2[3];
    char codigo1[3], codigo2[3];
    char cidade1[30], cidade2[30];
    float populacao1, populacao2;
    float area1, area2, densidade1, densidade2;
    float pib1, pib2, percapita1, percapita2;
    int turistico1, turistico2;

    //Bloco de código abaixo dedicado para a configurar das informações que os usuários deverão fornecer.

    printf("\nCARTA 01\n");

    printf("DIGITE O NOME DO ESTADO: \n");
    scanf("%s", estado1);

    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf("%s", codigo1);

    printf("DIGITE O NOME DA CIDADE: \n");
    scanf("%s", cidade1);

    printf("QUAL A POPULAÇÂO DA CIDADE: \n");
    scanf("%f", &populacao1);

    printf("QUAL A ÁREA EM KM² DA CIDADE: \n");
    scanf("%f", &area1);

    printf("QUAL O PIB DA CIDADE: \n");
    scanf("%f", &pib1);

    printf("QUANTOS PONTOS TURISTICOS TEM NA CIDADE: \n");
    scanf("%d", &turistico1);

    printf("\nCARTA 02\n");

    printf("DIGITE O NOME DO ESTADO: \n");
    scanf("%s", estado2);

    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf("%s", codigo2);

    printf("DIGITE O NOME DA CIDADE: \n");
    scanf("%s", cidade2);

    printf("QUAL A POPULAÇÂO DA CIDADE: \n");
    scanf("%f", &populacao2);

    printf("QUAL A ÁREA EM KM² DA CIDADE: \n");
    scanf("%f", &area2);

    printf("QUAL O PIB DA CIDADE: \n");
    scanf("%f", &pib2);

    printf("QUANTOS PONTOS TURISTICOS TEM NA CIDADE: \n");
    scanf("%d", &turistico2);

    //Bloco de código exclusivo para o cálculo das médias de densidade e PIB per capita.

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    percapita1 = (float) pib1 / populacao1;
    percapita2 = (float) pib2 / populacao2;

    //Bloco abaixo com as informações que serão exibidas na tela do usuário.

    printf("\nCARTA 01\n");

    printf("ESTADO: %s \n", estado1);
    printf("CÓDIGO: %s \n", codigo1);
    printf("CIDADE: %s \n", cidade1);
    printf("POPULAÇÃO: %f \n", populacao1);
    printf("ÁREA EM KM²: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("PONTOS TURÍSTICOS: %d \n", turistico1);
    printf("DENSIDADE POPULACIONAL: %f \n", densidade1);
    printf("PIB PER CAPITA: %f \n", percapita1);

    printf("\nCARTA 02\n");

    printf("ESTADO: %s \n", estado2);
    printf("CÓDIGO: %s \n", codigo2);
    printf("CIDADE: %s \n", cidade2);
    printf("POPULAÇÃO: %f \n", populacao2);
    printf("ÁREA EM KM²: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("PONTOS TURÍSTICOS: %d \n", turistico2);
    printf("DENSIDADE POPULACIONAL: %f \n", densidade2);
    printf("PIB PER CAPITA: %f \n", percapita2);

}