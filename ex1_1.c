#include <stdio.h>

int main()
{
  double n[2];
  scanf("%lf %lf", &n[0], &n[1]);
  printf("%%.1f %%.1f %%.1f %%.1f", n[0] + n[1], n[0] - n[1], n[0] * n[1], n[0] / n[1]);
  return 0;

}
