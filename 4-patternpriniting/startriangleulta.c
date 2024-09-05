#include<stdio.h>
int main (){
    int n;
    printf("Enter no. of roes : ");
    scanf("%d", &n);
    
    //     //  Method -> 1st
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //     printf("* ");
    // }

        // Method -> 2nd
    int a = n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
        printf("* ");
    }
    a--;
    printf("\n");
      }
    
    return 0;

}