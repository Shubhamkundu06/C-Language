#include<stdio.h>
int main(){
    int n;
    printf("enter percentage: ");
    scanf("%d", &n); 
    // more thane 80 -> A
    // more thane 60 -> B
    // more thane 40 -> C
    // less thane 40 -> D
    // if(n>80){
    //     printf("A grade\n");
    // }
    // else if (n>60){
    //     printf("B grade\n");
    // }
    // else if (n>40){ 
    //     printf("C grade\n");
    // }
    // else {
    //     printf("D grade\n");
    // }
    
    // second way

    if(n>80){
        printf("A grade\n");
    }
    else{
        if(n>60){
            printf("B grade\n");
        }
        else{
            if(n>40){
                printf("C grade\n");
            }
            else{
                printf("D grade\n");
            }
        }
    }





    
return 0;

}