#include <stdio.h>
#include <stdlib.h>

char *mcopy(char*s,int n){
    int len = 0;
    while (*(s+len) != 0){
        len++;
    }
    char *head = malloc(len*n*sizeof(char));
    char *result = head;
    int a = 0;
    int b = 0;
    char *p;
    for (a = 0; a < n; a++){
        for (b = 0; b < n; b++){
            int c =  a+b;
            *head = strtoul(c, &p,10);;
            head++;
        }

    }
    *head = 0;
    return result;
}

int main(){
    char s = "123def”";
    printf("%s",mcopy(s,3));
    return 0;
}
