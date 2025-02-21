#include <stdio.h>

float convert_to_fahrenheit(float *temperature)
{
      return (*temperature * 1.8) + 32;
}

int main()
{
      float temperature;

      printf("Digite a temperatura em celsius: ");
      scanf("%f", &temperature);

     temperature =  convert_to_fahrenheit(&temperature);

      printf("Temperatura convertida: %.2f", temperature);
      return 0;
}

