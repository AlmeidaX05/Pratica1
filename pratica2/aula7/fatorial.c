#include <stdio.h>
 int main(){

     int numero;
     int fatorial;

     scanf("%i", &numero);
     for(int i=numero; i>0; i--) {
     fatorial = fatorial * i;

    printf("%i, ", i, fatorial * i);
     }


    return 0;
 }
