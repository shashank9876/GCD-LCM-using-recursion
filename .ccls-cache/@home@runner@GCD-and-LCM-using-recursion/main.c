#include <stdio.h>
int gcd(int x, int y);

int main() {
  int num1, num2, hcf, lcm;
  printf("\n Enter 2 integer values : ");
  scanf("%d %d", &num1, &num2);
  hcf = gcd(num1, num2);
  printf("GCD : %d", hcf);
  printf("\n LCM : %d", (num1 * num2)/hcf);
return 0;
}

int gcd(int x, int y)
{
  if (y == 0)
  {
    return ;
  }
  else
      {return gcd(y, x % y);
      } 
}