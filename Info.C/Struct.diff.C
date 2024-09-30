/*ELSHOURBGY MOHAMED   4H      21/09/2024 */
//Scrivere una funzione che passati due tempi ne calcoli la differenza

#include <stdio.h>

struct tempo {
    int seconds;
    int minutes;
    int hours;
};

void diffBetweenTimePeriod(struct tempo t1, struct tempo t2, struct tempo *diff)
{

    if(t1.seconds>t2.seconds)
    {
        diff->seconds = t1.seconds - t2.seconds ;
    }
    else
    {
        diff->seconds = (t1.seconds+60) - t2.seconds ;
        t1.minutes = t1.minutes - 1 ;
    }
    if(t1.minutes>t2.minutes)
    {
        diff->minutes = t1.minutes - t2.minutes ;
    }
    else
    {
        diff->minutes = (t1.minutes+60) - t2.minutes ;
        t1.hours = t1.hours - 1 ;
    }
    if(t1.hours>t2.hours)
    {
        diff->hours = t1.hours - t2.hours ;
    }
    else
    {
        printf(" Impossibile ");
    }
}

int main()
{
    struct tempo t1, t2, diff;


    t1.hours = 8;
    t1.minutes = 30;
    t1.seconds = 45;

    t2.hours = 8;
    t2.minutes = 15;
    t2.seconds = 30;

    diffBetweenTimePeriod(t1, t2, &diff);

    // Stampa la differenza
    printf("Differenza: %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}