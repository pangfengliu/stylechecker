#include <stdio.h>

#define FOR for
#define N 100

int counter[N];

int main()
{
  int sum = 0;
  FOR (int i = 0; i < N; i++)
    sum += i;

  return 0;
}
