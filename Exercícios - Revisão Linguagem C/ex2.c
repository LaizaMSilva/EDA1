#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    do
    {
        printf("Insira o tamanho do vetor (tamanho mínimo 2): \n");
        scanf("%d", &n);

    } while (n < 2);
    
    int *v = (int *)malloc(n * sizeof(int));
    
    if (v == NULL)
    {
        printf("Erro ao alocar na memória\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("insira o %d° valor: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int produto = 1;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                produto *= v[j];
            }
        }

        printf("%d ", produto);
    }

    free(v);
    return 0;
}
