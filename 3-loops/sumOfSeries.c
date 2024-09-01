 /* Question : Print the sum of this series :
  1 - 2 + 3 - 4 + 5 - 6... upto'n'. */
    //  Method number : 1

#include<stdio.h>
int main(){
   int n; 
   printf("Enter a number : ");
   scanf("%d",&n);
    // 1 - 2 + 3 - 4 + 5 - 6 .... n terms 
    int sum = 0;
    for(int i=1;i<=n;i++){
    if(i%2!=0) sum = sum + i;
    else sum = sum - i;
}
printf("The sum is : %d",sum);
    return 0;
}