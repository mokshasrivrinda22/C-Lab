//Write a C program to find the maximum, minimum and average of given array
#include <stdio.h>
int main() {
    int n,a[100],i,l,s,sum=0;
    float avg;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        sum+=a[i];
    }
    l=s=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<s)
        {
            s=a[i];
        }
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    printf("%d",s);
    printf(" %d",l);
    avg=(float)sum/n;
    printf(" %.2f",avg);
    return 0;
}
