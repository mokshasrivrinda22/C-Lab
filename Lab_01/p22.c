//Write a C program that sorts the given array of integers using the Selection Sort algorithm in descending order.
#include <stdio.h>

void selectionSort(int A[], int N) {
    int i,j,min,temp;
    for(i=0;i<N;i++)
    {
        min=i;
        for(j=i+1;j<N;j++)
        {
            if(A[min]<A[j])
                min=j;
        }
        if(min!=i)
        {
            temp=A[i];
            A[i]=A[min];
            A[min]=temp;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    selectionSort(A, N);

    for (int i = 0; i < N; i++) {
        printf("%d", A[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
