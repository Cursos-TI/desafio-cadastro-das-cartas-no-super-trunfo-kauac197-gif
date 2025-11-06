#include <stdio.h> 



int main() {
     char Estado1[50], Estado2[50];// estado da cidade
     char codigo1[4], codigo2[4];//codigo da cidade
     char nome1[50], nome2[50];//Nome da cidade
     int populacao1, populacao2; // populacao de estados
     int pontos1, pontos2; // Numero de pontos turisticos
     float area1, area2;// Area de estados
     float Pib1 , Pib2;// produto interno bruto 
     float Densidade1, Densidade2;
     float Pibper1, Pibper2;

     //carta 1 
     printf("Digite o codigo da carta1 (A01): \n");
     scanf("%s", codigo1);

     printf("Digite o estado da carta1: \n");
     scanf("%s", Estado1);
     
     printf("Digite o nome da carta1: \n");
     scanf("%s", nome1);

     printf("Digite a populaçao da carta1: \n");
     scanf("%d", &populacao1);

     printf("Digite o numero de pontos turisticos da carta1: \n");
     scanf("%d", &pontos1);
 
     printf("Digite a area da carta1: \n");
     scanf("%f", &area1);

     printf("Digite o pib da carta1: \n");
     scanf("%f", &Pib1);



  Densidade1 = populacao1 / area1;
  Pibper1 = Pib1 / populacao1;

//Carta 2

     printf("Digite o codigo da carta2 (A01): \n");
     scanf("%S", &codigo2);

     printf("Digite o estado da carta2: \n");
     scanf("%S", &Estado2);

     printf("Digite o nome da carta2: \n");
     scanf("%S", &nome2);

     printf("Digite a populaçao da carta2: \n");
     scanf("%d", &populacao2);

     printf("Digite o numero de pontos turisticos da carta2: \n");
     scanf("%d", &pontos2);
 
     printf("Digite a area da carta2: \n");
     scanf("%f", &area2);

     printf("Digite o pib da carta2: \n");
     scanf("%f", &Pib2);

     Densidade2 = populacao2 / area2;
     Pibper2 = Pib2 / populacao2;

//Dados das cartas 
 printf(".....Dados da carta 1....\n");
 printf("Estado: %S \n", Estado1);
 printf("codigo %S\n", codigo1);
 printf("nome: %S \n", nome1);
 printf("populacao: %d \n", populacao1);
 printf("numero de pontos turisticos: %d \n", pontos1);
 printf("area: %.2f \n", area1);
 printf ("Pib: %.2f \n", Pib1);
 printf("A densidade populacinal e: %.2f \n", Densidade1);
 printf("O Pib per capital e: %.2f \n", Pibper1);




 printf(".....Dados da carta 2....\n");
  printf("Estado; %S \n", Estado2);
 printf("nome: %S \n", nome2);
 printf("codigo %s\n", codigo2);
 printf("populacao: %d \n", populacao2);
 printf("numero de pontos turisticos: %d \n", pontos2);
 printf("area: %.2f \n", area2);
 printf ("Pib: %.2f \n", Pib2);
 printf("A densidade populacional e: %.2f \n", Densidade2);
 printf("O Pib per capital e: %.2f \n", Pibper2);

 


 return 0; 
 
}

