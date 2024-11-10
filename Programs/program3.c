#include<stdio.h>
int main(){
    int b;
    float a;
    printf("enter the float number:\n");
    scanf("%f",&a);
    printf("floating conversion into integer is :\n");
    b = ((int)a);
    printf("floating number : %f",a);
    printf("\ninteger number :%d",b);
    return 0;
}