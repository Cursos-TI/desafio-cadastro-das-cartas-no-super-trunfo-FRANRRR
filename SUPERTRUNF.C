#include <stdio.h>
 
int main() {
    char est1[100], est2[100];
    int popula1, popula2;
    float area1, area2;
    int turisticos1, turisticos2;
    float PIB1, PIB2; 
    float densipop1 , densipop2;
    float PIBPER1, PIBPER2;
    char cod01[2], cod02[2], l01[2], l02[2];
       

    printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf("%s", l01);
    
    printf("Agora digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    scanf("%s", cod01);

    printf("Digite o nome da sua primeira cidade:\n");
    scanf("%s", est1);
 
    printf("Digite a população: \n");
    scanf("%d.", &popula1);
    
    printf("Digite sua area: \n");
    scanf("%f", &area1);
    
    printf("PIB Da Cidade?\n");
    scanf("%f", &PIB1);
    
    printf("Possui quantos pontos turisticos?\n");
    scanf("%d", &turisticos1);
    printf("\n \n \n");
    
   

    densipop1 = (float)popula1 / area1;
    PIBPER1 = PIB1 / (float)popula1;

    

    // RESULTADO 1
    printf("**CARTA CADASTRADA COM SUCESSO!**\n");

    printf(".CARTA 1.\n");
    printf(".Letra do estado: %s.\n", l01);
    printf(".codigo da carta é: %s.\n",cod01);
    printf(".Sua cidade é: %s.\n",est1);
    printf(".Sua cidade tem população de: %.d.\n",popula1);   
    printf(".Possui PIB de:%.2f\n", PIB1);
    printf(".Sua cidade tem area calculada de %.2f km².\n",area1);
    printf(".Sua cidade tem %d pontos turisticos.\n" ,turisticos1);
    printf(".Densidadade Populacional = %.2f hab/km².\n", densipop1);
    printf(".PIB per capita = %.2f reais.\n\n\n", PIBPER1);

    //aqui começa a segunda carta

    printf("Agora vamos cadastrar a segunda Carta! \n\n\n");

    
    printf("Escolha uma letra de 'A' a 'H' (representando um dos oito estados)\n");
    scanf("%s", l02);
    
    printf("Agora digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)..\n");
    scanf("%s", cod02);

    printf("Digite o nome da sua segunda cidade: \n");
    scanf("%s", est2);
    
    printf("Digite a população: \n");
    scanf("%d", &popula2);
    
    printf("Digite sua area: \n");
    scanf("%f", &area2);
    
    printf("PIB Da Cidade?\n");
    scanf("%f", &PIB2);
    
    printf("Possui quantos pontos turisticos?\n");
    scanf("%d", &turisticos2);
    printf("\n \n \n");
    
    

    densipop2 = (float)popula2 / area2;
    PIBPER2 = PIB2 / (float)popula2;

    //resultado 2
    printf("**CARTA CADASTRADA COM SUCESSO!**\n");
    
    printf(".CARTA 2.\n");
    printf(".Letra do estado:%s.\n", l02);
    printf(".Codigo da carta:%s.\n", cod02);
    printf(".Sua cidade é: %s.\n",est2);
    printf(".Sua cidade tem população de: %.d.\n",popula2);   
    printf(".Possui PIB de:%.2f.\n", PIB2);
    printf(".Sua cidade tem area calculada de %.2f km².\n",area2);
    printf(".Sua cidade tem %d pontos turisticos.\n" ,turisticos2);
    printf(".Densidadade Populacional = %.2f hab/km².\n", densipop2);
    printf(".PIB per capita = %.2f reais.\n\n\n", PIBPER2);  
    return 0;
}