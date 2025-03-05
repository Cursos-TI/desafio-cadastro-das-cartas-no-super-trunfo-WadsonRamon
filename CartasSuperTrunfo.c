#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char Estado1;
    char Codigo1[4];
    char Nome1[50];
    int Populacao1;
    float Area1;
    float Pib1;
    int Pontos_turisticos1;

    // Declaração de variáveis para a segunda carta

    char Estado2;
    char Codigo2[4];
    char Nome2[50];
    int Populacao2;
    float Area2;
    float Pib2;
    int Pontos_turisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o estado (A-H) da primeira carta: ");
    scanf("%c", &Estado1);
    printf("Digite o código da carta: ");
    scanf("%s", &Codigo1);
    printf("Digite o Nome da cidade ");
    scanf("%s", &Nome1);
    printf("Digite a população: ");
    scanf("%d", &Populacao1);
    printf("Digite a área em km^2: ");
    scanf("%f", &Area1);
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &Pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &Pontos_turisticos1);

    // Entrada de dados da segunda carta
    
    printf("Digite o estado (A-H) da segunda carta: ");
    scanf("%c", &Estado2);
    printf("Digite o código da carta: ");
    scanf("%s", &Codigo2);
    printf("Digite o Nome da cidade ");
    scanf("%s", &Nome2);
    printf("Digite a população: ");
    scanf("%d", &Populacao2);
    printf("Digite a área em km^2: ");
    scanf("%f", &Area2);
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &Pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &Pontos_turisticos2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome: %s\n", Nome1);
    printf("População: %d\n", Populacao1);
    printf("Área: %f\n:", Area1);
    printf("PIB: %f\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos1);

    // Exibição da segunda carta

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome: %s\n", Nome2);
    printf("População: %d\n", Populacao2);
    printf("Área: %f\n:", Area2);
    printf("PIB: %f\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos2);
    
    return 0;
}
