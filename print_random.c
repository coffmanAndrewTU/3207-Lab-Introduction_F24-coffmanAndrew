//Given Project code
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "random.h"

int rand_string(char *s, size_t size);
char* rand_string_alloc(size_t size);

int main(){
    // 7 chosen for size because that is what is specified in the homework pdf
    char *randomString = rand_string_alloc(7);
    printf("%s");
    free(*randomString);
    randomString = NULL;
}

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

int rand_string(char *s, size_t size){
    char *t = s;
    for(int i = 0; i < size; ++i){
        *t = randchar();
        ++t;
    }
    *t = '\0';
}