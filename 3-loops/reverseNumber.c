// WAP to print reverse of a given number & store it.

#include<stdio.h>
int main(){
   int n; 
   printf("Enter a number : ");
   scanf("%d",&n);
   int r = 0;
     while(n>0){
    r = r*10; // zero ko hatane ke liye (condition 2nd)
    r = r + (n%10);
     n = n/10;
   }
    //r = r/10; //zero ko hatane ke liye (condition 1st) 
      printf("The reversed number is %d",r);

    return 0;
}