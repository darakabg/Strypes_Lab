#include<stdio.h>

float BMI(float mass, float height) {
   return (mass/height*2.5)*1.3;
}

int main() {
   float mass;
   scanf("%f", &mass);
   float height;
   scanf("%f", &height);
   float bmi = BMI(mass,height);
   printf("BMI : %.2f ",bmi);
   return 0;
}


