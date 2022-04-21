#include<stdio.h>
int main()
{
  int n;
  do
  {
    printf("\nEnter a positive integer n: ");
    scanf("%d", &n);
    if(n < 0)
    {
      printf("\nNumber n must be greater than or equal to 0, please re-enter !"); 
    }
  }while(n < 0);
 
  printf("\nIs the number %d full of odd numbers?\n", n);
  int check = 1;

  while(n /= 10)
  {
    if((n % 10) % 2 == 0)
    {
      check = 0;
      break;
    }
  }
  if(check == 1)
  {
    printf("True !");
  }
  else
  {
    printf("False");
  }
}
