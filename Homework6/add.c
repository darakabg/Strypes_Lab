#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void Add(const char* p1, const char* p2, char* result);
int main(){
    char p1[50] = {""};
    char p2[50] = {""};
    char result[500] = {""};
    scanf("%s %s", &p1, &p2);
    Add(p1,p2,result);
    return 0;
}

void Add(const char* p1, const char* p2, char* result){
    int num1 = atoi(p1);
    int num2 = atoi(p2);
    int sum = num1 + num2;
    sprintf(result, "%d", sum);
    printf("%s\n", result);
}