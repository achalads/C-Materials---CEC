#include<stdio.h>
void decimaltobinary(int num){
    int binary[32];
    int i =0;
    while(num>0){
        binary[i]= num%2;
        num /=2;
        i++;
    }
    printf("binary representation:");
    for(int j = i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    printf("\n");
    
}
int main(){
    int decimal;
    printf("enter a decimal number: ");
    scanf("%d",&decimal);
    decimaltobinary(decimal);
    return 0;
}
