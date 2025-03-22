#include <stdio.h>
 
int main() {
    char est1[100], est2[100];
    float popula1, popula2;
    float area1, area2;
    int turisticos1, turisticos2;
    float PIB1, PIB2;
   


    printf("Digite o nome da sua primeira cidade: \n");
    scanf("%s", est1);
    printf("Ok, cadastrada cidade: %s\n", est1);

    printf("Digite a população: \n");
    scanf("%f", &popula1);
    printf("Ok, população de %.3f\n", popula1);

    printf("Digite sua area: \n");
    scanf("%f", &area1);
    printf("Ok, area calculada de %.2f \n", area1);

    printf("PIB Da Cidade?\n");
    scanf("%f", &PIB1);
    printf("Ok,PIB calculado de: %.2f \n",PIB1);

    printf("Possui quantos pontos turisticos?\n");
    scanf("%d", &turisticos1);
    printf("OK, cidade com %d pontos turisticos\n \n \n" ,turisticos1);
    
    

    // RESULTADO 1
    printf("CARTA A01 CADASTRADA COM SUCESSO!\n.");

    printf("Sua cidade é: %s.\n.",est1);
    printf("Sua cidade tem população de: %.3f\n.",popula1);   
    printf("Possui PIB de:%.2f\n", PIB1);
    printf("Sua cidade tem area calculada de %.2f\n.",area1);
    printf("Sua cidade tem %d pontos turisticos.\n\n\n" ,turisticos1);

    
    //aqui começa a segunda carta

    printf("Agora vamos cadastrar a segunda Carta! \n\n\n");

    printf("Digite o nome da sua segunda cidade: \n");
    scanf("%s", est2);
    printf("Ok, cadastrada cidade: %s\n", est2);

    printf("Digite a população: \n");
    scanf("%f", &popula2);
    printf("Ok, população de %.3f\n", popula2);
    
    printf("Digite sua area: \n");
    scanf("%f", &area2);
    printf("Ok, area calculada de %.2f \n", area2);

    printf("PIB Da Cidade?\n");
    scanf("%f", &PIB2);
    printf("Ok,PIB calculado de: %.2f \n",PIB2);

    printf("Possui quantos pontos turisticos?\n");
    scanf("%d", &turisticos2);
    printf("OK, cidade com %d pontos turisticos\n \n \n" ,turisticos2);
    
    

    //resultado 2
    printf("CARTA A02 CADASTRADA COM SUCESSO!\n.");

    printf("Sua cidade é: %s.\n.",est2);
    printf("Sua cidade tem população de: %.3f\n.",popula2);   
    printf("Possui PIB de:%.2f\n", PIB2);
    printf("Sua cidade tem area calculada de %.2f\n.",area2);
    printf("Sua cidade tem %d pontos turisticos." ,turisticos2);

    return 0;
}