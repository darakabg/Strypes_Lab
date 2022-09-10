#include <stdio.h>

unsigned sumArrayOfDigits(const int* arr, size_t n);
int main(){
    int arr[] = {10,34,5,70};
    sumArrayOfDigits(arr,4);
    return 0;
}

unsigned sumArrayOfDigits(const int* arr, size_t n){
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    printf("Sum of the array = %d\n", sum);

}