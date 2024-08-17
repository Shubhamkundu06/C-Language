// if coast price and selling price of item is input though the keyboard,write a program to determine whether the seller has much made profit or incurred loss.Also determine how much profit he made or loss he incurred.

#include <stdio.h>
int main()
{
    int cp;
    printf("Enter cost price : ");
    scanf("%d", &cp);
    int sp;
    printf("Enter selling price :");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("Profit");
    }
    if (cp > sp)
    {
        printf("Loss");
    }
    else
    {
        printf("No profit, no Loss");
    }

    return 0;
}