#include <stdio.h>
#include <stdlib.h>

void print_diagonal(float MAT[5][5])
{
    int i, j = 0, x = 0;
    float v[10];
    
    printf("\nConteudo da diagonal da matriz:\n");

    for (i = 0; i < 5; i++)
    {
        v[x] = MAT[i][j];
        printf("%.1f \t", v[x]);
        j++;        
    }
}

int main(int argc, char const *argv[])
{
    int i, j;
    float MAT[5][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            MAT[i][j] = (float)(rand()%30);
            printf("%.1f \t",MAT[i][j]);
        }
        printf("\n");
        
    }

    print_diagonal(MAT);
    
    return 0;
}
