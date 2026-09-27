//Write a C program to perform a given arithmetic operation using switch statement
#include <stdio.h>

int main() {
    int a,b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
    switch(ch)
    {
        case '+': printf("%d",a+b);
        break;
        case '-': printf("%d",a-b);
        break;
        case '*': printf("%d",a*b);
        break;
        case '/': printf("%.2f",(float)a/b);
        break;
        case '%': printf("%d",a%b);
        break;
    }
    return 0;
}
