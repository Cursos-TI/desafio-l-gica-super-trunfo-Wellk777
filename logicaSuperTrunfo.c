#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de cidade
typedef struct {
    char nome[50];
    long populacao;
    float area;
    float pib;
} Cidade;

int main() {
    // Definição das cartas
    Cidade curitiba, sao_paulo, porto_alegre;

    // Cadastro das Cartas:
    // Curitiba
    strcpy(curitiba.nome, "Curitiba");
    curitiba.populacao = 1963726;
    curitiba.area = 435.036;
    curitiba.pib = 90.0;

    // São Paulo
    strcpy(sao_paulo.nome, "Sao Paulo");
    sao_paulo.populacao = 12396372;
    sao_paulo.area = 1521.11;
    sao_paulo.pib = 763.8;

    // Porto Alegre
    strcpy(porto_alegre.nome, "Porto Alegre");
    porto_alegre.populacao = 1492530;
    porto_alegre.area = 496.827;
    porto_alegre.pib = 77.1;

    // Comparação de Cartas:
    printf("\n--- Comparação entre Curitiba e São Paulo ---\n");
    // Comparação de População
    if (curitiba.populacao > sao_paulo.populacao) {
        printf("Curitiba tem maior população.\n");
    } else if (sao_paulo.populacao > curitiba.populacao) {
        printf("São Paulo tem maior população.\n");
    } else {
        printf("Curitiba e São Paulo têm a mesma população.\n");
    }

    // Comparação de Área
    if (curitiba.area > sao_paulo.area) {
        printf("Curitiba tem maior área.\n");
    } else if (sao_paulo.area > curitiba.area) {
        printf("São Paulo tem maior área.\n");
    } else {
        printf("Curitiba e São Paulo têm a mesma área.\n");
    }

    // Comparação de PIB
    if (curitiba.pib > sao_paulo.pib) {
        printf("Curitiba tem maior PIB.\n");
    } else if (sao_paulo.pib > curitiba.pib) {
        printf("São Paulo tem maior PIB.\n");
    } else {
        printf("Curitiba e São Paulo têm o mesmo PIB.\n");
    }

    printf("\n--- Comparação entre São Paulo e Porto Alegre ---\n");
    // Comparação de População
    if (sao_paulo.populacao > porto_alegre.populacao) {
        printf("São Paulo tem maior população.\n");
    } else if (porto_alegre.populacao > sao_paulo.populacao) {
        printf("Porto Alegre tem maior população.\n");
    } else {
        printf("São Paulo e Porto Alegre têm a mesma população.\n");
    }

    // Comparação de Área
    if (sao_paulo.area > porto_alegre.area) {
        printf("São Paulo tem maior área.\n");
    } else if (porto_alegre.area > sao_paulo.area) {
        printf("Porto Alegre tem maior área.\n");
    } else {
        printf("São Paulo e Porto Alegre têm a mesma área.\n");
    }

    // Comparação de PIB
    if (sao_paulo.pib > porto_alegre.pib) {
        printf("São Paulo tem maior PIB.\n");
    } else if (porto_alegre.pib > sao_paulo.pib) {
        printf("Porto Alegre tem maior PIB.\n");
    } else {
        printf("São Paulo e Porto Alegre têm o mesmo PIB.\n");
    }

    printf("\n--- Comparação entre Curitiba e Porto Alegre ---\n");
    // Comparação de População
    if (curitiba.populacao > porto_alegre.populacao) {
        printf("Curitiba tem maior população.\n");
    } else if (porto_alegre.populacao > curitiba.populacao) {
        printf("Porto Alegre tem maior população.\n");
    } else {
        printf("Curitiba e Porto Alegre têm a mesma população.\n");
    }

    // Comparação de Área
    if (curitiba.area > porto_alegre.area) {
        printf("Curitiba tem maior área.\n");
    } else if (porto_alegre.area > curitiba.area) {
        printf("Porto Alegre tem maior área.\n");
    } else {
        printf("Curitiba e Porto Alegre têm a mesma área.\n");
    }

    // Comparação de PIB
    if (curitiba.pib > porto_alegre.pib) {
        printf("Curitiba tem maior PIB.\n");
    } else if (porto_alegre.pib > curitiba.pib) {
        printf("Porto Alegre tem maior PIB.\n");
    } else {
        printf("Curitiba e Porto Alegre têm o mesmo PIB.\n");
    }

    return 0;
}
