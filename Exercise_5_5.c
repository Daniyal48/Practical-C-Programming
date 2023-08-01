/*
Write a program taht takes hours and minutes as input, and then outputs the total number of minutes.
(1 hour 30 minutes = 90 minutes).
*/
#include <stdio.h>
char line[100]; /*Variable for line input from console*/
int hours;  /*Take hours from the user*/
int minutes; /*Take minutes from the user*/
int total_minutes; /*store total number of minutes*/
int main(){

    printf("Enter hours and minutes ");
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%d %d", &hours, &minutes);
    total_minutes = (hours * 60) + minutes;
    printf("%d hoours and %d minutes will be %d minutes in total\n",hours,minutes,total_minutes);
    return (0);

}