//Write a C program to print an array in reverse using pointer
#include <stdio.h>
int main() {
    long int a[2000];
    int tc,n,i,k;
    scanf("%d\n",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%d\n",&n);
        for(k=0;k<n;k++)
        scanf("%d ",a+k);
        for(k=n-1;k>=0;k--)
        printf("%d ",*(a+k));
    }
    return 0;
}
