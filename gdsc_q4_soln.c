#include <stdio.h>

int main(){
    int n, p, l,t;

    scanf("%d %d %d %d",&n,&p,&l,&t);

    int nQ = (n+6)/7;
    int score=0;
    int day=0;
    for(int i=0;i<n;i++){
        if(nQ>1){
            score+= 2*t;
            nQ -=2;
        }else if(nQ>0){
            score += t;
            nQ--;
        }
        score += l;

        if(score>=p){
            day = i+1;
            break;
        }
    }

    printf("%d",n-day);


}