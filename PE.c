#include <stdio.h>
#include <math.h>

double swap (double *a, double *b){
    double temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    swap(&a, &b);
    printf("%.2lf  %.2lf", a, b);
    return 0;
}