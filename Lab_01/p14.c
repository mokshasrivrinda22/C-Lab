//Write a C program that uses functions to perform addition and multiplication of two matrices
#include <stdio.h>
void addMatrices(int A[][500], int B[][500], int R, int C) 
{
    int i,j;
    printf("Addition:\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }
}
void multiplyMatrices(int A[][500], int B[][500], int R1, int C1, int C2) 
{
    int i,j,k,M[500][500];
    for(i=0;i<R1;i++)
    {
        for(j=0;j<C2;j++)
        {
            M[i][j]=0;
            for(k=0;k<C1;k++)
            M[i][j]+=A[i][k]*B[k][j];
        }
    }
    printf("Multiplication:\n");
    for(i=0;i<R1;i++)
    {
        for(j=0;j<C2;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    int R1, C1, R2, C2;
    static int A[500][500];
    static int B[500][500];
    scanf("%d %d", &R1, &C1);
    for (int i = 0; i < R1; i++) 
    {
        for (int j = 0; j < C1; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d %d", &R2, &C2);
    for (int i = 0; i < R2; i++) 
    {
        for (int j = 0; j < C2; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }
    // Matrix Addition
    if (R1 == R2 && C1 == C2) 
    {
        addMatrices(A, B, R1, C1);
    } else 
    {
        printf("Addition not possible\n");
    }
    // Matrix Multiplication
    if (C1 == R2) 
    {
        multiplyMatrices(A, B, R1, C1, C2);
    } else 
    {
        printf("Multiplication not possible\n");
    }
    return 0;
}
