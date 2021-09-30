#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int somme(int n ){
    int sum = 0;
    if( n > 0){
        
        sum = somme(n-1) + n;
        printf("sum : %d\n", sum);
    }
    return sum;
     
}

int produit(int a, int b){
    int prod = 0;
    if( b > 0){
        prod = produit(a, b-1) + a; 
    }
    return prod;
}

int main(){
    /*int result = somme(1000);
    printf("result :%d\n", result);
    return 0 ;*/

    int result = produit(5, 20);
    printf("result :%d\n", result);
    return 0 ;
}



