#include <stdio.h>
int main(){
   int estado1[10], cidade1[20], codigo1[10];
   int ponto1, carta1;
   float area1, pib1, densidade1, capita1, super1;
   unsigned long int populacao1;

   char estado2[10], cidade2[20], codigo2[10];
   int ponto2, carta2;
   float area2, pib2, densidade2, capita2, super2;
   unsigned long int populacao2;




   //CARTA 01

   printf("Cadastre as Informacoes\n");

   //entrada de dados: estado.
   printf("Estado: ");
    scanf(" %s", &estado1);

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

    printf("Primeiro cadastro Finalizado\n");

    // calculos de densidade Populacional.

    densidade1 = populacao1 / area1;

    // Calculos de PIB per Capita.

    capita1 = pib1 / populacao1;

    super1 = pib1 + area1 + populacao1 + densidade1 + capita1;


    //****CARTA 02*****
    printf("Cadastre as Informacoes\n");


   //entrada de dados: estado.
   printf("Estado: ");
    scanf(" %s", &estado2);

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

    //Divisão para determinar o valor 
    densidade2 = populacao2 / area2;

    // Calculos de PIB per Capita.

    capita2 = pib2 / populacao2;

    super2 = pib2 + area2 + populacao2 + densidade2 + capita2;

    

        //Impressão dos cados de ambas as cartas na tela.
        printf("**Carta SUPERTRUNFO 01** \n");

                //Carta 01

            printf("Estado: %s \n", estado1);
            printf("Codigo da Carta: %s \n", codigo1);
            printf("Nome da Cidade: %s \n", cidade1);
            printf("Populacao: %d \n", populacao1);
            printf("Area da Cidade: %f \n", area1);
            printf("PIB da Cidade: %f \n", pib1);
            printf("Pontos Turisticos: %d\n", ponto1);
            printf("Densidade Populacional: %.2f\n", densidade1);
            printf("PIB per capita: %f\n", capita1);
            printf("Super Poder: %.2f\n", super1);


                //Carta 02
        printf("**Carta SUPERTRUNFO 02** \n");

            printf("Estado: %s \n", estado2);
            printf("Codigo da Carta: %s \n", codigo2);
            printf("Nome da Cidade: %s \n", cidade2);
            printf("Populacao: %d \n", populacao2);
            printf("Area da Cidade: %f \n", area2);
            printf("PIB da Cidade: %f \n", pib2);
            printf("Pontos Turisticos: %d\n", ponto2);
            printf("Densidade Populacional: %.2f\n", densidade2);
            printf("PIB per capita: %f\n", capita2);
            printf("Super Poder: %.2f\n", super2);

            //Impressão de comparações de dados informados nos cadastros das cartas.

            printf ("CARTA01 = 1 e CARTA02 = 0 \n");

            printf ("Populacao: %d\n", populacao1 > populacao2);
            printf ("Area da Cidade: %d\n", area1 > area2);
            printf ("PIB da Cidade: %d\n", pib1 > pib2);
            printf ("Pontos Turisticos: %d\n", ponto1 > ponto2);
            printf ("Densidade Populacional: %d\n", densidade1 > densidade2);

            // PIB per capita, o numero menor do resultado deve ser apontado no Resultado
            printf ("PIB per capita: %d\n", capita1 < capita2);
            printf ("Maior Super Poder: %d\n", super1 > super2);

            //A seguir temos as condições if e else, para determinar os vencedores.

            printf("Populacao Carta01: %u \n", populacao1);
            printf("Populacao Carta02: %u \n", populacao2);

            if (populacao1 > populacao2) {
                printf("Carta Numero 1 e Vencedora\n");
            }
        
            else {
                printf("Carta numero 2 e Vencedora\n");

            }
            printf("Area da Cidade Carta01: %f \n", area1);
            printf("Area da Cidade Carta02: %f \n", area2);

            if (area1 > area2) {
                printf("Carta Numero 1 e Vencedora\n");
                }
            
            else {
                printf("Carta numero 2 e Vencedora\n");

            }
            printf("PIB da Cidade Carta01: %f \n", pib1);
            printf("PIB da Cidade Carta02: %f \n", pib2);

            if (pib1 > pib2) {
                printf("Carta Numero 1 e Vencedora\n");
            }
        
            else {
                printf("Carta numero 2 e Vencedora\n");

            }
            printf("Densidade Populacional Carta01: %.2f\n", densidade1);
            printf("Densidade Populacional Carta02: %.2f\n", densidade2);

            if (densidade1 < densidade2) {
                printf("Carta Numero 1 e Vencedora\n");
            }
    
            else {
                printf("Carta numero 2 e Vencedora\n");

            }
            printf("PIB per capita Carta01: %.2f\n", capita1);
            printf("PIB per capita Carta02: %.2f\n", capita2);

            if (capita1 > capita2) {
                printf("Carta Numero 1 e Vencedora\n");
            }

            else {
                printf("Carta numero 2 e Vencedora\n");

            }
            printf("Super Poder Carta01: %.2f\n", super1);
            printf("Super Poder Carta02: %.2f\n", super2);

            if (super1 > super2) {
                printf("Carta Numero 1 e Vencedora\n");
            }

            else {
                printf("Carta numero 2 e Vencedora\n");

            }


            return 0;

}
