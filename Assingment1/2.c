#include <stdio.h>

int LinearSearch(int nArr[],int n,int k){
    int flag=1;
    for(int i=0;i<n;i++){
        if(nArr[i]==k){
            return i;
        }
    }
    if(flag){return -1;}
}

int checkArr(int nArr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nArr[i]==nArr[j]){return 1;}
        }
    }
    return 0;
}

int main(){
    int n;scanf("%d",&n);
    if(n<=0){
        printf("Enter positive value of n");
        return 0;
    }
    
    int nArr[n];
    
    for(int i=0;i<n;i++){
        if(!scanf("%d",&nArr[i])){
            printf("Enter valid values!!");
            return 0;
        }
    }

    if(checkArr(nArr,n)){printf("Values are not Unique!!");return 0;}
    
    printf("Enter value of k: ");
    int k;scanf("%d",&k);


    printf("%d",LinearSearch(nArr,n,k));




    
    
}