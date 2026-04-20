#include<stdio.h>
int main() {
    int n=5,i,fact=1; // factorial
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
}
