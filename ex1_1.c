#include <stdio.h>

int main()
{
  int n[2];
  scanf("%d %d", &n[0], &n[1]);
  printf("%d\n%d\n%d\n%d", n[0] + n[1], n[0] - n[1], n[0] * n[1], n[0] / n[1]);
  return 0;

}
