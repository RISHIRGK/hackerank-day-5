#include <stdio.h>
int main()
{
  int n, a, b;
  scanf("%d", &n);
  scanf("%d", &a);
  scanf("%d", &b);
  int c = (a + b);

  if (n>c)
  
    printf("%d", (b + 1));
  
 else if (n==c)
  {
    printf("%d", b);
  }
  else 
  {
    printf("%d", (b - 1));
  }

  return 0;
}