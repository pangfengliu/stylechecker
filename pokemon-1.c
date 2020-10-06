#include <stdio.h>
 
#define MonsterType 3
#define WIND 0
#define FIRE 1
#define WATER 2
 
int main()
{                        \
  int k;
  scanf("%d", &k);
 
  int highest = -1, secondHighest = -1;
  int wind = 0, water = 0, fire = 0;
  int monsterCount = 0;
  int sum = 0;
  int x;
  while (scanf("%d", &x) != EOF) {
    int type = x % MonsterType;
    switch (type) {
    case WIND: wind++; break;
    case FIRE: fire++; break;
    case WATER: water++; break;
    }
 
    if (x > highest) {
      secondHighest = highest;
      highest = x;
    } else if (x > secondHighest)
      secondHighest = x;
 
    if (wind >= k && water >= k && fire >= k) {
      sum += secondHighest;
      wind = fire = water = monsterCount = 0;
      highest = -1, secondHighest = -1;
    } else
      monsterCount++;
#ifdef DEBUG
    printf("%d %d\n", x, type);
#endif
  }
 
  if (monsterCount > 1)
    sum += secondHighest;
  else if (monsterCount == 1)
    sum += highest;
 
  printf("%d\n", sum);
 
  return 0;
}
