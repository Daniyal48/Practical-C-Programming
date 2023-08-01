/*Write a program to calculate the volume of a sphere
Formula is given*/
#include <stdio.h>

char line[100]; /*Console line input*/
float radius; /*get and store the radius from the user*/
float volume; /*Store the calculated volume of the sphere*/
const float PI = 3.1415927;
int main(){
    printf("Enter the value of the radius of the sphere (unit independent) ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &radius);

    /*Calculate step by step*/
    radius = radius * radius *radius;
    volume = 4 /3;
    volume = volume * radius * PI;
    printf("The volume of the sphere is %f\n", volume);
    return (0);

}