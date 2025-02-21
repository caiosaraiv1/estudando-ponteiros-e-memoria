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

int main()
{
      int n = 0;

      printf("Digite o valor de n: ");
      scanf("%d", &n);

      int *array = (int *)malloc(n * sizeof(int));
      inserir(array, n);

      for(int i = 0; i < n; i++)
      {
            printf("%d ", array[i]);
      }
      free(array);
      return 0;
}
