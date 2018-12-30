#include<stdio.h>

int main(void){

    FILE *fp=NULL;
    char buff[255];

    fp=fopen("/Users/mac/Desktop/localgit/c/20181230/a.txt","r");
    fscanf(fp,"%s",buff);
    printf("%s",buff);

    // fgets();



    fclose(fp);
}
