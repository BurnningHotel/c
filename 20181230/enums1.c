
#include<stdio.h>

enum DAY{
    MON=1,TUE,WED,THU,FRI,SAT,SUN
};

int main(void){

    enum DAY day;
    day = WED;
    printf("%d ",day);

    for(;day<SUN;day++){
        printf("%d ",day);
    }


    return 0;
}