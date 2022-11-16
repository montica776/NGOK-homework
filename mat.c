#include <stdio.h>
int main()
#define SIZE_ROMAPEDIK 5
#define SIZE_ROMAPEDIGRI 5
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
    int romansy = 0;
    int kakaska = 0;
    for (i = 0; i < SIZE_ROMAPEDIK; i++) {
        for (j = 0; j < SIZE_ROMAPEDIGRI; j++) {
            if (romansu[i][j] % 2 == 0) {
                int romansy = &romansy[i][j];
                kakaska += 1;
            }
        }
    }
}
