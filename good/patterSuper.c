#include <stdio.h>

int abs(int n){
    if(n>0){return n;}
    else{return -n;}
}

int max(int a, int b){
    if (a<b){return b;}
    else{return a;}
}

int main(){
    int n = 3;

    for(int row = 1; row < 2*n;row++){
        for(int col = 1; col < 2*n;col++){
            printf("%d ",max(abs(col-n),abs(row-n))+1);
        }
        printf("\n");

    }

}