#include <stdio.h>
#include <stdlib.h>

void ex1(int n, int k)
{
    int *v = (int *)malloc(n * sizeof(int));

    if (v == NULL)
    {
        printf("Erro ao alocar memória!\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("insira o %d° valor: ", i + 1);
        scanf("%d", &v[i]);
    }

    int soma = 0, verifica = 0;

    for (int i = 0; i < n && verifica != 1; i++)
    {
        for (int j = 0; j < n && verifica != 1; j++)
        {
            if (i != j)
            {
                soma = v[i];
                soma += v[j];
            }

            if (soma == k)
            {
                printf("\nTrue\n\n");
                verifica = 1;
            }
        }
    }

    if (verifica == 0)
    {
        printf("\nFalse\n\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }

    free(v);
    return;
}

int main()
{
    int op;

    printf("Escolha uma das opções abaixo utilizando somente o número de identificação: \n");
    printf("1  - ex1 \n2  - ex2 \n3  - ex3 \n4  - ex4 \n5  - ex5 \n6  - ex6 \n7  - ex7 \n8  - ex8 \n9  - ex9 \n10 - ex10 \n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
    {
        int n, k;

        printf("Insira o tamanho do vetor: \n");
        scanf("%d", &n);
        printf("Insira o valor a verificar se existe no vetor: \n");
        scanf("%d", &k);

        ex1(n, k);

        break;
    }
    default:
        break;
    }
}
