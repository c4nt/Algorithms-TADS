#include <stdio.h>
#include <stdlib.h>

void print_mat_2(int mat_1[4][4], int mat_2[4][4])
{
    int i, j;
    printf("\n");
    printf("Matriz 1:\n");
    for(i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \t", mat_1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Matriz 2:\n");
    for(i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \t", mat_2[i][j]);
        }
        printf("\n");
    }
};

void sum_mat(int mat_1[4][4], int mat_2[4][4])
{
    int i, j, matRes[4][4];

    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 4; j++)
        {
            matRes[i][j] = 0;
        }
    };

    printf("\nResultado da soma das matrizes 1 e 2:\n\n");

    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 4; j++)
        {
            matRes[i][j] += mat_1[i][j] + mat_2[i][j];
            printf("%d\t", matRes[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int MAT_1[4][4], MAT_2[4][4], j, i;

    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 4; j++)
        {
            MAT_1[i][j] = 1 + (rand()%30);
        }
    }

    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 4; j++)
        {
            MAT_2[i][j] = 1 + (rand()%30);
        }
    }

    print_mat_2(MAT_1, MAT_2);
    sum_mat(MAT_1, MAT_2);

    return 0;
}
