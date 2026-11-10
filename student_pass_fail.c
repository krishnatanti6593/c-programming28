#include<stdio.h>
int main(){
    int a,b,c;
    float total;
    printf("enter the mark");
    scanf("%d",&a);
    printf("enter the mark");
    scanf("%d",&b);
    printf("enter the mark");
    scanf("%d",&c);
    total=(a+b+c/3);
    if(total<=40||a<=33||b<=33||c<=33){
        printf("your total percentage is %f and yuor are fail",total);
    }
    
    else{
        printf("you are pass and your percentage is %f",total);
    }
    return 0;
}