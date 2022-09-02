#include<stdio.h>

int triangle(double a,double b,double c,double *S,double *P){    
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
        if(a,b,c>0){
            *S=(a+b+c)/2;
            *P=a+b+c;
            printf("Area of triangle:%.2lf\n",*S);
            printf("Perimeter of triangle:%.2lf\n",*P);
            printf("0");
        
        } else{
            printf("Invalid triangle sides!\n");
            printf("-1");
        }
    }
}

int main(){  
    double a, b, c, S=0.0, P=0.0;
    triangle(a, b, c, &S, &P);
    return 0;
}
 



/*#include <stdio.h>

double a, b, c, *S, *P, h;

int triangle(double a, double b, double c, double *S, double *P, double h){

    *S = (b*h)/2;
    *P = (a + b + c)/2;

    if (a, b, c, h > 0){
        printf("0");
    } else{
        printf("-1");
    }

    printf("Area of triangle : %.2lf\n", *S);
    printf("Perimeter of triangle : %.2lf\n", *P);
}

int main(){
    scanf("%lf %lf %lf %lf", &a, &b, &c, &h);
    triangle(a, b, c, h);
    return 0;
}*/