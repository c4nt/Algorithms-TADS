#include <stdio.h>
#include <math.h>

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

void sum_col(int mat[4][4])
{
    int i, j = 0, sqd = 0, sum = 0;
    
    print_mat(mat);

    for (i = 0; i < 4; i++)
    {
        sqd = pow(mat[i][j], 2);
        sum = sqd + sum;
    };
    printf("\nResultado da soma dos quadrados dos elementos da primeira coluna: %d \t\n", sum);

};

void sum_3rd_line(int mat[4][4])
{
    int i, j = 2, sum = 0;


    print_mat(mat);

    for (i = 0; i < 4; i++)
    {
        sum = sum + mat[j][i];
    };

    printf("\nResultado da soma dos elementos da terceira linha: %d", sum);
};

void sum_main_diagonal(int mat[4][4])
{
    int i, j = 0, sum = 0;

    print_mat(mat);

    for(i = 0; i < 4; i++)
    {
        sum = sum + mat[i][j];
        j++;
    };

    printf("\nResultado da soma dos elementos da diagonal princial: %d", sum);
};

void sum_even_2nd_line(int mat[4][4])
{
    int i = 1, j, sum = 0;

    print_mat(mat);

    for(j = 0; j < 4; j++)
    {
        if(j%2 == 0){
            sum = sum + mat[i][j];
        }
    };

    printf("\nResultado da soma dos elementos de indice par da segunda linha: %d", sum);
};

void switch_case(int mat[4][4])
{
    int choice = 0;

    printf("\nEscolha uma das alternativas digitando o numero da alternativa desejada:\n");
    printf("\n1) - Imprimir todos os elementos da matriz\n");
    printf("2) - Somar os quadrados de todos os elementos da primeira coluna\n");
    printf("3) - Somar todos os elementos da terceira linha\n");
    printf("4) - Somar os elementos da diagonal principal\n");
    printf("5) - Somar todos os elementos de indice par da segunda linha\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        print_mat(mat);
        break;
    case 2:
        sum_col(mat);
        break; 
    case 3:
        sum_3rd_line(mat);
        break;
    case 4:
        sum_main_diagonal(mat);
        break;   
    case 5:
        sum_even_2nd_line(mat);
        break;
    default:
        break;
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
    }

    switch_case(MAT);

    return 0;
}
