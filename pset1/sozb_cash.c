//SAIDOU OUSSEINI ZIKA BINTA

#include <stdio.h>
#include <cs50.h>


int main (void)
{
  {

//declaration of variables
    int n = get_int("The amount: ");
    int a=500, b=250, c=200, d=100, e=50, f=25, g=10, h=5, i=0;

//validation
    while(n>=a)
    {
        n = n - a;
    i++;
    }

    while(n>=b)
    {
        n = n - b;
    i++;
    }

     while(n>=c)
    {
        n = n - c;
        i++;
    }

     while(n>=d)

    {
        n = n - d;
        i++;
    }

     while(n>=e)
    {
        n = n - e;
        i++;
    }

    while(n>=f)
    {
        n = n - f;
        i++;
    }

    while(n>=g)
    {
        n = n - g;
        i++;
    }


     while(n>=h)
    {
        n = n - h;
        i++;
    }

//output the minimum number of coins to be paid back
    printf("the answer is : %i\n", i);
  }
}