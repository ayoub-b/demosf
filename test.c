#include<stdio.h>

void reverse(char * str) {
    char *end = str;
    char tmp;
    if(str) {
        while(*end) {
             ++end;
        }
        --end;
        while (str < end){ 
           tmp = *str; 
           printf("tmp %d %c \n", tmp, tmp);
           *str++ =*end; 
           *end-- =tmp;
       }
    }
    printf("final :%s\n", end);
    //return str;
}

int main (int arc, char **argv ) {
    if (arc > 0) {
        reverse(argv[1]);
        printf("%s", argv[1]);
    }
    return 1;
}
