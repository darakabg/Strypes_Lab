#include "funcs.h"
#include <stdio.h>

#define CHECKBIT(mask,bit) !!(mask & (1ull << (bit)))

int getMostFrequentElement(int array[], int n) {
    int i, j, maxElement, count;
    int maxCount = 0;
    for(i = 0; i< n; i++){
        count = 1;
        for(j = i+1; j < n; j++)  {
            if(array[j] == array[i]){
                count++;     
                if(count > maxCount){
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}

int printArray(char* array, int n){
    int length = sizeof(array)/sizeof(array[0]);    
    printf("Elements of given array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", array[i]);     
    }          
}

