#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double eps;
double newtonRapson(double);
int main(){
    eps=pow(10,-6);
    double x;
    printf("Unesi prvu iteraciju: ");
    scanf("%lf",&x);
    printf("Rjesenje: %lf ",newtonRapson(x));
    
}
double newtonRapson(double xn){
    double xn1= xn - (exp(-xn)*5-xn)/(exp(-xn)*(-5)-1);
    if(fabs(xn1-xn)<eps) return xn;
    else return newtonRapson(xn1);
}
