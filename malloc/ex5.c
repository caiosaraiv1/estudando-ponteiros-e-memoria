#include <stdio.h>
#include <stdlib.h>

int main()
{
      int m = 0, n = 0;

      printf("Digite o tamanho das linhas: ");
      scanf("%d", &m);
      printf("Digite o tamanho das colunas: ");
      scanf("%d", &n);

      int **matriz = (int **)malloc(m * sizeof(int));
      for(int i = 0; i < m; i++)
      {
            matriz[i] = (int *)malloc(n * sizeof(int));
      }

      for(int i = 0; i < m; i++)
      {
            for(int j = 0; j < n; j++)
            {
                  printf("Digite o valor da pos [%d][%d]: ", i, j);
                  scanf("%d", &matriz[i][j]);
            }
      }
      for(int i = 0; i < m; i++)
      {
            for(int j = 0; j < n; j++)
            {
                  printf("%d ", matriz[i][j]);
            }
      }
      free(matriz);
      return 0;
}
