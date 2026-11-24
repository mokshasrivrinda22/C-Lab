//Write a C program to count lines, words, and characters in a given string
#include <stdio.h>

int main() {
    long int char_count=0;
    long int word_count=0;
    long int line_count=0;
    char line[1000000];
    while(fgets(line,sizeof(line),stdin)!=NULL)
    {
        if(strcmp(line,"-1\n")==0)
        break;
    
    line_count++;
    char_count+=strlen(line);
    int in_word=0;
    for(int i=0;line[i]!='\0';i++)
        {
            if(line[i]==' '||line[i]=='\t'||line[i]=='\n')
            {
                in_word=0;
            }
                else if(in_word==0)
            {
                word_count++;
                in_word=1;
            }
        }
    }
    printf("%ld %ld %ld\n",line_count,word_count,char_count);
    return 0;
}

