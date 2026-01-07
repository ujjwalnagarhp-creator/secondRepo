#include <stdio.h>

int BinarySearch(int nArr[],int low,int high,int k,int*c){
    if(low>high){return -1;}
    *c = *c + 1;
    int mid = (low+high)/2;
    if(nArr[mid]==k){return mid;}

    if(nArr[mid]>k){BinarySearch(nArr,low,mid-1,k,c);}
    else{BinarySearch(nArr,mid+1,high,k,c);}
    
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

    for(int i=0;i<n;i++){
        int c=0;

        int index = BinarySearch(nArr,0,n-1,nArr[i],&c);

        printf("Index of %d : %d , No of comparisons: %d\n",nArr[i],index,c);
    }

    int k;printf("Enter another value: ");scanf("%d",&k);
    
    int c=0;
    int index = BinarySearch(nArr,0,n-1,k,&c);
    printf("Index of %d: %d , No of comparisons: %d\n",k,index,c);
}