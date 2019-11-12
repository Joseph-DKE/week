#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0;

        for(int i = 0; i < 1000; i++)
        {
            if(i % 3 == 0 || i % 5 == 0)
            {
                sum = sum + i;
            }
            else
            {
                sum = sum;
            }
        }

    printf("Sum is: %i \n", sum);
}
