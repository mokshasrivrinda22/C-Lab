//Write a C program to perform linear search for an element in an array
#include <stdio.h>
int Search(int arr[], int x, int n) {
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i+1;
    }
    return -1;
}
int main() {
    int t; 
    scanf("%d", &t); 
    while (t--) {
        int n;
        scanf("%d", &n); 
        int x;
        scanf("%d", &x); 

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("%d\n", Search(arr, x, n));
    }
    return 0;
}
