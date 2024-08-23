// Display this Gp - 100, 50, 25, .. upto 'n' terms
#include <stdio.h>
int main()
{
    float n;
    printf("Enter a number : ");
    scanf("%f", &n);
    // 100 50 25 ...
    float a = 100;
    for(int i=1; i<=n; i++)
    {   
        printf("%f ",a);
        a =a/2;
    }
      

    return 0;
} 