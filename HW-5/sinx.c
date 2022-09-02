#include <stdio.h>
int fact (int a){
    int i;
    int k = 1;
    for (i=1;i<=a;i++){
        k = k * i;
    }
    return k;
}

int pow (int x, unsigned int i){
    if (i == 0)
        return 1;
    else if (i%2 == 0)
        return pow(x, i/2)*pow(x, i/2);
    else
        return x*pow(x, i/2)*pow(x, i/2);    
}

double sin(double x){
    double sum=0;
    int i,j=0;
    for (i=0;i<=x;i++){
        if (i%2!=0){
            j++;
            double num = pow (x,i);
            double den = fact (i);
            double term = num/den;
            if (j%2!=0){
                 sum = sum - term;
            }
            else
            sum = sum + term;
        }
    }
    return sum;
}

int main(){
    double x,ans;
    scanf ("%lf",&x);
    ans=sin(x);
    printf ("Sinx is & %lf\n",ans);
    return 0;
}