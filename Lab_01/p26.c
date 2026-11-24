//Write a C program to check if the given string is a palindrome or not
#include <stdio.h>
#include<string.h>
int main() {
    char str[1000000];
    int L,f=1,i,j;
    fgets(str,sizeof(str),stdin);
    L=strlen(str);
    for(i=0,j=L-1;i!=L/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            f=0;
            break;
        }
    }
    if(f==1)
    printf("True\n");
    else
    printf("False\n");
    return 0;
}

