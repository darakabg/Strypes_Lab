#include <stdio.h>

int str_cmp(const char *X, const char *Y){
    while(*X){
        if(*X != *Y){
            break;
        }
        X++;
        Y++;
    }
    return *(const unsigned char*)X - *(const unsigned char*)Y;
}