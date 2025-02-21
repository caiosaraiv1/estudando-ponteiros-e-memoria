#include <stdio.h>

void soma(int *x, int *y)
{
      int temp = *x;
      *x = temp + *y;
}

int main()
{
      int x = 0, y = 0;

      printf("Digite o valor de x: ");
      scanf("%d", &x);

      printf("Digite o valor de y: ");
      scanf("%d", &y);

      soma(&x, &y);

      printf("Resultado: %d", x);
      return 0;
}
