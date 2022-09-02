#include <stdio.h>
#include <stdlib.h>

double randreal(double min, double max);

int main(){
    double* arr;
    unsigned n, m, p;
    scanf("%u", &n);
    arr = malloc(n * sizeof(double));
    if (NULL == arr){
        fprintf(stderr, "malloc problem\n");
    }
    for(int i = 0; i < n; i++){
        arr[i] = 1.0;
    }
    scanf("%u", &m);

    arr = realloc(arr, (n + m) * sizeof(double));
    if(NULL == arr){
        fprintf(stderr, "realloc problem\n");
        return EXIT_FAILURE;
    }
    for(int i = n + m; i < (n + n + p); i++){
        arr[i] = 3.0;
    }
    for(int i = 0; i < n + n + p; i++){
        printf("%.1lf", arr[i]);
    }

    putchar('\n');
    free(arr);

    double randreal(double min, double max){
        return min + ((double)rand() / RAND_MAX) * (max - min);
    }

    return 0;
}