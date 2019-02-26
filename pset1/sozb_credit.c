//SAIDOU OUSSEINI ZIKA BINTA

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    printf("enter your credit card number\n");

    //Initialisation
    long long credit_card = get_long_long();
    int len =;
    int len = strlen(str);
    int sum1;
    int sum2;

    // find the second to last digit
    for (int i= len - 1 ;i>=2;i-=2)
    {
        sum1+=(2*(card_number%10));
    }

    //find the first from the end
    for (int i = len;i >= 0; i+=2)
    {
        sum2 +=(card_number % 10 + c /10);
    }

    int sum = sum1 + sum2;

    // first two positions
    char array[ ] = [f,f]

    //conversion char into integers
     int i = atoi(array[ ]);

    // check type of card
    if ((len== 15) && ([f,f]==34) || ([f,f]==37) && sum% 10==0 )
        {

         printf("AMEX\n");

        }

    else if ((len== 16) && ([f,f]<=51) || ([f,f]>=55) && sum% 10==0)
        {

        printf("MASTERCARD\n");

        }

    else if ((len== 13) || (len== 16) && ([f,f]==4) && sum% 10==0)
        {

        printf ("VISA\n");

        }

    else
        {

        printf("INVALID\n");

        }
}