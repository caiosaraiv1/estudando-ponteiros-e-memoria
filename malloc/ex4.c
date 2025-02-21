#include <stdio.h>
#include <stdlib.h>


int main()
{
      int tamanho = 0;

      printf("Digite o tamanho max do nome: ");
      scanf("%d", &tamanho);
      getchar();

      char *nome = (char *)malloc((tamanho + 1) * (sizeof(char)));

      printf("Digite seu nome: ");
      fgets(nome, tamanho, stdin);

      printf("Nome armazenado: %s", nome);
      free(nome);
      return 0;
}
