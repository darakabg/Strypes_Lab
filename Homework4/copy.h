#include <stdio.h>
#include <stddef.h>

char copy(char*, char*); 
char copy(char *p, char *q){
    while(*p != '0'){
        *q=*p;
        q++;
        p++;
    }
    *q='\0';
    return q;
}
