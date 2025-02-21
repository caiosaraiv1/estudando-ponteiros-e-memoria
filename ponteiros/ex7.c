#include <stdio.h>
#include <stdlib.h>

void inserir(int *array, int length)
{
      for(int i = 0; i < length; i++)
      {
            printf("Digite o %do valor: ", i + 1);
            scanf("%d", &array[i]);
      }
}

int main()
{
      int tamanho = 0;
      printf("Digite o tamanho do array: ");
      scanf("%d", &tamanho);

      int *array = (int*) malloc(tamanho * sizeof(int));
      inserir(array, tamanho);

      for(int i = 0; i < tamanho; i++)
      {
            printf("%d ", array[i]);
      }
      free(array);
      return 0;
}
