#include<stdio.h>
void main(){
    int a,b;
    a=1;
    b = (++a)+(a++);
    printf("\na=%d\tb=%d\n",a,b);
    printf("\n%d\t%d",a,a++);
}
