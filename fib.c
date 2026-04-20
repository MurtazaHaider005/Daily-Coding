#include<stdio.h>
int main() {
    float a=0,b=5,c,i;
    for(i=1;i<=5;i++){
        // fibbonacci
        printf("%f ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
