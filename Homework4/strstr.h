#include <stdio.h>
 
int compare(const char *X, const char *Y){
    while (*X && *Y){
        if (*X != *Y){
            return 0;
        }
        X++;
        Y++;
    }
 
    return (*Y == '\0');
}
 
const char* str_str(const char* X, const char* Y){
    while (*X != '\0'){
        if ((*X == *Y) && compare(X, Y)){
            return X;
        }
        X++;
    }
 
    return NULL;
}