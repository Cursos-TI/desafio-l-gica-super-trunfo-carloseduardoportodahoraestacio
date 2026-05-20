#include <stdio.h>

int main() {

    /* ══════════════════════════════════════
       VARIÁVEIS — CARTA 1
    ══════════════════════════════════════ */
    char     estado1;
    int      numero1;
    char     cidade1[50];
    long int populacao1;
    float    area1;
    float    pib1;
    int      pontos_turisticos1;
    float    densidade1;
    float    pib_per_capita1;

    /* ══════════════════════════════════════
       VARIÁVEIS — CARTA 2
    ══════════════════════════════════════ */
    char     estado2;
    int      numero2;
    char     cidade2[50];
    long int populacao2;
    float    area2;
    float    pib2;
    int      pontos_turisticos2;
    float    densidade2;
    float    pib_per_capita2;

    /* ══════════════════════════════════════
       VARIÁVEIS DE CONTROLE
    ══════════════════════════════════════ */
    int opcao1, opcao2;
    int res1, res2;       /* 1=Carta1 vence, 2=Carta2 vence, 0=empate */
    int pontos1, pontos2; /* placar final */

    /* ══════════════════════════════════════
       CADASTRO — CARTA 1
    ══════════════════════════════════════ */
    printf("===========================================\n");
    printf("    SUPER TRUNFO - PAISES | Nivel Mestre  \n");
    printf("===========================================\n\n");

    printf("---------- Cadastro da Carta 1 ----------\n\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);
    printf("Numero da cidade (1-4): ");
    scanf("%d", &numero1);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%ld", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    /* ══════════════════════════════════════
       CADASTRO — CARTA 2
    ══════════════════════════════════════ */
    printf("\n---------- Cadastro da Carta 2 ----------\n\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);
    printf("Numero da cidade (1-4): ");
    scanf("%d", &numero2);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%ld", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    /* ══════════════════════════════════════
       CÁLCULOS AUTOMÁTICOS
    ══════════════════════════════════════ */
    densidade1      = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9f) / (float)populacao1;
    densidade2      = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9f) / (float)populacao2;

    /* ══════════════════════════════════════
       EXIBIÇÃO DAS CARTAS CADASTRADAS
    ══════════════════════════════════════ */
    printf("\n\n===========================================\n");
    printf("           CARTAS CADASTRADAS             \n");
    printf("===========================================\n");

    printf("\n+-----------------------------------------+\n");
    printf("|              CARTA 1                    |\n");
    printf("+-----------------------------------------+\n");
    printf("| Codigo             : %c0%d\n",        estado1, numero1);
    printf("| Cidade             : %s\n",           cidade1);
    printf("| Populacao          : %ld hab.\n",     populacao1);
    printf("| Area               : %.2f km2\n",     area1);
    printf("| PIB                : %.2f bi R$\n",   pib1);
    printf("| Pontos turisticos  : %d\n",            pontos_turisticos1);
    printf("| Densidade popul.   : %.2f hab/km2\n", densidade1);
    printf("| PIB per capita     : R$ %.2f\n",      pib_per_capita1);
    printf("+-----------------------------------------+\n");

    printf("\n+-----------------------------------------+\n");
    printf("|              CARTA 2                    |\n");
    printf("+-----------------------------------------+\n");
    printf("| Codigo             : %c0%d\n",        estado2, numero2);
    printf("| Cidade             : %s\n",           cidade2);
    printf("| Populacao          : %ld hab.\n",     populacao2);
    printf("| Area               : %.2f km2\n",     area2);
    printf("| PIB                : %.2f bi R$\n",   pib2);
    printf("| Pontos turisticos  : %d\n",            pontos_turisticos2);
    printf("| Densidade popul.   : %.2f hab/km2\n", densidade2);
    printf("| PIB per capita     : R$ %.2f\n",      pib_per_capita2);
    printf("+-----------------------------------------+\n");

    /* ══════════════════════════════════════
       MENU DINÂMICO — 1º ATRIBUTO
    ══════════════════════════════════════ */
    printf("\n\n===========================================\n");
    printf("    ESCOLHA O 1o ATRIBUTO A COMPARAR      \n");
    printf("===========================================\n");
    printf("  1. Populacao\n");
    printf("  2. Area\n");
    printf("  3. PIB\n");
    printf("  4. Pontos Turisticos\n");
    printf("  5. Densidade Populacional  (menor vence)\n");
    printf("  6. PIB per Capita\n");
    printf("-------------------------------------------\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao1);

    /* Validação da 1ª escolha */
    while (opcao1 < 1 || opcao1 > 6) {
        printf("\n  [!] Opcao invalida! Escolha entre 1 e 6.\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao1);
    }

    /* ══════════════════════════════════════
       MENU DINÂMICO — 2º ATRIBUTO
       (opção igual ao 1º é ocultada e rejeitada)
    ══════════════════════════════════════ */
    printf("\n\n===========================================\n");
    printf("    ESCOLHA O 2o ATRIBUTO A COMPARAR      \n");
    printf("===========================================\n");
    if (opcao1 != 1) printf("  1. Populacao\n");
    if (opcao1 != 2) printf("  2. Area\n");
    if (opcao1 != 3) printf("  3. PIB\n");
    if (opcao1 != 4) printf("  4. Pontos Turisticos\n");
    if (opcao1 != 5) printf("  5. Densidade Populacional  (menor vence)\n");
    if (opcao1 != 6) printf("  6. PIB per Capita\n");
    printf("-------------------------------------------\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao2);

    /* Validação da 2ª escolha */
    while (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) {
        printf("\n  [!] Opcao invalida ou ja escolhida! Tente novamente.\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao2);
    }

    /* ══════════════════════════════════════
       COMPARAÇÃO — 1º ATRIBUTO
       res1: 1=Carta1 vence, 2=Carta2 vence, 0=empate
    ══════════════════════════════════════ */
    switch (opcao1) {
        case 1: /* Populacao — maior vence */
            res1 = (populacao1 > populacao2) ? 1 :
                   (populacao2 > populacao1) ? 2 : 0;
            break;
        case 2: /* Area — maior vence */
            res1 = (area1 > area2) ? 1 :
                   (area2 > area1) ? 2 : 0;
            break;
        case 3: /* PIB — maior vence */
            res1 = (pib1 > pib2) ? 1 :
                   (pib2 > pib1) ? 2 : 0;
            break;
        case 4: /* Pontos Turisticos — maior vence */
            res1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 :
                   (pontos_turisticos2 > pontos_turisticos1) ? 2 : 0;
            break;
        case 5: /* Densidade — menor vence */
            res1 = (densidade1 < densidade2) ? 1 :
                   (densidade2 < densidade1) ? 2 : 0;
            break;
        case 6: /* PIB per Capita — maior vence */
            res1 = (pib_per_capita1 > pib_per_capita2) ? 1 :
                   (pib_per_capita2 > pib_per_capita1) ? 2 : 0;
            break;
        default:
            res1 = 0;
    }

    /* ══════════════════════════════════════
       COMPARAÇÃO — 2º ATRIBUTO
    ══════════════════════════════════════ */
    switch (opcao2) {
        case 1:
            res2 = (populacao1 > populacao2) ? 1 :
                   (populacao2 > populacao1) ? 2 : 0;
            break;
        case 2:
            res2 = (area1 > area2) ? 1 :
                   (area2 > area1) ? 2 : 0;
            break;
        case 3:
            res2 = (pib1 > pib2) ? 1 :
                   (pib2 > pib1) ? 2 : 0;
            break;
        case 4:
            res2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 :
                   (pontos_turisticos2 > pontos_turisticos1) ? 2 : 0;
            break;
        case 5:
            res2 = (densidade1 < densidade2) ? 1 :
                   (densidade2 < densidade1) ? 2 : 0;
            break;
        case 6:
            res2 = (pib_per_capita1 > pib_per_capita2) ? 1 :
                   (pib_per_capita2 > pib_per_capita1) ? 2 : 0;
            break;
        default:
            res2 = 0;
    }

    /* ══════════════════════════════════════
       EXIBIÇÃO — RESULTADO DO 1º ATRIBUTO
    ══════════════════════════════════════ */
    printf("\n\n===========================================\n");
    printf("        RESULTADO DAS COMPARACOES         \n");
    printf("===========================================\n");

    printf("\n---[ Atributo 1 ]---------------------------\n");

    switch (opcao1) {
        case 1:
            printf("  Atributo : Populacao\n");
            printf("  Carta 1  : %s = %ld hab.\n",  cidade1, populacao1);
            printf("  Carta 2  : %s = %ld hab.\n",  cidade2, populacao2);
            break;
        case 2:
            printf("  Atributo : Area\n");
            printf("  Carta 1  : %s = %.2f km2\n",  cidade1, area1);
            printf("  Carta 2  : %s = %.2f km2\n",  cidade2, area2);
            break;
        case 3:
            printf("  Atributo : PIB\n");
            printf("  Carta 1  : %s = %.2f bi R$\n", cidade1, pib1);
            printf("  Carta 2  : %s = %.2f bi R$\n", cidade2, pib2);
            break;
        case 4:
            printf("  Atributo : Pontos Turisticos\n");
            printf("  Carta 1  : %s = %d pontos\n",  cidade1, pontos_turisticos1);
            printf("  Carta 2  : %s = %d pontos\n",  cidade2, pontos_turisticos2);
            break;
        case 5:
            printf("  Atributo : Densidade Populacional (menor vence)\n");
            printf("  Carta 1  : %s = %.2f hab/km2\n", cidade1, densidade1);
            printf("  Carta 2  : %s = %.2f hab/km2\n", cidade2, densidade2);
            break;
        case 6:
            printf("  Atributo : PIB per Capita\n");
            printf("  Carta 1  : %s = R$ %.2f\n",   cidade1, pib_per_capita1);
            printf("  Carta 2  : %s = R$ %.2f\n",   cidade2, pib_per_capita2);
            break;
    }

    printf("  Resultado: %s\n",
        res1 == 1 ? ">> Carta 1 venceu!" :
        res1 == 2 ? ">> Carta 2 venceu!" :
                    ">> Empate!");

    /* ══════════════════════════════════════
       EXIBIÇÃO — RESULTADO DO 2º ATRIBUTO
    ══════════════════════════════════════ */
    printf("\n---[ Atributo 2 ]---------------------------\n");

    switch (opcao2) {
        case 1:
            printf("  Atributo : Populacao\n");
            printf("  Carta 1  : %s = %ld hab.\n",  cidade1, populacao1);
            printf("  Carta 2  : %s = %ld hab.\n",  cidade2, populacao2);
            break;
        case 2:
            printf("  Atributo : Area\n");
            printf("  Carta 1  : %s = %.2f km2\n",  cidade1, area1);
            printf("  Carta 2  : %s = %.2f km2\n",  cidade2, area2);
            break;
        case 3:
            printf("  Atributo : PIB\n");
            printf("  Carta 1  : %s = %.2f bi R$\n", cidade1, pib1);
            printf("  Carta 2  : %s = %.2f bi R$\n", cidade2, pib2);
            break;
        case 4:
            printf("  Atributo : Pontos Turisticos\n");
            printf("  Carta 1  : %s = %d pontos\n",  cidade1, pontos_turisticos1);
            printf("  Carta 2  : %s = %d pontos\n",  cidade2, pontos_turisticos2);
            break;
        case 5:
            printf("  Atributo : Densidade Populacional (menor vence)\n");
            printf("  Carta 1  : %s = %.2f hab/km2\n", cidade1, densidade1);
            printf("  Carta 2  : %s = %.2f hab/km2\n", cidade2, densidade2);
            break;
        case 6:
            printf("  Atributo : PIB per Capita\n");
            printf("  Carta 1  : %s = R$ %.2f\n",   cidade1, pib_per_capita1);
            printf("  Carta 2  : %s = R$ %.2f\n",   cidade2, pib_per_capita2);
            break;
    }

    printf("  Resultado: %s\n",
        res2 == 1 ? ">> Carta 1 venceu!" :
        res2 == 2 ? ">> Carta 2 venceu!" :
                    ">> Empate!");

    /* ══════════════════════════════════════
       PLACAR E VENCEDOR FINAL
       Cada vitória vale 1 ponto; empate = 0
    ══════════════════════════════════════ */
    pontos1 = (res1 == 1 ? 1 : 0) + (res2 == 1 ? 1 : 0);
    pontos2 = (res1 == 2 ? 1 : 0) + (res2 == 2 ? 1 : 0);

    printf("\n===========================================\n");
    printf("              PLACAR FINAL                \n");
    printf("===========================================\n\n");
    printf("  %-30s : %d ponto(s)\n", cidade1, pontos1);
    printf("  %-30s : %d ponto(s)\n", cidade2, pontos2);
    printf("\n-------------------------------------------\n");

    /* Decisão final com ternários aninhados.
       Em caso de empate no placar (1×1), desempata pelo 1º atributo. */
    if (pontos1 > pontos2) {
        printf("  VENCEDOR GERAL: %s\n", cidade1);
        printf("  %s venceu %d-%d nos atributos escolhidos!\n",
               cidade1, pontos1, pontos2);
    } else if (pontos2 > pontos1) {
        printf("  VENCEDOR GERAL: %s\n", cidade2);
        printf("  %s venceu %d-%d nos atributos escolhidos!\n",
               cidade2, pontos2, pontos1);
    } else {
        /* Placar empatado — desempate pelo resultado do 1º atributo */
        if (res1 == 1) {
            printf("  VENCEDOR GERAL: %s\n", cidade1);
            printf("  Placar empatado! Desempate pelo 1o atributo.\n");
        } else if (res1 == 2) {
            printf("  VENCEDOR GERAL: %s\n", cidade2);
            printf("  Placar empatado! Desempate pelo 1o atributo.\n");
        } else {
            printf("  VENCEDOR GERAL: EMPATE TOTAL!\n");
            printf("  Nenhuma carta venceu em nenhum atributo.\n");
        }
    }

    printf("\n===========================================\n\n");

    return 0;
}
