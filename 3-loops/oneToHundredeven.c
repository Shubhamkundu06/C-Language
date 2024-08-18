// Question : Print all the even & odd number from 1 to 100.

#include<stdio.h>
int main() {
    for(int i=1;i<=100;i++){
        if(i%2==0){
            printf("The Even Number is: %d \n", i);
        } else{
            printf("The Odd Number is: %d \n", i);
        }
      
    }



    return 0;
}
