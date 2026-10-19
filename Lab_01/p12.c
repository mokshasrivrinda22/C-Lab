//Write a C program to convert a decimal to binary
#include <stdio.h>
int main() {
	int n,r,i=1,bin=0;
	scanf("%d",&n);
	while(n!=0)
	{
	    r=n%2;
	    bin=bin+r*i;
	    n=n/2;
	    i=i*10;
	}
	printf("%d",bin);
    return 0;
}
