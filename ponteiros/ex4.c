#include <stdio.h>

int contar(char *str)
{
      int i = 0;
      while(str[i] != '\0')
      {
            i++;
      }
      return i;
}

int main()
{
      char str[] = "otorrinolaringologista";
      int tamanho = contar(str);
      printf("Tamanho: %d\n", tamanho);
      return 0;
}
