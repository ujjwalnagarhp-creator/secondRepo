#include <stdio.h>

int count(char sArr[][25],int n, char k[]){
    printf("%s\n%s",sArr[0],k);
    int c=0;
    for(int i=0;i<n;i++){
        if(sArr[i]==k){
            printf("Yess\n");
            c++;}
        
    }return c;
}

int main(){
    int n;scanf("%d",&n);
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

    //printf("%s",sArr[0]);

    printf("Enter the string: ");
    char k[25];scanf("%s",&k);

    printf("%d",count(sArr,n,k));



}