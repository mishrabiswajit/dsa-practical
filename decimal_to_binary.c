#include <stdio.h>
int d_to_b(int n);
int d_to_b(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else
  {
    d_to_b(n / 2);
    printf("%d", n % 2);
  }
}
int main()
{
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  printf("After Binary conversion the number is :");
  d_to_b(n);
  printf("\n");
  return 0;
}