#include <stdio.h>
#include <math.h>

int quadEq(double a, double b, double c){
    if (a == 0)   {  
        printf(" The value of x cannot be zero");  
        return;  
    }  
    double det = b * b - 4 * a * c;  
    double sqrt_det = sqrt(abs(det));  
    if (det > 0){  
        printf("\n Both roots are real and different \n ");  
        printf("%.2f\n %.2f", (double) (-b + sqrt_det) / (2 * a), (double) (-b - sqrt_det) / (2 * a));  
    } else if (det == 0) {  
        printf("\n Both roots are real and same ");  
        printf("%.2f", -(double)y / (2 * a));  
    } else {  
        printf("\n Both roots are complex");  
        printf("\n %.2f + %.2fi \n%.2f - %.2fi", -(double)b / (2 * a), sqrt_det, -(double)b / (2 * a), sqrt_det);  
    }
}      

int main(double arga, double argb, double argc){
    printf("\nEnter value of a, b, c");
    double a, b, c;
    quadEq(a, b, c);

}