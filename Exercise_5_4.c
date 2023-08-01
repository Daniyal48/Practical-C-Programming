/*Write a program to convert mile per hour to kilometer pe hour*/
#include <stdio.h>

float kilometer;
float miles;
char line[100];
const float Constant = 0.6123712;

int main(){

    printf("Enter miles per hour ");
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%f", &miles);
    kilometer = miles / Constant;
    printf("%f miles per hour will be %f kilometers per hour\n",miles,kilometer);
    return (0);

}