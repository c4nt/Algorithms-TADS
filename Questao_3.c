#include <stdio.h>
#include <stdlib.h>

void print_mat(int mat[4][4])
{
    int i, j;
    printf("\n");
    printf("Entrada:\n");
    for(i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }
};

void transposed_mat(int mat[4][4])
{
    int i, j;
    printf("\n");
    printf("Matriz Transposta:\n");
    for(i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \t", mat[j][i]);
        }
        printf("\n");
    };
};

int main(int argc, char const *argv[])
{
    int MAT[4][4], i, j;
    
    for(i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &MAT[i][j]);
        }  
    };

    print_mat(MAT);
    transposed_mat(MAT);
    
    return 0;
}
