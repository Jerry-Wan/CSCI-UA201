#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    if(argc !=3) {
        printf("Sorry, Invaild argc input");
        exit(-1);
    }
    char *a;
    char *b;
    int flag = 0;
    for(a = argv[1]; *a != '\0'; a++){
        for (b = argv[2]; *b != '\0'; b++){
            if(*a == *b){
                flag = 1;
            }
        }
        if (flag == 0){
            putchar(*a);
    }
    flag = 0;
}
putchar('\n');
char *c;
char *d;
for (c = argv[2]; *c != '\0'; c++){
for (d = argv[1]; *d != '\0'; d++){
            if(*c == *d){
                flag = 1;
            }
        }
        if (flag == 0){
            putchar(*c);
        }
        flag = 0;
    }
    putchar('\n');
}
