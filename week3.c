#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int a = 0, b = 1, sum = 0, sim[90], summ = 0;
//sim[90] is 90 because I just needed a large enough array
//Dont know why I had to make it 6000000, but thats the only way
//I was able to get it to use all fibonacci numbers less than
//4000000
    for(int i = 0, n = 0; i < 6000000; i = i + sum)
        {
//here, the fibonacci sequence runs
            sum = a + b;
            a = b;
            b = sum;
//here, I store each fibonacci number into a locker in the array
            sim[n] = sum;
//here, I check if the value in each locker is even
            if(sim[n] % 2 == 0)
            {
//if even, I store it into summ and add the previous value in summ to it
//As I am to find the value of the sum of all even numbers
                summ = sim[n] + summ;
            }

        }

    printf("%i \n", summ);
}
