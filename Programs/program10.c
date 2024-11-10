#include<stdio.h>
int isNeon(int num){
    int sum=0;
    int square = num*num;
    while(square>0){
    sum +=square%10;
    square /= 10;
    }
    return (sum==num);
}
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(isNeon(num)){
        printf("%d is a neon number",num);
    }
    else{
        printf("%d is not a neon number",num);
    }
    return 0;
}
