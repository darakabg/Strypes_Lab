#include<stdio.h>

int main()
{
    double a=0.0,b=0.0;
    char o;
   
    while(scanf("%lf %c %lf",&a,&o,&b)!=EOF){
        if(o =='+'){
            printf("=%.2lf\n",a+b);

        } else if(o =='-') {
            printf(":%.2lf\n",a-b);

        } else if(o =='*') {
            printf("=%.2lf\n",a*b);

        } else if(o =='/') {
            printf("=%.2lf\n",a/b);
        }
    }
    return 0;
}






/*#include <stdio.h>

int main(){
    char op;
    float num1, num2, result = 0;
    while(scanf("%f%f", &num1, &num2)!=EOF){
        printf("\n Operation ");
        scanf("%c", &op);
        printf("Enter two numbers \n : ");
        scanf("%f%f", &num1, &num2);

        switch(op){
            case '+': result = num1 + num2;
                break;
            case '-': result = num1 - num2;
                break;
            case '*': result = num1 * num2;
                break;
            case '/': result = num1 / num2;
                break;
            default: printf("\n Invalid Operator ");
        }

        printf("The value = %.2f", result);
        return 0;  
    }  
}*/