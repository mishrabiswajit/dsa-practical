#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter number a and b : ");
  scanf("%d %d", &a, &b);

  int smaller, gcd = 0;
  if (a < b)
  {
    smaller = a;
  }
  else
  {
    smaller = b;
  }

  for (int i = 1; i <= smaller; i++)
  {
    if (a % i == 0 && b % i == 0)
    {
      int temp_gcd = i;
      if (gcd < temp_gcd)
      {
        gcd = i;
      }
    }
  }
  printf("GCD is %d\n\n", gcd);
  return 0;
}