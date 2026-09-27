//Write a C program to print the maximum and minimum numbers among the given 3 numbers using if
#include <stdio.h>

int main() {
    int a,b,c,min,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    max=a;
    if(b>=a && b>=c)
    max=b;
    if(c>=a && c>=b)
    max=c;
    if(a<=b && a<=c)
    min=a;
    if(b<=a && b<=c)
    min=b;
    if(c<=a && c<=b)
    min=c;
    printf("%d %d",max,min);
    return 0;
}
