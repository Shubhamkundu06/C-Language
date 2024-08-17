#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    // if 1st No. is greater
    if(a>b && a>c)
       printf("First Number is greater that Second & Third number");
    // if 2nd No. is greater
    if(b>a && b>c)
       printf("Second Number is greater that First & Third number");
    //  3rd No. is greater
    else
      printf("Third Number is greater that Second & First number");
    return 0;
}