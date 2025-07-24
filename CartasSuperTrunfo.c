#include <stdio.h>

int main() {
    
    //O bloco de código abaixo é destinado para declaração das variaveis.

    char estado1[4];
    char código1[5];
    char cidade1[10];
    char estado2[3]; 
    char código2[6];
    char cidade2[10];
    int população1,população2;
    float area1,area2;
    float pib1,pib2;
    int turisticos1,turisticos2;

    //Os dois blocos abaixo são focados nas perguntas que serão exebidas na tela do usuário

    printf("CARTA 01\n");
    
    printf("Digite a sigla do estado que vai representar sua carta (Ex: BA, CE, RJ...)\n");
    scanf("%s", estado1);
    printf("Digite o código da sua carta, sendo a letra do estado escolhido + um número (Ex: A01, B02...)\n");
    scanf("%s", código1);
    printf("Digite o nome de uma cidade do estado escolhido.\n");
    scanf("%s", cidade1);
    printf("Qual o número de habitantes dessa cidade.\n");
    scanf("%d", &população1);
    printf("Qual a área da cidade em Km².\n");
    scanf("%f", &area1);
    printf("Qual o PIB da cidade.\n");
    scanf("%f", &pib1);
    printf("Quantos pontos turisticos tem na cidade.\n");
    scanf("%d", &turisticos1);

    printf("CARTA 02\n");
    
    printf("Digite a sigla do estado que vai representar sua carta (Ex: BA, CE, RJ...)\n");
    scanf("%s", estado2);
    printf("Digite o código da sua carta, sendo a letra do estado escolhido + um número (Ex: A01, B02...)\n");
    scanf("%s", código2);
    printf("Digite o nome de uma cidade do estado escolhido.\n");
    scanf("%s", cidade2);
    printf("Qual o número de habitantes dessa cidade.\n");
    scanf("%d", &população2);
    printf("Qual a área da cidade em Km².\n");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade.\n");
    scanf("%f", &pib2);
    printf("Quantos pontos turisticos tem na cidade.\n");
    scanf("%d", &turisticos2);
   
    //Abaixo temo o bloco de configuração dos dados que serão apresentado na tela do usuário após a execução do código.

    printf("CARTA01\n");
    printf("ESTADO:%s\n" ,estado1);
    printf("CÓDIGO:%s\n",código1);
    printf("NOME DA CIDADE:%s\n", cidade1);
    printf("POPULAÇÂO:%d\n", população1);
    printf("ÁREA EM KM²:%.2f\n", area1);
    printf("PIB:%.2f\n", pib1);
    printf ("NÚMERO DE PONTOS TURÍSTICOS:%d\n", turisticos1); 

    printf("CARTA02\n");
    printf("ESTADO:%s\n" ,estado2);
    printf("CÓDIGO:%s\n",código2);
    printf("NOME DA CIDADE:%s\n", cidade2);
    printf("POPULAÇÂO:%d\n", população2);
    printf("ÁREA EM KM²:%.2f\n", area2);
    printf("PIB:%.2f\n", pib2);
    printf ("NÚMERO DE PONTOS TURÍSTICOS:%d\n", turisticos2);

    return 0;
}
