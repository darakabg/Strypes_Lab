#include <stdio.h>

void Bubble(int* pArray, unsigned int uLen);
 
int main(){
    int uLen = 5;
    int arr[] = { 23, 891, 736, 99, 9 };
    
    Bubble(arr, uLen);
    printf("\n");
    return 0;
}

void Bubble(int* pArray, unsigned int uLen){
    int t;
    for (int i = 0; i < uLen; i++) {
        for (int j = i + 1; j < uLen; j++) {
            if (*(pArray + j) < *(pArray + i)) {
                t = *(pArray + i);
                *(pArray + i) = *(pArray + j);
                *(pArray + j) = t;
            }
        }
    }
 
    for (int i = 0; i < uLen; i++)
        printf("%d ", *(pArray + i));
}