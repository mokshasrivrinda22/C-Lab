// Write a C program to delete n characters from a string from a given position
#include <stdio.h>
#include<string.h>
int main() {
    char str[1000000],t[1000000];
    int l,i,j,pos,del;
    fgets(str,sizeof(str),stdin);
    l=strlen(str);
    scanf("%d %d",&pos,&del);
    
    if(pos>l)
        printf("%s\n",str);
    else
    {
        for(i=0;i<pos;i++)
        t[i]=str[i];
        for(j=pos+del;str[j]!='\0';j++,i++)
        t[i]=str[j];
    }
    t[i]='\0';
    puts(t);
    return 0;
}

