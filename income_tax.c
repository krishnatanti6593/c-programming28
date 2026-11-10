#include<stdio.h>
int main(){
    int income;
    int tax=0;
    printf("enter the number");
    scanf("%d",&income);
    if(income<=250000){
        printf("no tax required");
    }
    else if(income>250000 && income<=500000){
        tax=tax+(income-250000)*0.05;
    }
    else if (income>500000&&income<=1000000){
        tax=12500+(income-500000)*0.20;
    }
    else{
        tax=112500+(income-1000000)*0.30;
    }
    printf("%d",tax);
    return 0;

}