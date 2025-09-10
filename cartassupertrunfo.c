#include <stdio.h> 

int main(){
    char estado1[3], estado2[3];
    char codigo1[3], codigo2[3];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;

    printf("\nCARTA 01\n");

    printf("DIGITE O NOME DO ESTADO: \n");
    scanf("%s", estado1);

    printf("DIGITE O CÓDIGO DA CARTA: \n");
    scanf("%s", codigo1);

    printf("DIGITE O NOME DA CIDADE: \n");
    scanf("%s", cidade1);

    printf("QUAL A POPULAÇÂO DA CIDADE: \n");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("QUAL A ÁREA EM KM² DA CIDADE: \n");
    scanf("%f", &area2);

    printf("QUAL O PIB DA CIDADE: \n");
    scanf("%f", &pib2);

    printf("QUANTOS PONTOS TURISTICOS TEM NA CIDADE: \n");
    scanf("%d", &turistico2);

    printf("\nCARTA 01\n");

    printf("ESTADO: %s \n", estado1);
    printf("CÓDIGO: %s \n", codigo1);
    printf("CIDADE: %s \n", cidade1);
    printf("POPULAÇÃO: %d \n", populacao1);
    printf("ÁREA EM KM²: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("PONTOS TURÍSTICOS: %d \n", turistico1);

    printf("\nCARTA 02\n");

    printf("ESTADO: %s \n", estado2);
    printf("CÓDIGO: %s \n", codigo2);
    printf("CIDADE: %s \n", cidade2);
    printf("POPULAÇÃO: %d \n", populacao2);
    printf("ÁREA EM KM²: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("PONTOS TURÍSTICOS: %d \n", turistico2);

}