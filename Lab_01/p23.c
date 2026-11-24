//Write a C program that sorts the given array of integers using the Insertion sort algorithm.
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>k)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=k;
    }
}

int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
