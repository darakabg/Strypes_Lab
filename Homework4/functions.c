#include <stdio.h>
//#include <stddef.h>
#include "copy.h"
#include "strncpy.h"

size_t mystrlen(char *str){
    size_t count = 0UL;
    while (*(str + count)){
        count++;
    }
    return count;
}

size_t
strnlen (const char *s, size_t maxlen){
  size_t i;
  for (i = 0; i < maxlen; ++i){
    if (s[i] == '\0')
      break;    
  }
  return i;
}

int main(){
    char name[] = "Ivan\n\n\n\n 123\\";
    int i = 0;
    while (*(name + i)){
        putchar(*(name + i));
        i++;
    }
    putchar('\n');
   
    printf("Count: %lu\n", mystrlen(name));
    char str1[] = "hgfujgifdjgdfogdfgkidfgkffgkdgdfg";
    printf("Count: %lu\n", mystrlen(str1));

    for (int i = 0; i < mystrlen(str1); i++){
        putchar(str1[i]);
    }
    putchar('\n');

    char s1[] = "String";
    char s2[20];

    char *p, *q;
    p = s1;
    q = s2;

    copy(p,q);
    printf("%s\n%s\n", p,q);
    char *str2 = "Hello"; 
    // str2[0] = 'h';

    char* src = "string";
    char destn[20];
    size_t n = 3;
    putchar("\n");
    printf("%s", strn_cpy(destn, src, n));

    printf("%s\n", str2) ;
    return 0;
}