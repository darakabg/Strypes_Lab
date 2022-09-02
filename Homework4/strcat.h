#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char* str_cat(char* destination, const char* source){
    char* ptr = destination + strlen(destination);
    while (*source != '\0') {
        *ptr++ = *source++;
    }
 
    *ptr = '\0';
    return destination;
}