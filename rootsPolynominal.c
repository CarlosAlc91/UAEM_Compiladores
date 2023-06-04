// 1. Define el problema
// Escribe un programa en C que resuelva la ecuación cuadrática ax^2 + bx + c = 0 para las raíces reales usando los valores para a, b y c.
// Considera las siguientes posibilidades:
// a) si el discriminante es positivo, existen dos raíces reales.
// b) si el discriminante es cero, hay una raíz real.
// c) si el discriminante es menor a cero, no hay raíces reales.
// ENTRADAS: coeficientes a, b y c de la ecuación cuadrática.
// SALIDA: raíces reales x1 y x2 de la ecuación cuadrática.

#include <stdio.h>
#include <math.h>

int main()
{
  // creacion de variables => D = discriminante.
  float a, b, c, D, x1, x2;

  // Peticion al usuario para ingresar coeficientes mediante pantalla.
  printf("Introduce los coeficientes de la ecuacion cuadratica (a, b, c)\n");

  // captura o guardado de datos.
  scanf("%f%f%f", &a, &b, &c);

  // operacion para obtener el discriminante de las raices.
  D = b * b - 4 * a * c;

  // loop if, para el calculo de las raices reales
  if (D > 0)
  {
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
    printf("Las raices son: %.2f y %.2f\n", x1, x2);
  }
  else if (D == 0)
  {
    x1 = -b / (2 * a);
  }
  else
  {
    // Muestra en pantalla del resultado de las operaciones.
    printf("La raiz es: %.2f\n", x1);
  }

  return 0;
}