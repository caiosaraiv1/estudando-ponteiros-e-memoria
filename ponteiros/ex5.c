#include <stdio.h>

void multiplicar(int *array, int length, int multiplier)
{
      for(int i = 0; i < length; i++)
      {
            array[i] = array[i] * multiplier;
      }
}

int main()
{
      int array[5] = {1, 2, 3, 4, 5};
      multiplicar(array, 5, 10);

      for(int i = 0; i < 5; i++)
      {
            printf("%d ", array[i]);
      }

}
