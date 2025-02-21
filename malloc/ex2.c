#include <stdio.h>
#include <stdlib.h>

void inserir(int *array, int tamanho)
{
      for(int i = 0; i < tamanho; i++)
      {
            printf("Digite o %do valor: ", i + 1);
            scanf("%d", &array[i]);
      }
}

void somar(int *array, int tamanho, int *sum)
{
      for(int i = 0; i < tamanho; i++)
      {
            *sum += array[i];
      }
}

int main()
{
      int n = 0, sum = 0;

      printf("Digite o valor de n: ");
      scanf("%d", &n);

      int *array = (int *)malloc(n * sizeof(int));
      inserir(array, n);
      somar(array, n, &sum);
      printf("Soma total: %d", sum);
      free(array);
      return 0;
}
