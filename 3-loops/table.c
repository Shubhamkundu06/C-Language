#include<stdio.h>
int main(){

    // Printing 19 table

    // for(int i=1; i<=10; i++){
    //      printf("%d \n", 19*i);
    // }


    // print taking input from user
    int input;
    printf("Enter the Number: ");
    scanf("%d", &input);

    for(int i=1; i<=10; i++){
        printf("%d \n", input * i);
    }


    return 0;
}