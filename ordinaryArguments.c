/*
? Acontinuacion se muestra un programa sencillo en C que ilustra la diferencia entre argumentos ordinarios, que son pasados por valor, y argumentos puntero, que son pasados por referencia.
*/

#include <stdio.h>

void func1(int u, int v);     /* prototipo de funcion */
void func2(int *pu, int *pv); /* prototipo de funcion */

int main()
{

  int u = 1;
  int v = 3;

  printf("\nAntes de la llamada a func1:  u = %d  v = %d", u, v);
  func1(u, v);
  printf("\nDespues de la llamada a func1:  u = %d  v = %d", u, v);

  printf("\n\nAntes de la llamada a func2:  u = %d  v = %d", u, v);
  func2(&u, &v);
  printf("\nDespues de la llamada a func2:  u = %d, v = %d\n", u, v);
}

void func1(int u, int v)
{
  u = 0;
  v = 0;
  printf("\nDentro de func1:    u = %d  v = %d", u, v);
  return;
}

void func2(int *pu, int *pv)
{
  *pu = 0;
  *pv = 0;
  printf("\nDentro de func2:    *pu = %d  *pv = %d", *pu, *pv);
  return;
}