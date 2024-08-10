/*Complete o código para verificar se a matriz é uma matriz identidade.*/

#include <stdio.h> 
#include <stdbool.h>

bool idt_mat(int matriz[3][3])
{
    int i,j = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(i == j)
            {
                if(matriz[i][j] != 1) 
                    return false;                    
            }
            else
            {
                if(matriz[i][j] != 0)
                {
                    return false;                    
                }
            }
        } 
    }
    return true;
}

int main() { 
    int matriz[3][3] = {{1, 1, 0}, {0, 1, 0}, {0, 0, 1}}; 
    int i,j;

    if(idt_mat(matriz))
    {
        printf("Essa é uma matriz identidade\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("\t%d", matriz[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Essa não é uma matriz identidade\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("\t%d", matriz[i][j]);
            }
            printf("\n");
        }
    }

}
 
