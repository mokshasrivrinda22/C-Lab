//Write a C program to print right triangle of multiples of 2
#include <stdio.h>
int main() {
    int rows; 
    int num = 2;
    scanf("%d", &rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1)
            printf("%d ",num);
            else
            printf("%d ",num);
            num+=2;
        }
        printf("\n");
    }
    return 0;
}
