#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("odd.txt","r");
    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    fclose(fptr);
    fptr = fopen("sum.txt","w");
    fprintf(fptr,"%d",a+b);
    return 0;

}