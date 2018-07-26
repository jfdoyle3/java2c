#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

bool isPrime(int n);
int sumPrime(int num);

int main(void)
{

  assert(isPrime(2)== true && "2 should  be prime");
  assert(isPrime(1)== false && "1 should not  be prime");
  assert(isPrime(9)== false && "9 should not be prime");
  assert(isPrime(11)== true && "11 should be prime");

}
bool testPrimes(void)
{
  assert (sumPrime(10) ==17);
  return true;
}
bool isPrime(int n)
{
  if (n<2)
  {
    return false;
  }

  for (int i=2, max=sqrt(n); i<=max; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int sumPrime(int num)
{

  int sum=0;
  for (int i=2; i <=num; i++)
  {
    if(isPrime(i))
    {
      sum+=i;
    }
  }
  return sum;
}