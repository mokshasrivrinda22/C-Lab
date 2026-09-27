//Write a C program to calculate the simple interest and coumpound interest
#include <stdio.h>
#include <math.h>
int main() {
long long int P,T;
double R,Si,Ci;
scanf("%lld %lf %lld",&P,&R,&T);
Si=(P*R*T)/100;
Ci=(P*pow(1+(R/100),T))-P;
printf("%.2lf %.2lf",Si,Ci);
return 0;
}
