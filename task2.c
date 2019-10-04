#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countDigitsInInteger(int num)
{ // The function returns the length of given integer
  int count = 0;

  while (num != 0)
  {
    num /= 10; // Divides our actual number until its value if it is not equal to zero
    count++;
  }

  return count;
}

_Bool isPalindrome(int num, int length)
{ // The function checks whether the number is palindrome or not
  char number[length];
  sprintf(number, "%d", num);

  int j = length - 1;
  for (int i = 0; i < length / 2; i++)
  {
    if (number[i] == number[j])
    {
      j--;
      continue;
    }
    else
    {
      return 0;
    }
  }

  return 1;
}

int reverseNumber(int num, int length)
{ // The function reverses the given number and returns the reversedNumber
  char strNum[length - 1];
  sprintf(strNum, "%d", num);

  char reversedStrNum[length];
  int count = 0;
  for (int i = length - 1; i >= 0; i--)
  {
    reversedStrNum[count++] = strNum[i];
  }
  int reversedNumber;

  sscanf(reversedStrNum, "%i", &reversedNumber);

  return reversedNumber;
}

int main(void)
{
  int x, count, reversedNumber;
  printf("Enter the number: ");
  scanf("%i", &x);

  count = countDigitsInInteger(x); // takes the number of digits of integer (or it's length)

  if (isPalindrome(x, count))
  {
    printf("%i, Is palindrome.", x);
  }
  else
  {
    reversedNumber = reverseNumber(x, count); // if the number is not palindrome, then implement the reverse function (to reverse the number)
    printf("number: %i, ", x);
    printf("reverse: %i, Not palindrome.", reversedNumber);
  }

  return 0;
}
