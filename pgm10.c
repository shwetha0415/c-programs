#include <stdio.h>
int main(void)
{
    int n, original, digit, revers = 0;
    printf("enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("negative number is not considered a palindrome here.\n");
        return 0;
    }
    original = n;
    while (n != 0)
    {
        digit = n % 10;
        revers = revers * 10 + digit;
        n = n / 10;
    }
    if (original == revers)
    printf("%d is a palindrome.\n", original);
else
     printf("%d is not a palindrome.\n", original);
    return 0;
}