#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    float Area;
    float Populacao;
    float NumPontosTuristico;
    float PIB;
    char Nome[100], CodigodaCidade[100];
    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
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
    scanf("%f", &NumPontosTuristico);
    printf("\n");

    printf("Resultado Final De Sua Carta: \n");
    printf("\n");
    printf("Código Da Cidade: %s\n", CodigodaCidade);
    printf("Nome Da Cidade: %s\n", Nome);
    printf("Tamanho Da População: %.3f\n", Populacao);
    printf("Area Total Da Cidade: %.3f\n", Area);
    printf("PIB Da Cidade: %.3f\n", PIB);
    printf("Numero De Pontos Turisticos: %.3f\n", NumPontosTuristico);

    printf("\n");

    //Segunda Carta
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
    scanf("%f", &NumPontosTuristico);
    printf("\n");

    printf("Resultado Final De Sua Carta: \n");
    printf("\n");
    printf("Código Da Cidade: %s\n", CodigodaCidade);
    printf("Nome Da Cidade: %s\n", Nome);
    printf("Tamanho Da População: %.3f\n", Populacao);
    printf("Area Total Da Cidade: %.3f\n", Area);
    printf("PIB Da Cidade: %.3f\n", PIB);
    printf("Numero De Pontos Turisticos: %.3f\n", NumPontosTuristico);

    printf("\n");

    //Agora basicamente é só copiar o colar o código conforme a quantidade necessária de cartas. 


    return 0;
}
