/*
Write a program find whether a given number is a prime number.
int input_number();
int is_prime(int n);
void output(int n, int is_prime);
*/

#include <stdio.h>
#include <math.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

int isprime(int n)
{
  if (n==0 || n==1) {
    return 0
  }
  if (n==2) {
    return 1;
  }
  for(int i= 2; i<= sqrt(n);i++)
  {
    if(n%i==0)
      return 0;
  }
  return 1;
}
void output(int n, int isp)
{
  if(isp == 0)
    printf("%d is not a prime number\n",n);
  else
    printf("%d is a prime number\n",n)
}

int main()
{
  int n = input();
  int isp = isprime(n);
  output(n,isp);
  return 0;
  }
}