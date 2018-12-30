#include<stdio.h>

int sum(int a,int b);

int main(){
    int sums;
    int a=10;
    int b=20;

    int sum(int ,int);

    sums = sum(a,b);
    printf("%d",sums);
    return 0;


}

int sum(int a,int b){
    return a+b;

}