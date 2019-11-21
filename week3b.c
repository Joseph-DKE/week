#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int p = 1, n = 0;

//finds triangle number
    while(n <= 500)
    {
        int sum = 0;
        for(int j = 1; j <= p; j++)
        {
            sum = sum + j;
        }

        printf("%i is the triangle number. \n", sum);

//find factors of number
        n = 0;
        for(int i = 1; i <= sum; i++)
        {
            if(sum % i == 0)
            {
                n++;
            }
        }

        printf("%i is the number of factors \n", n);
        p++;
    }
}


