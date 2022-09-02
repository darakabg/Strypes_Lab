#include <stdio.h>

char* strn_cpy(char* destn, const char* src, size_t n){
    if(destn == NULL)
        return NULL;
        char* ptr = destn;
    
    while (*src && n--){
        *destn=*src;
        destn++;
        src++;
    }
    return ptr;
}
