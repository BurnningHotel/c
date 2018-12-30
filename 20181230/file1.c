#include<stdio.h>

int main(void){

    FILE *fp=NULL;
    fp=fopen("/Users/mac/Desktop/localgit/c/20181230/a.txt","w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
}