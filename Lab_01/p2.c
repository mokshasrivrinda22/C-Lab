//Write a C program to find sum of two integers
#include<stdio.h>
int main()
{
  int num1,num2,sum;
  printf("Give two values: ");
  scanf("%d %d",&num1,&num2);
  sum=num1+num2;
  printf("The sum of the given two integers is %d",sum);
  return 0;
}
