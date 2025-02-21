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

      int continuar;
      printf("Deseja aumentar o tamanho do array? (1 - sim 0 - nao): ");
      scanf("%d", &continuar);
      if (continuar == 0)
      {
            free(array);
            return -1;
      }

      int novo_tamanho = 0;
      printf("Digite o novo tamanho: ");
      scanf("%d", &novo_tamanho);

      int *novo_array = (int *)realloc(array, novo_tamanho * sizeof(int));
      if(novo_tamanho > n)
      {
            for(int i = n; i < novo_tamanho; i++)
            {
                  printf("Digite o %do valor: ", i + 1);
                  scanf("%d", &novo_array[i]);
            }
      }
      else
      {
            printf("Nao e permitido diminuir!");
            free(novo_array);
            return -1;
      }

      for(int i = 0; i < novo_tamanho; i++)
      {
            printf("%d ", novo_array[i]);
      }
      free(novo_array);
      return 0;
}
