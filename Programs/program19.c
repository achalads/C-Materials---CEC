#include<stdio.h>
int main(){
    int x,y,*pointer;
    x = 22;
    printf("the value of x is : %d",x);
    pointer = &x;
    printf("\nthe stored value of ponter is : %p",&pointer);
    y = *pointer;
    printf("\nthe value of y is : %d",y);
    pointer = &y;
    printf("\nthe address value of y is : %p",pointer);
    return 0;
}
