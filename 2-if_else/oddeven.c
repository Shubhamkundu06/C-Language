#include <stdio.h>
int main()
{
    int n; // dabba ban gaya
    printf("Enter a number: ");
    scanf("%d", &n); // dabbe me value daal di, n = 7

    if (n%2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    /*  second way
    if (n % 2 != 0)
    { // odd
        printf("Odd number");
    }
    else
    {
        printf("Even number");
    }
*/
    return 0;
}