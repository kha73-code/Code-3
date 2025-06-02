#include <stdio.h>
#include <time.h>

int main() {
   int A, B, C;
   clock_t inicio, fin;
   double tiempo;

   printf("Introduzca el valor de A: ");
   scanf("%d", &A);

   printf("Introduzca el valor de B: ");
   scanf("%d", &B);

   inicio = clock();

   C = A + B;
   printf("La suma de A y B es: %d\n", C);

   C = A - B;
   printf("La resta de A y B es: %d\n", C);

   C = A * B;
   printf("La multiplicacion de A y B es: %d\n", C);

   fin = clock();

   tiempo = ((double) (fin - inicio)) / CLOCKS_PER_SEC;

   printf("Tiempo de ejecución: %f segundos\n", tiempo);

   return 0;
}
