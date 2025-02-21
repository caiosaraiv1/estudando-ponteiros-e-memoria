#include <stdio.h>

int maior(int *array, int length)
{
      int maior = 0;

      for(int i = 0; i < length; i++)
      {
            if(array[i] > maior)
            {
                  maior = array[i];
            }
      }

      return maior;
}

int main()
{
      int array[5] = {12, 45, 7, 89, 23};
      int maior_num = maior(array, 5);
      printf("Maior num: %d", maior_num);
      return 0;
}
