#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void afficheBin(int n){
    if( n > 1 ){
        afficheBin( n/2 );
    }
    printf("%d", n%2);
}

int main(){
    //afficheBin(150);
    printf("\n");
    return 0 ;
}


