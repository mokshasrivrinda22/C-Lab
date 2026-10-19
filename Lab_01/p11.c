//Write a C program to print the multiplication table for given number and number of rows
#include <stdio.h>
int main() {
    int n,rows,i=1;
    scanf("%d %d",&n,&rows);
    while(i<=rows)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}
