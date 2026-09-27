//Write a C Program to print N terms of a Fibonacci series using for loop
#include <stdio.h>

int main() {
    int n,i,f0,f1,fn;
    f0=0;
    f1=1;
    scanf("%d",&n);
    printf("%d %d ",f0,f1);
    for(i=2;i<n;i++)
    {
        fn=f0+f1;
        printf("%d ",fn);
        f0=f1;
        f1=fn;
    }
    return 0;
}

