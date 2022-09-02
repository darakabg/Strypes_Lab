#include <stdio.h>
#include <string.h>
#include "strcat.h"
#include "strncat.h"

int main(){
    char* str = (char*)calloc(100, 1);

    str_cat(str, "Strypes ");
    str_cat(str, "Is ");
    str_cat(str, "the ");
    str_cat(str, "best ");
    str_cat(str, "place ");
    putchar("\n");

    char dest[30];
    strcpy(dest, "2022 ");
 
    char src[] = "Strypes – implement";
 
    strn_cat(dest, src, 7);
 
    puts(dest);
    puts(str);
 
    return 0;    

}