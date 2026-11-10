#include<stdio.h>
void krishna(int  *income){
    float tax=0;
    if(*income<=250000){
        printf("no tax required");
    }
    else if(*income>250000 && *income<=500000){
        tax=tax+(*income-250000)*0.05;
    }
    else if (*income>500000&&*income<=1000000){
        tax=12500+(*income-500000)*0.20;
    }
    else{
        tax=112500+(*income-1000000)*0.30;
    }
    printf("%0.2f",tax);
    return ;
}
int main(){
    int income;
    printf("enter the number");
    scanf("%d",&income);
    krishna(&income);
    return 0;
}