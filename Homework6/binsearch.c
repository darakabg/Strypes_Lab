#include <stdio.h>

unsigned int BinSearch(unsigned int* pArray, unsigned int uArraySize, unsigned int uValue);

int main(void){     
    unsigned int uArraySize;
    unsigned int uValue;
    unsigned int pArray[uArraySize];
    
    BinSearch(pArray, uArraySize, uValue);
    return 0; 
}

unsigned int BinSearch(unsigned int* pArray, unsigned int uArraySize, unsigned int uValue){
    int low, high, mid;
    printf("Enter the number of elements: ");
    scanf("%d", &uArraySize);
    printf("Enther the elements sorted: \n");
    
    for (int i = 0; i < uArraySize; i++){
        scanf("%d", &pArray[i]);
    }
    
    printf("Enter the value to find : \n");
    scanf("%u",&uValue);
    low = 0;
    high = uArraySize-1;

    mid = (low+high)/2;

    while (low<=high){
        if(pArray[mid]<uValue){
            low = mid + 1;
        } else if (pArray[mid]==uValue){
            printf("%d Found at the location %d.", uValue, mid+1);
            break;
        } else {
            high = mid-1;
            mid = (low+high)/2;
        }
    }

    if(low>high){
        printf("%d is not presented %d", uValue);
        printf("0xFFFF");
    }
}
