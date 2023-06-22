#include<stdio.h>

struct timeperiod{
    int hours;
    int minutes;
    int seconds;
};

typedef struct timeperiod timeperiod;

void timediffernce(timeperiod t1,timeperiod t2){
    timeperiod difference;
    
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    int diffSeconds = totalSeconds1 > totalSeconds2 ? totalSeconds1 - totalSeconds2 : totalSeconds2 - totalSeconds1;

    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;
    
    printf("\nTime difference is : %d:%d:%d\n",difference.hours,difference.minutes,difference.seconds);
    
}

int main(){
    
    timeperiod t1,t2;
    
    printf("Enter first time period (hh:mm:ss): ");
    scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);
    
    printf("\nEnter second time period (hh:mm:ss): ");
    scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);
    
    timediffernce(t1,t2);
    
    return 0;
       
}
