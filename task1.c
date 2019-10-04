#include <stdio.h>

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  int k = 1;

  while (k > 0)
  {
    double base = 1;
    printf("Enter the number: ");
    scanf("%i", &k);

    if (k <= 0)
    {
      printf("It is not a valid number");
      return 0;
    }

    int i = 0;
    int j = 0;
    for (i = 1; i < k; i++)
    {
      double fact = 1; // Initialize the factorial result

      for (j = 2; j <= i; j++)
      {
        fact *= j; // Multiply the values
      }

      base += 1 / fact; // Apply the formula
    }

    printf("%0.11lf", base); // Write 11 numbers of the rational part of a number
  }

  return 0;
}
