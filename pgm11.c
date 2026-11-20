#include <stdio.h>
int main(void)
{
    int a[100], n, i,  smallest, largest;
    long sum = 0;
    float average;
    printf("enter number of elements (1-100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
        printf("invalid array size.\n");
        return 0;
    }
    printf("enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] < smallest) smallest = a[i];
        if (a[i] > largest) largest = a[i];
    }
    average = (float)sum / n;
    printf("Sum = %ld\n", sum);
    printf("Average = %2f\n", average);
    printf("Smallest = %d\n", smallest);
    printf("Largest = %d\n", largest);
    return 0;
}