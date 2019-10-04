#include <stdio.h>

int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  int num, revNum, lastDigit; // Declare variables
  printf("Enter the number: ");
  scanf("%i", &num);

  if (num < 0)
  {
    printf("Invalid negative number, please enter positive integer number.");
    return 0;
  }
  revNum = 0; // Initialize variable that would contain reverse variable

  int i = 0;
  for (i = num; i > 0;)
  {
    lastDigit = i % 10;
    revNum = revNum * 10 + lastDigit;
    i = i / 10;
  }

  if (num == revNum)
  {                                           // If they are equal (they are palindromes)
    printf("number: %i, Is palindrome", num); // Print palindrome
  }
  else
  {
    printf("number: %i, reverse: %i, Not palindrome.", num, revNum); // They are not equal, so print number with its reverse value
  }

  return 0;
}