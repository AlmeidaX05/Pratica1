#include <stdio.h>
#include <string.h>

int main(){

 char primeiro_nome [11];
    char ultimo_nome [11];
    char nome[31];
    
 printf("Entre com o seu primeiro nome:");
    scanf("%s", primeiro_nome);
    while(getchar() != '\n');

    printf("Entre com seu ultimo nome:");
    scanf("%s", ultimo_nome);
    while(getchar() != '\n');

strcpy(nome, primeiro_nome);
 printf("%s\n", nome);

 strcat(nome, " ");
    strcat(nome, ultimo_nome);
    printf("%s\n", nome);

    return 0;
}