/*
Question: Write a program that converts Centigrade to Fahrenheit
*/
#include <stdio.h>

char line[100]; /*input line from console*/
float f;    /*Variable for Fahrenheit*/
float c;    /*Variable for Centigrade*/

int main(){
    printf("Enter the value of Centigrade ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &c);
    /*Using step by7 step approach, as we have to do each and every step separately according to the book*/
    f = 9 /5;
    f = f * c;
    f += 32;
    /* You can also use the below method for calculation*/
    /*
    f = ((9 / 5) * C) + 32);
    */
    printf("The calculated value of %f centigrade is %f fahrenheit\n", c, f);
    return (0);
}