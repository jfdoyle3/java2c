#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>


int somefib(int num)
{
  printf("num= %d\n",num);
    int first = 0, second = 1, next, c;
    for (c = 0; c < num; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
     int tmp=next%2;
     int p=0;
    if(tmp ==1){
      p=p+next;

    }
    printf("next= %d  first=  %d second= %d\n", next, first, second);
    printf("                                  p= %d\n",p );
   }

  return num;
}

int main()
{
  int n;

  printf("Enter the number of terms\n");
  scanf("%d", &n);
  int z=somefib(n);
  printf("First %d terms of Fibonacci series are:\n", z);


}