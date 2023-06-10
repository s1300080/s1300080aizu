/*Dice game initial revision */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  int i,r,min = 1,max = 6,sum = 0;
  char name[30];
  srand((unsigned)time(NULL));

  printf("What is your name?\n>");
  scanf("%s",name);
  printf("Hello %s!\n" ,name);

  printf("Rolling dice\n");
  for(i = 1 ; i <= 2 ; i++)
    {
      r = (rand()%(max - min +1))+min;
      printf("Die%d: %d",i,r);
      sum += r;
    }
  printf("Total value: %d\n",sum);

  return 0;
}
