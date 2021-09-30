#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

char *substr(char *src, int pos, int len){
    char *dest=NULL;
    if(len>0){
        dest = (char *)malloc(len+1);
        strncat(dest,src+pos, len);
    }
    return dest;
}

int occu(char * ch, char c){
    int nb=0;
    if(strlen(ch)>0){
        if(ch[0] == c){
            nb = 1; 
        }
        nb = nb + occu( substr(ch, 1, strlen(ch)),c);
    }
    return nb; 
}

int main(){
    
    int sum = occu("fafax", "a");
    printf("%d\n", sum);
    return 0;
}
