#include <stdio.h>

int main() {
   int numero =0;

   printf("Entre com um numero: ");
   int deu_certo = scanf("%i", &numero); 

   printf("Voce digitou: %i\n", numero);
   print(" A leitura deu certo? %i\n", deu_certo);

   int coord_x = 0;
   int coord_y = 0;

  printf("Entre com as coordenadas do ponto: ");
  deu_certo= scanf("%i %i", &coord_x, &coord_y);

  printf("Voce digitou: %i e %i\n", coord_x, coord_y);
  print("A leitura deu certo? %i\n", deu_certo);
  
 return 0;
}