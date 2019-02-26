//SAIDOU OUSSEINI ZIKA BINTA

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int k;
int ciphertext;

int main (int argc, string argv[])
{
    // check if the computer is taking the 2 argc
    while (argc !=2 )
    {
         printf("Error,you have to try again: \n");
         return 1;
    }

         //get a string key that will be convert in to an integer

      string p = get_string("plaintext: ");
      k = atoi(argv[1]);


        // encrypt the latter with the former

    for (int i = 0; i < strlen(p); i++)
    {
        if (ciphertext == isalpha(p[i]))

            if (p[i]>= 'A' && p[i] <= 'Z') // upper letters
            {
                ciphertext = 'A' + (p[i] - 'A' + k) % 26 ;
                printf("%c",ciphertext);
            }

            if ( p[i]>= 'a' && p[i] <= 'z')// lower letters
            {

                ciphertext = 'a' + (p[i] - 'a' + k) % 26 ;
                printf("%c",ciphertext);
            }

        else
        {
            printf("%c",p[i]);
        }
     }

    printf("\n");

    return 0;
}




