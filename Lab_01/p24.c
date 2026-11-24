//Write a C program to insert a string in a given sttring at a given position
#include <stdio.h>
#include<string.h>
int main() {
    int n,i,j,k,l1,l2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char s[1000000],p[1000000],t[1000000];
        int pos;
        scanf("%s %s",s,p);
        scanf("%d",&pos);
        l1=strlen(s);
        l2=strlen(p);
        k=0;
        for(j=0;j<pos-1;j++)
        {
            t[k++]=s[j];
        }
        for(j=0;j<l2;j++)
        {
            t[k++]=p[j];
        }
        for(j=pos-1;j<l1;j++)
        {
            t[k++]=s[j];
        }
        t[k]='\0';
        printf("%s\n",t);
    }
    return 0;
}
