#include <stdio.h>
  
int main()
{
    int A, B, C;
  
    //printf("Enter the numbers A, B and C: ");
    scanf("%f %f %f", &A, &B, &C);
  
    if (A >= B && A >= C)
        printf("%f is the largest number.", A);
  
    if (B >= A && B >= C)
        printf("%f is the largest number.", B);
  
    if (C >= A && C >= B)
        printf("%f is the largest number.", C);
  
    return 0;
}