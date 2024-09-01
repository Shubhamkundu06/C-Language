/* Question : Print the sum of this series :
  1 - 2 + 3 - 4 + 5 - 6... upto'n'. */
    //  Method number : 2

#include<stdio.h>
int main(){
   int n; 
   printf("Enter a number : ");
   scanf("%d",&n);
    // 1 - 2 + 3 - 4 + 5 - 6 .... n terms 
    int sum = 0;
    if(n%2==0){
        sum = -n/2;
    }
    else{
        sum = -n/2 + n;
    }

printf("The sum is : %d",sum);
    return 0;
}