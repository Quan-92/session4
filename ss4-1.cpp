#include<stdio.h>
int main()
{
  int n;
  long S = 0;
  
  do
  {
    printf("\nNhap so nguyen n: ");
    scanf("%d", &n);
  if(n <= 0)
  {
    printf("\n So phai lon hon 0, vui long nhap lai !");
  }
  }while(n <= 0);

  printf("Cac uoc so cua %d la: ",n);
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      printf("%4d", i);
      S = S + i;
    }
  }
  printf("\nTong cac uoc so cua %d la: %ld", n, S);
 
}
