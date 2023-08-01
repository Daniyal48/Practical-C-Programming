/*
Write a program that converts total number of minutes to hours and minutes.
(90 minutes = 1 hour 30 minutes)
*/
#include <stdio.h>
char line[100]; /*Variable for line input from console*/
int hours;  /*Take hours from the user*/
int minutes; /*Take minutes from the user*/
int total_hours; /*store total number of minutes*/

int main(){
    printf("Enter total number of minutes ");
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%d", &total_hours);
    hours = total_hours / 60;
    minutes = total_hours % 60;
    printf("%d minutes will be %d hours and %d minutes\n",total_hours,hours,minutes);
    return (0);
}