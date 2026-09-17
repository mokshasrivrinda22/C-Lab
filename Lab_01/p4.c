//Write a C program to find the greates number among given 3 numbers using conditional operators
#include <stdio.h>
int main()
{
    int a,b,c,gre;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    gre=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The greatest number among the given numbers is %d",gre);
    return 0;
}
