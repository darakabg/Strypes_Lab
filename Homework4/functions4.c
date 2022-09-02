#include <stdio.h>
#include "strncmp.h"

int main(){
    char *s1 = "Strypes";
    char *s2 = "STRypes";
 
    int ret = strn_cmp(s1, s2, 5);
 
    if (ret > 0) {
        printf("%s", "s2 is less than s1");
    }
    else if (ret < 0) {
        printf("%s", "s1 is less than s2");
    }
    else {
        printf("%s", "s1 is equal to s2");
    }
 
    return 0;    
}