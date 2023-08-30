//faça um programa em C que calcule a área de um triangulo (a = base x altura/2). considere base a altura numeros inteiros maior que 0

#include <stdio.h>

int main(){

unsigned int base = 5;
unsigned int altura = 15;

unsigned int calculo = base * altura/2;

printf ("a área do triangulo é igual a %d\n", calculo);
return 0; 
}