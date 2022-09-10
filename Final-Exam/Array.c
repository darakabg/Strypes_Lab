#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, m , k;
    srand(time(NULL));

    printf("Enter N number of elements - \n");
    scanf("%d", &n);
    char* array = malloc(n * sizeof(char)); 

    if(NULL==array){
        return EXIT_FAILURE;
    }  

    printf("Enter elements : \n");
    array = scanf("%d", &array);
    

    printf("Enter M number of elements - \n");
    scanf("%d", &m);
    array = realloc(array, (n + m) * sizeof(char));

    if(NULL==array){
        return EXIT_FAILURE;
    }  
    
    printf("Enter elements : \n");
    array = scanf("%d", &array);
    
    printf("Enter K elements of array - \n");
    scanf("%d", &k);    
    array = realloc(array, (n + m + k) * sizeof(char));

    if(NULL==array){
        return EXIT_FAILURE;
    }  

    printf("Enter elements : \n");
    array = scanf("%d", &array);
    
    
    for (int i = 0; i < n+m+k; i++) {     
        printf("%d ", array[i]);     
    }      

    return 0;
}