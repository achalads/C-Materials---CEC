#include<stdio.h>
char name[20];
int m1,m2,m3;
int total;
float avg,per;
int main(){
    printf("enter the persons name:");
    scanf("%s",name);
    printf("enter the marks:");
    scanf("%d\n%d\n%d",&m1,&m2,&m3);
    printf("\nthe marks of sub1:%d",m1);
    printf("\nthe marks of sub2:%d",m2);
    printf("\nthe marks of sub3:%d",m3);
    total = m1+m2+m3;
    printf("\ntotal marks :%d",total);
    avg = total/3;
    printf("\naverage marks:%f",avg);
    per = ((float)total/300)*100;
    printf("\nthe percentage is :%6f",per);
    return 0;
}
