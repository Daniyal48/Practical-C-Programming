/*
Question:Write a program that prints the perimeter of a rectangle given its height and width.
*/
#include <stdio.h>
char line[100]; /*Line input for console*/
float width;    /*Variable fof width*/
float height;   /*variable for height*/
float perimeter; /*Variable to store the results*/


int main(){
    
    printf("Enter the Height and Width of the retangle ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f %f",&width, &height);
    perimeter = 2 * (width + height);
    printf("The value of the perimeter is %f\n", perimeter);
    return (0);

}