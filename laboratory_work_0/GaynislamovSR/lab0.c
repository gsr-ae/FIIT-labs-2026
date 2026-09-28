#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float x, y, c;
  float x1, x2, y1, y2, r1, r2, r;

  printf("x1, y1, r1, x2, y2, r2\n");
  scanf("%f %f %f %f %f %f", &x1, &y1, &r1, &x2, &y2, &r2);


  if (r1 < 0 || r2 < 0) {printf("error: r1 or r2 < 0\n"); return 0;}

  if (r1 < r2) {
    r = r1;
    r1 = r2;
    r2 = r;
  }

  x = abs(x1-x2);
  y = abs(y1-y2);
  c = sqrt(x*x + y*y);

  if (c == 0)             printf("Центры совподают\n");
  else if (c < r1-r2)     printf("Одна внутри другой (не пересекаются)\n"); 
  else if (c == r1-r2)    printf("Внутреннее касание\n"); 
  else if (r1-r2 < c &&
           c < r1+r2)     printf("Пересекаются в 2 точках\n"); 
  else if (c == r1+r2)    printf("Внешнее касание\n");
  else if (c > r1+r2)     printf("Вне друг друга (не пересекаются)\n"); 
  
  return 0;
}
