#include <stdio.h>

int search(char s[],int size,char c){
    for(int i=0;i<size;i++){
        if(s[i]==c){return 1;}
    }
    return 0;
}

int main(){
    char s[30]; scanf("%s",&s);
    char c; scanf(" %c",&c);

    int size = 30;

    if(search(s,size,c)){
        printf("Yes");
    }else{
        printf("No");
    }
}