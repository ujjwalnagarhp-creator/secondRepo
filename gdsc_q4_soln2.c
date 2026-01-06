#include <stdio.h>

int main(){
    int k; scanf("%d",&k);

    for(int r=0;r<k;r++){

    int n;
    long long int p, l,t;

    scanf("%d %lld %lld %lld",&n,&p,&l,&t);

    int nQ = (n+6)/7;
    long long int score=0;
    int day=0;
    
    if((nQ/2)*(2*t+l)>=p){
        long long int s = 2*t+l;

        day = p%s? p/s+1: p/s;
    }else{
        day = nQ/2;
        p -= (nQ/2)*(2*t+l);

        if(nQ%2){
            if(p<= t+l){
            day++;
            }else{
                p -= (t+l);
                day++;

                day += p%l?p/l+1:p/l;
            }
        }else{
            day += p%l?p/l+1:p/l;
        }
        
        
    }

    printf("%d\n",n-day);

}


}