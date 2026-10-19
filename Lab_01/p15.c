//Write a C program that uses pointer and pointer arithmetic to traverse the array and print each element
#include <stdio.h>
int main() 
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n%d ",a+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(a+i));
    }
    return 0;
}
