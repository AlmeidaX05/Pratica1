#include <stdio.h>

int main() {
  float nota = 0.0f;

  printf("Entre com uma nota entre 0 e 10: ");
  int deu_certo = scanf("%f", &nota);
  
  printf("A nota digitada foi: %f\n", nota);
  
  double pi = 0.0;
  printf("Entre com um valor para pi com ate 10 casas: ");
  deu_certo = scanf("lf", &pi);

  printf("O valor de pi digitado foi: %.10f\n", pi);
  
  return 0;
}