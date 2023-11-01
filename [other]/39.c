#include <stdio.h>

int main()
{
  int n, i, arr[20];
  int check = 1;
  scanf("%d", &n);

  if (n >= 20)
  {
    return 1;
  }
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n / 2; i++)
  {
    if (arr[i] != arr[n - 1 - i])
    {
      check = 0;
      break;
    }
  }
  puts ("\nOUTPUT:");
  printf("%d\n", check);
  return 0;
}
