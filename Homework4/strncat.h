#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char* strn_cat(char* destination, const char* source, size_t num){
    char* ptr = destination + strlen(destination);
    while (*source != '\0' && num--) {
        *ptr++ = *source++;
    }
 
    *ptr = '\0';
    return destination;
}