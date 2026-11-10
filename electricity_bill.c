#include<stdio.h>
int main(){
    int unit,bill=0;
    printf("enter the unit");
    scanf("%d",&unit);
    if(unit<=100){
        bill=(unit*2);
    }
    else if(unit>=101&&unit<=200){
        bill=(100*2)+(unit-100)*3;
    }
    else if(unit>=201&&unit<=500){
        bill=(100*2)+(100*3)+(unit-200)*5;
    }
    else{
        bill=(100*2)+(100*3)+(300*5)+(unit-500)*7;
    }
    printf("%d",bill);
    return 0;
}