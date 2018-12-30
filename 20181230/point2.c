
#include<stdio.h>

int main(){

    // variable define
    int var = 20;
    int *ip;

    // setting value
    ip = &var;

    printf("Address of var variable: %p\n", &var  );
    printf("Address of ip variable: %p\n", ip);
    printf("Address of *ip variable: %d\n", *ip);
}