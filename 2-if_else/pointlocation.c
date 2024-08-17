/*Given a point (x,y), write a program to find out
  if it lies on the x-axis or at the origin, viz.(0,0)
*/

#include<stdio.h>
int main(){
  int x,y;
  printf("Enter the coordinates : ");
  // scanf("%d",&x);
  // scanf("%d",&y);
  scanf("%d %d",&x,&y);
  if (x==0 && y==0){
    printf("The pont origin");
  }
  else if (x==0){
    printf("Lies on y-axis");
  }
  else if (y==0) {
    printf("Lies on x-axis");
  }
 else{
    printf("The point does not lie on x or y");
 }
    
    
    
    
    return 0;
}