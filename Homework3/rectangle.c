#include <stdio.h>

int rectangle(double w, double h, double* S, double *P){
    while(scanf("%lf %lf",&w,&h)!=EOF){
        if(w,h>0){
            *S=w*h;
            *P=(2*w)+(2*h);
            printf("Area of rectangle: %.2lf\n",*S);
            printf("Perimeter of rectangle: %.2lf\n",*P);
            printf("0");
        
        } else{
            printf("Invalid rectangle sides!\n");
            printf("-1");
        }
    }    
}

int main(){  
    double w, h, S=0.0, P=0.0;
    rectangle(w, h, &S, &P);
    return 0;
}
