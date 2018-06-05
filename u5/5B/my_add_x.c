#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int sum = 0;
  int numEntered = 0;

  while (scanf("%d", &numEntered))
    {
        sum += numEntered;
    }
  printf("%d\n", sum);
  return 0;
}

