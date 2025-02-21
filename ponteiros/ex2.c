#include <stdio.h>

void swap(int *a, int *b)
{
      int temp = *a;
      *a = *b;
      *b = temp;
}

int main()
{
      int a = 0, b = 0;

      printf("Digite o valor de a: ");
      scanf("%d", &a);

      printf("Digite o valor de b: ");
      scanf("%d", &b);

      swap(&a, &b);

      printf("A: %d, B: %d", a, b);
      return 0;
}
