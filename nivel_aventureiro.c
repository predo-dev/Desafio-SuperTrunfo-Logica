#include <stdio.h>


int main(){
    char estado_1[3] , estado_2[3] , cidade_1[20] , cidade_2[20],
    codigo_1[5] , codigo_2[5];
    int populacao_1, populacao_2 , ponto_turisticos_1 , pontos_turisticos_2 , escolha;
    float area_1 , area_2 , pib_1 , pib_2 , dens_pupu_1 , dens_popu_2,
    pib_percapita_1 , pib_percapita_2;
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

    switch (escolha)
    {
    case 1:
        printf("Carta 1 (%s) , população:%d\n" , cidade_1 , populacao_1);
        printf("Carta 2 (%s) , população:%d\n" , cidade_2 , populacao_2);

        if (populacao_1 > populacao_2){
            printf("Carta 1 (%s) venceu ,população:%d\n" ,cidade_1 , populacao_1);
        }else if(populacao_2 > populacao_1){
            printf("Carta 2 (%s) venceu ,população:%d\n" ,cidade_2 , populacao_2);  
        }
        else{
            printf("Empate!!!");
        }
        break;
    case 2:
        printf("Carta 1 (%s) , área: %.2f\n" , cidade_1 , area_1);
        printf("Carta 2 (%s) , área: %.2f\n" , cidade_2 , area_2);

        if (area_1 > area_2){
            printf("Carta 1 (%s) venceu ,população: %.2f\n" ,cidade_1 , area_1);
        }else if(area_2 > area_1){
            printf("Carta 2 (%s) venceu ,população: %2.f\n" ,cidade_2 , area_2);  
        }
        else{
            printf("Empate!!!");
        }
        break;

    case 3:
        printf("Carta 1 (%s) , PIB:%.2f\n" , cidade_1 , pib_1);
        printf("Carta 2 (%s) , PIB:%.2f\n" , cidade_2 , pib_2);

        if (pib_1 > pib_2){
            printf("Carta 1 (%s) venceu ,população: %.2f\n" ,cidade_1 , pib_1);
        }else if(pib_2 > pib_1){
            printf("Carta 2 (%s) venceu ,população: %2.f\n" ,cidade_2 , pib_2);  
        }
        else{
            printf("Empate!!!");
        }
        break;
    
    case 4:
        printf("Carta 1 (%s) , pontos turísticos: %d\n" , cidade_1 , ponto_turisticos_1);
        printf("Carta 2 (%s) , pontos turísticos: %d\n" , cidade_2 , pontos_turisticos_2);

        if (ponto_turisticos_1 > pontos_turisticos_2){
            printf("Carta 1 (%s) venceu ,pontos turísticos: %d\n" ,cidade_1 , ponto_turisticos_1);
        }else if(pib_2 > pib_1){
            printf("Carta 2 (%s) venceu ,pontos turísticos: %d\n" ,cidade_2 , pontos_turisticos_2);  
        }
        else{
            printf("Empate!!!");
        }
        break;

    case 5:
        printf("Carta 1 (%s) , desnsidade demografica: %.2f\n" , cidade_1 , dens_pupu_1);
        printf("Carta 2 (%s) , densidade demografica: %.2f\n" , cidade_2 , dens_popu_2);

        if (dens_pupu_1 < dens_popu_2){
            printf("Carta 1 (%s) venceu ,população: %2.f\n" ,cidade_1 , dens_pupu_1);
        }else if(pib_2 < pib_1){
            printf("Carta 2 (%s) venceu ,população: %2.f\n" ,cidade_2 , dens_popu_2);  
        }
        else{
            printf("Empate!!!");
        }
        break;

    default:
        printf("Você escolheu uma opção indisponivel!!!");
        break;
    }
    return 0 ;
}