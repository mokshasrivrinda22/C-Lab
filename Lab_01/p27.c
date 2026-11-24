//Write a C program to perform a linear search for a character in a given string
#include <stdio.h>
#include <string.h>
int main() {
    char s1[1000],ch,*s2;
    int pos;
    scanf("%s",s1);
    scanf(" %c",&ch);
    s2=strchr(s1,ch);
    if(s2!=NULL)
    {
        pos=s2-s1;
        printf("%d\n",pos);
    }
    else
    printf("-1\n");
    return 0;
}
