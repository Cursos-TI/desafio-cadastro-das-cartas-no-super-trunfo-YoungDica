#include <stdio.h>
int main(){
   char estado1, cidade1[20], codigo1[10];
   int ponto1, populacao1, carta1;
   float area1, pib1;

   char estado2, cidade2[20], codigo2[10];
   int ponto2, populacao2, carta2;
   float area2, pib2;


   //CARTA 01

   printf("Cadastre as Informações\n");

   //entrada de dados: estado.
   printf("Estado: ");
    scanf(" %c", &estado1);

   //entrada de dados: codigo da carta.
   printf("Codigo da Carta: ");
   scanf(" %s", &codigo1);

   //entrada de dados: Nome da Cidade (Cidades com nomes compostos da erro no programa ex: São Paulo.).
   printf("Nome da Cidade: ");
    scanf(" %s", &cidade1);

   //entrada de dados: População.
   printf("Populacao: ");
    scanf(" %d", &populacao1);

   //entrada de dados: Area da Cidade
   printf("Area da Cidade: ");
    scanf(" %f", &area1);

   //entrada de dados: PIB.
   printf("PIB da Cidade: ");
    scanf(" %f", &pib1);

   //entrada de dados: pontosturisticos:
   printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &ponto1);


    //****CARTA 02*****
    printf("INFORME OS DADOS DA CIDADE\n");


   //entrada de dados: estado.
   printf("Estado: ");
    scanf(" %c", &estado2);

   //entrada de dados: codigo da carta.
   printf("Codigo da Carta: ");
    scanf(" %s", &codigo2);

   //entrada de dados: Nome da Cidade (Cidades com nomes compostos da erro no programa ex: São Paulo.).
   printf("Nome da Cidade: ");
    scanf(" %s", &cidade2);

   //entrada de dados: População.
   printf("Populacao: ");
    scanf(" %d", &populacao2);

   //entrada de dados: Area da Cidade
   printf("Area da Cidade: ");
    scanf(" %f", &area2);

   //entrada de dados: PIB.
   printf("PIB da Cidade: ");
    scanf(" %f", &pib2);

   //entrada de dados: pontosturisticos:
   printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &ponto2);

        //Impressão dos cados de ambas as cartas na tela.
        printf("**Carta SUPERTRUNFO 01** \n");

                //Carta 01

            printf("Estado: %c \n", estado1);
            printf("Codigo da Carta: %s \n", codigo1);
            printf("Nome da Cidade: %s \n", cidade1);
            printf("Populacao: %d \n", populacao1);
            printf("Area da Cidade: %f \n", area1);
            printf("PIB da Cidade: %f \n", pib1);
            printf("Pontos Turisticos: %d\n", ponto1);

                //Carta 02
        printf("**Carta SUPERTRUNFO 02** \n");

            printf("Estado: %c \n", estado2);
            printf("Codigo da Carta: %s \n", codigo2);
            printf("Nome da Cidade: %s \n", cidade2);
            printf("Populacao: %d \n", populacao2);
            printf("Area da Cidade: %f \n", area2);
            printf("PIB da Cidade: %f \n", pib2);
            printf("Pontos Turisticos: %d\n", ponto2);

        return 0;

}