#include <stdio.h>

int upDate(int date,int month,int year){
    int org = date;

    //Specially for feburary
    if(month == 2){
        int c = (year%4 == 0)&&((year%400==0)|| !(year%100==0));
        date = date<28+c? date+1: 1;
    }
    else{
    //All other dates
    int f = month>7 ? (month-5)%2:month%2;
    date = date<(30+f)?date+1:1;
    }
    printf("%d / ",date);

    return org-date>0;

}

int upMonth(int carryIn,int month,int year){
    int org = month;
    month += carryIn;
    month = month>12?month%12:month;

    printf("%d / ",month);
    return org-month>0;
}

int upYear(int carryIn,int year){
    year += carryIn;
    printf("%d",year);
}


int main(){
    int date, month, year;

    printf("Input date month year:\n");
    scanf("%d %d %d",&date,&month,&year);

    printf("The next date is: ");

    
    upYear(upMonth(upDate(date,month,year),month,year),year);

    printf("\n");

}