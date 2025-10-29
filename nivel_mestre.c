#include <stdio.h>


int main(){
    char estado_1[3] , estado_2[3] , cidade_1[20] , cidade_2[20],
    codigo_1[5] , codigo_2[5];
    int populacao_1, populacao_2 , ponto_turisticos_1 , pontos_turisticos_2 , escolha , escolha_2;
    float area_1 , area_2 , pib_1 , pib_2 , dens_pupu_1 , dens_popu_2,valor1_c1, valor2_c1, valor1_c2, valor2_c2;
    float pib_percapita_1 , pib_percapita_2 , soma1 , soma2;
    printf("Adicionando Carta 1:\n");
    printf("Estado: \n");
    scanf("%s" , estado_1);
    printf("Código da carta: \n");
    scanf("%s" , codigo_1);
    printf("Cidade: \n");
    scanf("%s" , cidade_1);
    printf("Polpulação: \n");
    scanf("%d" , &populacao_1);
    printf("Área: \n");
    scanf("%f" , &area_1);
    printf("PIB: \n");
    scanf("%f" , &pib_1);
    printf("Número de pontos turisticos\n");
    scanf("%d" , &ponto_turisticos_1);

    printf("Carta 1 foi adicionada.\n");
    printf("\n");
    printf("Adicionando carta 2\n");
    printf("Estado: \n");
    scanf("%s" , estado_2);
    printf("Código da carta: \n");
    scanf("%s" , codigo_2);
    printf("Cidade: \n");
    scanf("%s" , cidade_2);
    printf("Polpulação: \n");
    scanf("%d" , &populacao_2);
    printf("Área: \n");
    scanf("%f" , &area_2);
    printf("PIB: \n");
    scanf("%f" , &pib_2);
    printf("Número de pontos turisticos\n");
    scanf("%d" , &pontos_turisticos_2);

    printf("Carta 1:\n");
    printf("Estado:%s\n" ,estado_1);
    printf("Código da carta:%s\n",codigo_1);
    printf("Cidade:%s\n",cidade_1); 
    printf("População:%d\n",populacao_1);
    printf("Aréa:%.2fkm\n",area_1);
    printf("Pib:R$%.2f\n",pib_1);
    printf("Pontos Turísticos:%d\n",ponto_turisticos_1);
    dens_pupu_1 = populacao_1 / area_1;
    printf("Densidade populacional:%.2f\n" ,dens_pupu_1);
    pib_percapita_1 = pib_1 / populacao_1;
    printf("PIB per Capita :R$%.2f\n" , pib_percapita_1);
    printf("\n");
    
    printf("Carta 2:\n");
    printf("Estado:%s\n" ,estado_2);
    printf("Código da carta:%s\n",codigo_2);
    printf("Cidade:%s\n",cidade_2); 
    printf("População:%d\n",populacao_2);
    printf("Aréa:%.2fkm\n",area_2);
    printf("Pib:R$%.2f\n",pib_2);
    printf("Pontos Turísticos:%d\n",pontos_turisticos_2);
    dens_popu_2 = populacao_2 / area_2;
    printf("Densidade populacional:%.2f\n" ,dens_popu_2);
    pib_percapita_1 = pib_2 / populacao_2;
    printf("PIB per Capita :R$%.2f\n" , pib_percapita_2);

    printf("Qual sera o atributo de comparação entre as cartas?\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Número de pontos turísticos\n");
    printf("[5] Densidade demográfica\n");
    scanf("%d" , &escolha);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == escolha) continue; // não mostra o já escolhido
        switch (i) {
            case 1: printf("%d - População\n", i); break;
            case 2: printf("%d - Área\n", i); break;
            case 3: printf("%d - PIB\n", i); break;
            case 4: printf("%d - Densidade Demográfica\n", i); break;
        }
    }
    scanf("%d", &escolha_2);

    if(escolha == escolha_2){
        printf("Voce não pode escolher o mesmo atributo 2 vezes!!");
    }

     // Função auxiliar: associa o atributo ao valor correspondente
    switch (escolha) {
        case 1: valor1_c1 = populacao_1; valor1_c2 = populacao_2; break;
        case 2: valor1_c1 = area_2; valor1_c2 = area_2; break;
        case 3: valor1_c1 = pib_1; valor1_c2 = pib_2; break;
        case 4: valor1_c1 = dens_pupu_1; valor1_c2 = dens_popu_2; break;
    }

    switch (escolha_2) {
        case 1: valor2_c1 = populacao_1; valor2_c2 = populacao_2; break;
        case 2: valor2_c1 = area_2; valor2_c2 = area_2; break;
        case 3: valor2_c1 = pib_1; valor2_c2 = pib_2; break;
        case 4: valor2_c1 = dens_pupu_1; valor2_c2 = dens_popu_2; break;
    }

    // Exibir atributos escolhidos
    printf("\n=== Comparação ===\n");
    printf("%s vs %s\n\n", cidade_1, cidade_2);

    // Exibição detalhada dos valores
    printf("Atributo 1: ");
    switch (escolha) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n\n", cidade_1, valor1_c1, cidade_2, valor1_c2);

    printf("Atributo 2: ");
    switch (escolha_2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Densidade Demográfica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n\n", cidade_1, valor2_c1, cidade_2, valor2_c2);

    // Cálculo das somas (densidade é invertida)
    soma1 = (escolha == 4 ? -valor1_c1 : valor1_c1) + (escolha_2 == 4 ? -valor2_c1 : valor2_c1);
    soma2 = (escolha == 4 ? -valor1_c2 : valor1_c2) + (escolha_2 == 4 ? -valor2_c2 : valor2_c2);

    // Resultado final usando operador ternário
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n%s: %.2f\n\n", cidade_1, soma1, cidade_2, soma2);

    if(soma1 > soma2){
        printf("Carta 1 (%s) venceu!!!\n" , cidade_1);
    }
    else if(soma2 > soma1){
        printf("Carta 2 (%s) venceu!!!\n" , cidade_2);
    }
    else{
        printf("Empate!!!\n");
    }
    return 0 ;
}