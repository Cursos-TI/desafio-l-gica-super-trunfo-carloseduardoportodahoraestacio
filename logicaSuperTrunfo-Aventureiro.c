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
       VARIÁVEL DO MENU
    ══════════════════════════════════════ */
    int opcao;

    /* ══════════════════════════════════════
       CADASTRO — CARTA 1
    ══════════════════════════════════════ */
    printf("===========================================\n");
    printf(" SUPER TRUNFO - PAISES | Nivel Aventureiro\n");
    printf("===========================================\n\n");

    printf("---------- Cadastro da Carta 1 ----------\n\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Numero da cidade (1 a 4): ");
    scanf("%d", &numero1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%ld", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    /* ══════════════════════════════════════
       CADASTRO — CARTA 2
    ══════════════════════════════════════ */
    printf("\n---------- Cadastro da Carta 2 ----------\n\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Numero da cidade (1 a 4): ");
    scanf("%d", &numero2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%ld", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
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
    printf("         CARTAS CADASTRADAS               \n");
    printf("===========================================\n");

    /* — Carta 1 — */
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

    /* — Carta 2 — */
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
       MENU INTERATIVO — switch
    ══════════════════════════════════════ */
    printf("\n\n===========================================\n");
    printf("       ESCOLHA O ATRIBUTO A COMPARAR      \n");
    printf("===========================================\n\n");
    printf("  1. Populacao\n");
    printf("  2. Area\n");
    printf("  3. PIB\n");
    printf("  4. Pontos Turisticos\n");
    printf("  5. Densidade Populacional  (menor vence)\n");
    printf("  6. PIB per Capita\n");
    printf("  7. Comparar TODOS os atributos\n");
    printf("\n-------------------------------------------\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("\n===========================================\n");
    printf("         RESULTADO DA COMPARACAO          \n");
    printf("===========================================\n\n");

    switch (opcao) {

        /* ─── Opção 1: População ─── */
        case 1:
            printf("Atributo: Populacao\n\n");
            if (populacao1 > populacao2) {
                printf("Carta 1 venceu! (%s: %ld > %s: %ld)\n",
                       cidade1, populacao1, cidade2, populacao2);
            } else if (populacao2 > populacao1) {
                printf("Carta 2 venceu! (%s: %ld > %s: %ld)\n",
                       cidade2, populacao2, cidade1, populacao1);
            } else {
                printf("Empate! Ambas com %ld habitantes.\n", populacao1);
            }
            break;

        /* ─── Opção 2: Área ─── */
        case 2:
            printf("Atributo: Area\n\n");
            if (area1 > area2) {
                printf("Carta 1 venceu! (%s: %.2f km2 > %s: %.2f km2)\n",
                       cidade1, area1, cidade2, area2);
            } else if (area2 > area1) {
                printf("Carta 2 venceu! (%s: %.2f km2 > %s: %.2f km2)\n",
                       cidade2, area2, cidade1, area1);
            } else {
                printf("Empate! Ambas com %.2f km2.\n", area1);
            }
            break;

        /* ─── Opção 3: PIB ─── */
        case 3:
            printf("Atributo: PIB\n\n");
            if (pib1 > pib2) {
                printf("Carta 1 venceu! (%s: %.2f bi R$ > %s: %.2f bi R$)\n",
                       cidade1, pib1, cidade2, pib2);
            } else if (pib2 > pib1) {
                printf("Carta 2 venceu! (%s: %.2f bi R$ > %s: %.2f bi R$)\n",
                       cidade2, pib2, cidade1, pib1);
            } else {
                printf("Empate! Ambas com %.2f bi R$.\n", pib1);
            }
            break;

        /* ─── Opção 4: Pontos Turísticos ─── */
        case 4:
            printf("Atributo: Pontos Turisticos\n\n");
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Carta 1 venceu! (%s: %d > %s: %d)\n",
                       cidade1, pontos_turisticos1, cidade2, pontos_turisticos2);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Carta 2 venceu! (%s: %d > %s: %d)\n",
                       cidade2, pontos_turisticos2, cidade1, pontos_turisticos1);
            } else {
                printf("Empate! Ambas com %d pontos turisticos.\n", pontos_turisticos1);
            }
            break;

        /* ─── Opção 5: Densidade Populacional (menor vence) ─── */
        case 5:
            printf("Atributo: Densidade Populacional (menor vence)\n\n");
            if (densidade1 < densidade2) {
                printf("Carta 1 venceu! (%s: %.2f hab/km2 < %s: %.2f hab/km2)\n",
                       cidade1, densidade1, cidade2, densidade2);
            } else if (densidade2 < densidade1) {
                printf("Carta 2 venceu! (%s: %.2f hab/km2 < %s: %.2f hab/km2)\n",
                       cidade2, densidade2, cidade1, densidade1);
            } else {
                printf("Empate! Ambas com %.2f hab/km2.\n", densidade1);
            }
            break;

        /* ─── Opção 6: PIB per Capita ─── */
        case 6:
            printf("Atributo: PIB per Capita\n\n");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Carta 1 venceu! (%s: R$ %.2f > %s: R$ %.2f)\n",
                       cidade1, pib_per_capita1, cidade2, pib_per_capita2);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Carta 2 venceu! (%s: R$ %.2f > %s: R$ %.2f)\n",
                       cidade2, pib_per_capita2, cidade1, pib_per_capita1);
            } else {
                printf("Empate! Ambas com R$ %.2f.\n", pib_per_capita1);
            }
            break;

        /* ─── Opção 7: Comparar TODOS (aninhado) ─── */
        case 7:
            printf("Comparando todos os atributos:\n\n");

            /* Populacao */
            printf("Populacao          : ");
            if (populacao1 > populacao2) {
                printf("Carta 1 venceu! (%ld > %ld)\n", populacao1, populacao2);
            } else {
                if (populacao2 > populacao1) {
                    printf("Carta 2 venceu! (%ld > %ld)\n", populacao2, populacao1);
                } else {
                    printf("Empate! (%ld)\n", populacao1);
                }
            }

            /* Area */
            printf("Area               : ");
            if (area1 > area2) {
                printf("Carta 1 venceu! (%.2f > %.2f km2)\n", area1, area2);
            } else {
                if (area2 > area1) {
                    printf("Carta 2 venceu! (%.2f > %.2f km2)\n", area2, area1);
                } else {
                    printf("Empate! (%.2f km2)\n", area1);
                }
            }

            /* PIB */
            printf("PIB                : ");
            if (pib1 > pib2) {
                printf("Carta 1 venceu! (%.2f > %.2f bi R$)\n", pib1, pib2);
            } else {
                if (pib2 > pib1) {
                    printf("Carta 2 venceu! (%.2f > %.2f bi R$)\n", pib2, pib1);
                } else {
                    printf("Empate! (%.2f bi R$)\n", pib1);
                }
            }

            /* Pontos Turisticos */
            printf("Pontos turisticos  : ");
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Carta 1 venceu! (%d > %d)\n", pontos_turisticos1, pontos_turisticos2);
            } else {
                if (pontos_turisticos2 > pontos_turisticos1) {
                    printf("Carta 2 venceu! (%d > %d)\n", pontos_turisticos2, pontos_turisticos1);
                } else {
                    printf("Empate! (%d)\n", pontos_turisticos1);
                }
            }

            /* Densidade (menor vence) */
            printf("Densidade popul.   : ");
            if (densidade1 < densidade2) {
                printf("Carta 1 venceu! (%.2f < %.2f hab/km2)\n", densidade1, densidade2);
            } else {
                if (densidade2 < densidade1) {
                    printf("Carta 2 venceu! (%.2f < %.2f hab/km2)\n", densidade2, densidade1);
                } else {
                    printf("Empate! (%.2f hab/km2)\n", densidade1);
                }
            }

            /* PIB per Capita */
            printf("PIB per capita     : ");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Carta 1 venceu! (R$ %.2f > R$ %.2f)\n", pib_per_capita1, pib_per_capita2);
            } else {
                if (pib_per_capita2 > pib_per_capita1) {
                    printf("Carta 2 venceu! (R$ %.2f > R$ %.2f)\n", pib_per_capita2, pib_per_capita1);
                } else {
                    printf("Empate! (R$ %.2f)\n", pib_per_capita1);
                }
            }
            break;

        /* ─── Opção inválida ─── */
        default:
            printf("Opcao invalida! Escolha um numero de 1 a 7.\n");
            break;
    }

    printf("\n-------------------------------------------\n\n");

    return 0;
}
