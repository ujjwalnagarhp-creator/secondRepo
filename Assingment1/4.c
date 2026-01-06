#include <stdio.h>
#include <string.h>

int count(char sArr[][25],int n, char k[]){
    int c=0;
    for(int i=0;i<n;i++){
        if(!strcmp(sArr[i],k)){
            c++;
        }
    }return c;
}

int main(){
    int n;
    if(!scanf("%d",&n)){
        printf("Enter a integer value");
        return 0;
    }
    if(n<=0){
        printf("Enter positive value of n");
        return 0;
    }
    
    char sArr[n][25];
    
    for(int i=0;i<n;i++){
        if(!scanf("%s",&sArr[i])){
            printf("Enter valid values!!");
            return 0;
        }
    }

    
    

    printf("Enter the string: ");
    char k[25];
    if(!scanf("%s",&k)){
            printf("Enter valid string");
            return 0;
    }

    printf("%d",count(sArr,n,k));



}