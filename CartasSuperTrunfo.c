#include <stdio.h>

int main() {

    char estado;
    int cidade;

    int populacao;
    float area;
    float pib;
    int pontos;

    printf("=== Cadastro de Carta ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado);

    
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade);

    
    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos);



    printf("\n=== Carta Cadastrada ===\n");

    printf("Código: %c%02d\n", estado, cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos);

    return 0;
}