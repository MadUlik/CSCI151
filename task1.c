#include <stdio.h>

int main(void)
{
  int k = 1;

  double base = 1;
  printf("Enter the number: ");
  scanf("%i", &k);

  if (k <= 0)
  {
    printf("It is not a valid number");
    return 0;
  }

  float answer = 0;
  for (int i = 0; i < k; i++)
  {
    answer += k;
  }

  printf("Answer: %f10.6", answer);

  return 0;
}