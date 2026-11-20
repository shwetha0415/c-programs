#include <stdio.h>
int main(void)
{
    int n, i, isPrime = 1;
    printf("enter an integer: ");
    scanf("%d", &n);
    if(n < 2)
    isPrime = 0;
else
{
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
} 
if (isPrime)
    printf("%d is a prime number.\n", n);
    return 0;
}