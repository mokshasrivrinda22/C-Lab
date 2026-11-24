//Write a C program that uses a non-recursive function to search for a Key value in a given sorted list of integers using the binary search method
#include <stdio.h>

int bsearch(int a[], int n, int key)
{
    int l, m, h;
    l = 0;
    h = n - 1;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (a[m] == key)
            return m;
        else if (a[m] > key)
            h = m - 1;
        else if (a[m] < key)
            l = m + 1;
    }
    return -1;
}
int main() {
    int t,a[100000],n,key,pos;
    scanf("%d", & n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d", & key);
        pos=bsearch(a,n,key);
        if(pos!=-1)
        printf("Found at index %d\n", pos);
        else
        printf("Not Found\n");
    }
    return 0;
}
