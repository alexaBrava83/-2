#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main ()
{
  int n;
  n = get_int("Enter the number of characters: ");
  char a[n];
  printf("Enter characters: ");
  
  for (int i = 0; i < n; i++)
  {
    scanf ("%c", &a[i]);
  }
  
  for (int j = 0; j < n / 2; j++)
  {
    char temp = a[j];
    a[j] = a[n - j - 1];
    a[n - j - 1] = temp;
  }
  printf("Inverted array: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  return 0;
}




















