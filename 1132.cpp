#include <stdio.h>
int main () 
{
  int x, y, soma = 0, cont, t = 0;
  scanf("%d %d", &x, &y);
  if (y < x)
  {
    t = x;
    x = y;
    y = t;
  }

  for (cont = x; cont <= y; cont++)
  {
    if (cont % 13 != 0)
    {
      soma += cont;
    }
  }
  printf("%d\n", soma);
  return 0;
}
