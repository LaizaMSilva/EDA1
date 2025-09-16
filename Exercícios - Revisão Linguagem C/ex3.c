#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

        printf("Insira um número para verificação: \n");
        scanf("%d", &n);

    if (((n % 2) != 0 && (n % 3) != 0 && (n % 5) != 0 && (n % 7) != 0) || n == 2 || n == 3 || n == 5 || n == 7){
        printf ("É primo");
    } else{
        printf ("Não primo");
    }
    return 0;
}
