#include<stdio.h>
int main() {
    int n=121, rev=0, rem, temp=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
