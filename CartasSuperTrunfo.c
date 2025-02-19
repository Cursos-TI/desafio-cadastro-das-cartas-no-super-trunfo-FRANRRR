#include <stdio.h>



int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    float Area, PIB, NumPontosTuristicos, Populacao;
    char Nome[100], CodigodaCidade[100];

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    printf("Ola. Agora vamos cadastrar as informações da cartas.\n Nos Campos: TAMANHO DA POPULAÇÃO, AREA TOTAL DA CIDADE, PIB DA CIDADE e NUMERO DE PONTOS TURISTICOS, preencha somente com Numeros e pontos. \n");
    printf("\n");

    //Primeira Carta
    printf("Código Da Cidade: \n");
    scanf("%s", CodigodaCidade);
    printf("\n");

    printf("Nome Da Cidade: \n");
    scanf("%s", Nome);
    printf("\n");

    printf("Tamanho Da População: \n");
    scanf("%f", &Populacao);
    printf("\n");

    printf("Area Total Da Cidade: \n");
    scanf("%f", &Area);
    printf("\n");

    printf("PIB Da Cidade: \n");
    scanf("%f", &PIB);
    printf("\n");

    printf("Numero De Pontos Turisticos: \n");
    scanf("%f", &NumPontosTurísticos);
    printf("\n");

    printf("Resultado Final De Sua Carta: \n");
    printf("\n");
    printf("Código Da Cidade: %s\n", CodigodaCidade);
    printf("Nome Da Cidade: %s\n", Nome);
    printf("Tamanho Da População: %.3f\n", Populacao);
    printf("Area Total Da Cidade: %.3f\n", Area);
    printf("PIB Da Cidade: %.3f\n", PIB);
    printf("Numero De Pontos Turisticos: %.3f\n", NumPontosTurísticos);

    printf("\n");

    return 0;
}