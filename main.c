#include <stdio.h>

int main(void)
{
  int testArr[]={0,2,5,13,44,57,63,90};
  int i;

  for(i=0; i < (sizeof(testArr)/sizeof(int));i++)
  {
    printf("%d is %s number\n", testArr[i], isEven(testArr[i])?"odd":"even");
  }

}


int isEven(int number)
{
  return (number & 1);
}


