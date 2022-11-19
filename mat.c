#include <stdio.h>
int main()
#define SIZE_ROMAPEDIK 3
#define SIZE_ROMAPEDIGRI 3
{
    int romansu[5][5];
    int i, j;
    for (i = 0; i < SIZE_ROMAPEDIK; i++) {
        for (j = 0; j < SIZE_ROMAPEDIGRI; j++) {
            scanf("%d", &romansu[i][j]);
            printf("romansu[%d][%d]", i, j);
            printf("\n");
        }
    }
    printf("romansu\n");
    for (i = 0; i < SIZE_ROMAPEDIK; i++) {
        printf("\n");
        for (j = 0; j < SIZE_ROMAPEDIGRI; j++) {
            printf(" %d ", romansu[i][j]);
        }
    }
    printf("\n");
    int ch = 0;
    int kakaska = 0;
    int nechetkiy = 0;
    int ne = 0;
    int sumkakashka = 0;
    int sumne = 0;
    for (i = 0; i < SIZE_ROMAPEDIK; i++) {
        for (j = 0; j < SIZE_ROMAPEDIGRI; j++) {
            if (romansu[i][j] % 2 == 0) {
                ch = romansu[i][j];
                kakaska += 1;
                sumkakashka += romansu[i][j];
            } else {
                romansu[i][j];
                ne += 1;
                sumne += romansu[i][j];
            }
        }
    }
    printf("Колличество чётных элементов = %d", kakaska);
    printf("\n");
    printf("Колличество сумм чётных элементов = %d", sumkakashka);
    printf("\n");
    printf("Колличество нечетных чисел = %d", ne);
    printf("\n");
    printf("Колличество сумм нечетных чисел = %d", sumne);
    printf("\n");

    for (i = SIZE_ROMAPEDIK - 1; i >= 0; i--) {
        printf("\n");
        for (j = SIZE_ROMAPEDIGRI - 1; j >= 0; j--) {
            printf(" %d ", romansu[i][j]);
        }
    }
}
