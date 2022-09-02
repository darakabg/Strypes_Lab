#include <stdio.h>
#include "strcmp.h"
#include "strncmp.h"
int main(){
    char *X = "Strypes";
    char *Y = "STRypes";
 
    int ret = str_cmp(X, Y);
 
    if (ret > 0) {
        printf("%s", "X is greater than Y");
    }
    else if (ret < 0) {
        printf("%s", "X is less than Y");
    }
    else {
        printf("%s", "X is equal to Y");
    }
 
    return 0;    
}