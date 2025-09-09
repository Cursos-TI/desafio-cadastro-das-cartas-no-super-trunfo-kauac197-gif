#include <stdio.h> 

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

     int populacao; // populacao de estados
     int numero ; // Numero de pontos turisticos
     float area; // Area de estados
     float Pib ; // produto interno bruto 

      printf("Digite a populaçao do estado: \n");
     scanf("%d", &populacao);

     printf("Digite o numero de pontos turisticos de estado: \n");
     scanf("%d", &numero);
 
     printf("Digite a area do estado: \n");
     scanf("%f", &area);

     printf("Digite o pib do estado: \n");
     scanf("%f", &Pib);


printf("populacao: %d \n", populacao);
printf("numero de pontos turisticos: %d \n", numero);
 printf("area: %.2f \n", area);
 printf ("Pib: %.2f \n", Pib);




 return 0; 

   
   
   
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
