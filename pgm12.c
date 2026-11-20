#include <stdio.h>
int main(void)
{
    int a[100], n, key, i, position = -1;
    printf("enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
        printf("invalid array size. \n");
        return 0;
    }
    printf("enter %d elements: ", n);
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("enter element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            position = i;
            break;
        }
    }
    if (position != -1)
    printf("element found at position %d.\n", position + 1);
else
    printf("element not found.\n");
   return 0;
}