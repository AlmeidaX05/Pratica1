#include <stdio.h>

int main() {
  char tecla = '\0'; // caractere nulo

  printf("Pressione uma tecla: ");
  int deu_certo = scanf("%c", &tecla);

  printf("A tecla digitada foi: %c\n", tecla);
  getchar();

  printf("Digite outra tecla" );
  deu_certo = scanf("%c", &tecla);
  getchar();
  printf("A tecla digitada foi: %c\n", tecla);
  
  char nome [31];
  printf("Digite seu nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("Voce digitou: %s\n", nome);
  
  return 0;
}