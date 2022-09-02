#include <stdio.h>

unsigned sumArrayDigits(const int* arr, size_t n);

unsigned sumArrayDigits(const int* arr, size_t n){
 	//int arr[],sum=0;
    //long unsigned n;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
 	return sum;
}

int main(){
    int arr[100],sum;
    long unsigned n;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    sum = sumArrayDigits(arr, n);
    printf("sum of array :%d", sum);
    return 0;
}